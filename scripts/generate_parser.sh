#! /usr/bin/bash
cd src/frontend/parser/ && java -jar ../../../tools/antlr-4.13.1-complete.jar -visitor SMTLIBv2.g4 && cd ../../../
