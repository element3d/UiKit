cmake_minimum_required(VERSION 3.0)

set (PROJECT UiKit)
project(${PROJECT})

file(GLOB SRC_PRIVATE CONFIGURE_DEPENDS
	private/*.cpp 
	private/*.h
)

file(GLOB SRC CONFIGURE_DEPENDS
	*.cpp 
	*.h
)
if (EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/../../cmake/get_elementary_libs.cmake)
	include(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/get_elementary_libs.cmake)
	get_elementary_libs()
endif()

add_library(${PROJECT} SHARED ${SRC_PRIVATE} ${SRC})

target_link_libraries(${PROJECT}
    element3d
)

if(ANDROID)
    target_link_libraries(${PROJECT}
		EGL
		GLESv3
		log
    )
elseif(WIN32)
	add_definitions(-D__E3_EXPORTING__)
    target_link_libraries(${PROJECT}
        glew32
        OpenGL32
    )
elseif(APPLE)
    target_link_libraries(${PROJECT}
        "-framework OpenGL"
        GLEW
    )
elseif(UNIX)
    target_link_libraries(${PROJECT}
        GL
        GLEW
    )
endif()
