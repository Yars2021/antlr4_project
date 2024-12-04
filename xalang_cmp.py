import sys
from antlr4 import *
from generated.XalangLexer import XalangLexer
from generated.XalangParser import XalangParser
from generated.XalangVisitorCompiler import XalangVisitorCompiler
from generated.XalangAstLinearizer import XalangAstLinearizer


def main(argv):
    input_stream = FileStream(argv[1])
    lexer = XalangLexer(input_stream)
    stream = CommonTokenStream(lexer)
    parser = XalangParser(stream)
    tree = parser.program()

    if parser.getNumberOfSyntaxErrors() > 0:
        print("syntax errors")
    else:
        visitor = XalangVisitorCompiler()
        visitor.visit(tree)

        linearizer = XalangAstLinearizer()
        linearizer.linearize(visitor.get_ast())

        linear = linearizer.get_linear()

        file = open(argv[2], "w")

        for lin in linear:
            file.write(str(lin))
            file.write("\n")

        file.close()


if __name__ == '__main__':
    main(sys.argv)
