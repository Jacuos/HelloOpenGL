#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
GLFWwindow* CreateWindow();
int RenderLoop(GLFWwindow *window);
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void ProcessInput(GLFWwindow *window);
void ClearScreen();
