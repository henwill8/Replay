#version 310 es

precision mediump float;

uniform vec2 resolution;
uniform sampler2D myTexture;

//layout (location = 0) in vec2 texCoords;
out vec4 out_rgb;

void main() {
    float gamma = 2.2;
    vec3 textureColor = texture(myTexture, resolution).rgb;
    vec3 diffuseColor = pow(textureColor, vec3(gamma));

    out_rgb = vec4(diffuseColor, 1.0f);
}

