import sys
from antlr4 import *
from generated.XalangLexer import XalangLexer
from generated.XalangParser import XalangParser
from generated.XalangVisitorCompiler import XalangVisitorCompiler


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

        print(visitor.get_ast())
        # file = open(argv[2], "w")
        #
        # for asm in asm_list:
        #     file.write(asm)
        #     file.write("\n")
        #
        # file.close()


if __name__ == '__main__':
    main(sys.argv)
