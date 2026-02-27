#include <iostream>
#include "glad/glad.h"
#include <GLFW/glfw3.h>

int main()
{
    // Initializes glfw library to utilize its functions
    glfwInit();

    // Specifies the major/minor version of OpenGL
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    // Specifies which OpenGL profile (a package of functions) to use
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Creates a window using the data type GLFWwindow and the function glfwCreateWindow to make a window with given context
    GLFWwindow* window = glfwCreateWindow(800, 800, "window", NULL, NULL);
    // Error checks successful window creation
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window\n";
        glfwTerminate();
        return -1;
    }
    // Tells glfw to use the newly created window
    glfwMakeContextCurrent(window);

    // Tells glad to load the needed configurations for OpenGL
    gladLoadGL();

    //  Renders the specified area of the window
    glViewport(0, 0, 800, 800);

    // Prepares a color to replace the back buffer with
    glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
    // Clears the back buffer and assign the prepared color to it
    glClear(GL_COLOR_BUFFER_BIT);
    // Swaps the front buffer pixels for the back buffer pixels
    glfwSwapBuffers(window);

    // A loop that stops if the window is closed
    while (!glfwWindowShouldClose(window))
    {
        // Processes polled events associated with the window
        glfwPollEvents();
    }


    // Deletes and frees any remaining data
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
