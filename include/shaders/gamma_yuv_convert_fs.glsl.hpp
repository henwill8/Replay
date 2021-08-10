
constexpr const char* gamma_yuv_convert_fs_glsl = "#version 310 es\n"
"\n"
"// Shader from xyonico, thank you very much!\n"
"\n"
"precision mediump float;\n"
"\n"
"uniform sampler2D cameraTexture;\n"
"\n"
"layout (location = 0) in vec2 texCoords;\n"
"\n"
"out vec4 out_rgba;\n"
"\n"
"void main()\n"
"{\n"
"    vec3 color = texture(cameraTexture, texCoords).rgb;\n"
"\n"
"    out_rgba = vec4(rgba, 1.0);\n"
"    mat4 RGBtoYUV = mat4(\n"
"    0.257,  0.439, -0.148, 0.0,\n"
"    0.504, -0.368, -0.291, 0.0,\n"
"    0.098, -0.071,  0.439, 0.0,\n"
"    0.0625, 0.500,  0.500, 1.0\n"
"    );\n"
"\n"
"    // YUV transform\n"
"    vec3 colorYUV = (RGBtoYUV * vec4(color, 1.0)).rgb;\n"
"\n"
"    out_rgba = vec4(colorYUV, 1.0);\n"
"\n"
"//    vec3 rgba = texture(cameraTexture, texCoords).rgb;\n"
"\n"
"//    vec4 yuva = vec4(0.0);\n"
"//    yuva.x = rgba.r * 0.299 + rgba.g * 0.587 + rgba.b * 0.114;\n"
"//    yuva.y = rgba.r * -0.169 + rgba.g * -0.331 + rgba.b * 0.5 + 0.5;\n"
"//    yuva.z = rgba.r * 0.5 + rgba.g * -0.419 + rgba.b * -0.081 + 0.5;\n"
"//    yuva.w = 1.0;\n"
"//\n"
"//    out_rgba = yuva;\n"
"}\n"
;
