import sys
from antlr4 import *
from generated.XalangLexer import XalangLexer
from generated.XalangParser import XalangParser
from generated.XalangVisitor import XalangVisitor


def main(argv):
    input_stream = FileStream(argv[1])
    lexer = XalangLexer(input_stream)
    stream = CommonTokenStream(lexer)
    parser = XalangParser(stream)
    tree = parser.program()

    if parser.getNumberOfSyntaxErrors() > 0:
        print("syntax errors")
    else:
        visitor = XalangVisitor()
        visitor.visit(tree)


if __name__ == '__main__':
    main(sys.argv)
