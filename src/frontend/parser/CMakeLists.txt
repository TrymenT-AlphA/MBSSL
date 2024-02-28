project(parser)

aux_source_directory(. PARSER_SRC_FILES)

add_library(parser SHARED ${PARSER_SRC_FILES})
