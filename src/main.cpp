#include "smolng.hpp"

/*********************************
 * SmolNG - engine for small games
 * Author: Maciej Oliwa (ragnarlodbrok1992 on GitHub)
 * Build by following the tutorial at https://learnopengl.com/
 * and Game Engine Architecture by Jason Gregory.
 */

int main(void) {
  // Intro message
  printf("SmolNG\n");

  // OpenGL initialization
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  

  // End message - if it shows, everything went well
  printf("Everything went well, exiting...\n");
  return 0;
}

