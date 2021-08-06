#version 310 es

layout (location = 0) out vec2 texCoords;

void main() {
    texCoords = vec2(texCoords.s, 1.0 - texCoords.t);
}
