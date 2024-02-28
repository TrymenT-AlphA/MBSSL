project(expr)

aux_source_directory(. EXPR_SRC_FILES)

add_library(expr SHARED ${EXPR_SRC_FILES})
