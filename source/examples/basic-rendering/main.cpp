
#include <iostream>

#include <GLFW/glfw3.h>


void error(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}


void framebuffer_size_callback(GLFWwindow * /*window*/, int width, int height)
{
}

void key_callback(GLFWwindow * window, int key, int /*scancode*/, int action, int /*mods*/)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(window, 1);
    }
}


int main(int, char *[])
{
    glfwSetErrorCallback(error);

    if (!glfwInit())
        return 1;

    glfwDefaultWindowHints();

    GLFWwindow * window = glfwCreateWindow(640, 480, "Basic Rendering", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwSetKeyCallback(window, key_callback);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    glfwTerminate();
    return 0;
}
