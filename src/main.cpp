#include "smolng.hpp"

/*********************************
 * SmolNG - engine for small games
 * Author: Maciej Oliwa (ragnarlodbrok1992 on GitHub)
 * Build by following the tutorial at https://learnopengl.com/
 * and Game Engine Architecture by Jason Gregory.
 */

const int WIDTH = 1280;
const int HEIGHT = 720;

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
  glViewport(0, 0, width, height);
}

void ProcessInput(GLFWwindow* window) {
  // Closing window using ESC key
  if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
    glfwSetWindowShouldClose(window, true);
  }
}

int main(void) {
  // Intro message
  printf("SmolNG\n");

  // OpenGL initialization
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  
  // Window creation
  GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "SmolNG", NULL, NULL);
  if (window == NULL) {
    printf("Failed to create GLFW window\n");
    glfwTerminate();
    return -1;
  }

  // Make the context of our window the main context on the current thread
  glfwMakeContextCurrent(window);

  // Initialize GLAD
  if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
    printf("Failed to initialize GLAD\n");
    return -1;
  }

  // Is this working?
  // gladLoadGLLoader((GLADloadproc) glfwGetProcAddress);
  // gladLoadGL();

  // Set viewport
  glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

  // Main loop
  while(!glfwWindowShouldClose(window)) {
    // Input
    ProcessInput(window);

    // Rendering commands
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT); 

    // Check and call events and swap buffers
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  // Terminate GLFW
  glfwTerminate();

  // End message - if it shows, everything went well
  printf("Everything went well, exiting...\n");
  return 0;
}

