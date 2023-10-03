#version 450

layout(binding = 0) uniform UniformBufferObject {
    vec2 pos;
    float heightWidthRatio;
} ubo;

layout(location = 0) in vec3 inPosition;
layout(location = 1) in vec3 inColor;
layout(location = 2) in vec2 inTexCoord;

layout(location = 0) out flat vec3 fragColor;
layout(location = 1) out flat vec2 fragTexCoord;

void main() {
    gl_Position = vec4((inPosition.x-ubo.pos.x)*ubo.heightWidthRatio, inPosition.y-ubo.pos.y, inPosition.z, 1.0);
    fragColor = inColor;
    fragTexCoord = inTexCoord;
}