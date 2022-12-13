cmake_minimum_required(VERSION 3.0)

set (PROJECT UiKitTestDesktop)
project(${PROJECT})

set (SRC 
	main.cpp 
	MainWindow.h 
	MainWindow.cpp
)

if(EMSCRIPTEN)
	set(USE_FLAGS " -s FULL_ES3=1 -s USE_GLFW=3 -s USE_FREETYPE=1 -s WASM=1 -s ASYNCIFY=1 -s ALLOW_MEMORY_GROWTH=1 -s  ASYNCIFY_STACK_SIZE=100000 -O3")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${USE_FLAGS}")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${USE_FLAGS}")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${USE_FLAGS}")
	set(CMAKE_EXECUTABLE_SUFFIX .html)
	add_definitions(-D__E3_TARGET_WEB__)
	add_definitions(-D__E3_OS_WEB__)
else()
	add_definitions(-D__E3_TARGET_DESKTOP__)
endif()

add_executable(${PROJECT} ${SRC})

target_link_libraries(${PROJECT} 
	UiKitTest 	
)

set_property(TARGET ${PROJECT} PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")