#ifndef _H_SHADER_CONSTS
#define _H_SHADER_CONSTS

// Shader consts
const char* SHADER_VERTEX = R"(
  #version 330 core

  layout (location = 0) in vec3 aPos;
  layout (location = 1) in vec3 aColor;

  out vec3 outColor;

  void main() {
    gl_Position = vec4(aPos, 1.0);
    outColor = aColor;
  }
)";

const char* SHADER_FRAGMENT = R"(
  #version 330 core

  out vec4 FragColor;

  in vec3 outColor;

  void main() {
    FragColor = vec4(outColor, 1.0f);
  }
)";


#endif // _H_SHADER_CONSTS
