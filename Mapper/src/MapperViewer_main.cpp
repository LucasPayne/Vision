#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <opencv2/opencv.hpp>
#include "lib/interactive_graphics_context/interactive_graphics_context.h"
#include "lib/opengl_utilities/gl.h"


class App : public IGC::Callbacks {
public:
    App() {};

    void close();
    void loop();
    void keyboard_handler(KeyboardEvent e);
    void mouse_handler(MouseEvent e);
    void window_handler(WindowEvent e);
};


void App::close()
{
}
void App::loop()
{
}
void App::keyboard_handler(KeyboardEvent e)
{
}
void App::mouse_handler(MouseEvent e)
{
}
void App::window_handler(WindowEvent e)
{
}


int main(void)
{
    srand(time(0));

    printf("[main] Creating context...\n");
    IGC::Context context("Context");
    printf("[main] Creating app...\n");
    App app;
    printf("[main] Adding app callbacks...\n");
    context.add_callbacks(&app);

    printf("[main] Entering loop...\n");
    context.enter_loop();
    context.close();
}
