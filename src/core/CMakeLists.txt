#
#
#

add_library(core STATIC
	dxf.cc
	dxf.h
)

target_include_directories(core INTERFACE .)