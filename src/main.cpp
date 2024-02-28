#include <iostream>

#include "frontend/parser/SMTLIBv2Lexer.h"
#include "frontend/parser/SMTLIBv2Parser.h"
#include "frontend/visitor/SMTLIBVisitor.hpp"

int main(int argc, char** argv) {
  if (argc <= 1) {
    std::cout << "Error: no input file" << std::endl;
    return 0;
  }

  const char* input_file = argv[1];

  std::ifstream input_stream;

  input_stream.open(input_file, std::ios::in);

  antlr4::ANTLRInputStream antlr_input_stream(input_stream);
  SMTLIBv2Lexer smtlibv2_lexer(&antlr_input_stream);
  antlr4::CommonTokenStream antlr_common_token_stream(&smtlibv2_lexer);
  SMTLIBv2Parser smtlibv2_parser(&antlr_common_token_stream);

  return 0;
}
