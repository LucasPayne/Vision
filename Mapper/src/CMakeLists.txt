#
# src/
# Builds executables:
#    MapperViewer
#

add_executable(MapperViewer
    MapperViewer_main.cpp
)
target_compile_options(MapperViewer PRIVATE -Wall -g)

target_link_libraries(MapperViewer
    ${OpenCV_LIBS}
    QtCore QtGui QtOpenGL
    GL GLU glut GLEW dl
)
# target_link_libraries(MapperViewer glfw)
target_link_libraries(MapperViewer Eigen3::Eigen)

target_link_libraries(MapperViewer interactive_graphics_context)
target_link_libraries(MapperViewer opengl_utilities)
target_link_libraries(MapperViewer glfw)
