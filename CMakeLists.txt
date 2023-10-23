cmake_minimum_required(VERSION 2.8.9)

set(CMAKE_SUPPRESS_REGENERATION true) 
SET (CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SAFESEH:NO")
SET (CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /SAFESEH:NO")
SET (CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} /SAFESEH:NO")

#------------------------------------------------------
#	Create new project
#------------------------------------------------------
project (open_entity_lib)

# Get Headers
file (GLOB ENGINE_HEADERS "src/*.h" "src/math/*.h")

#------------------------------------------------------
#	Add open_entity_lib
#------------------------------------------------------
add_library(open_entity_lib
	#Source files
	src/entity.cpp
	src/managed.cpp
	src/component.cpp
	src/math/math.cpp
	src/math/vector.cpp
	
	#Headers
	src/entity.h
	src/managed.h
	src/component.h
	src/math/math.h
	src/math/vector.h
)