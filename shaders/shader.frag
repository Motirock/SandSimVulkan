#version 450

layout(binding = 1) uniform sampler2D texSampler;

layout(location = 0) in flat vec3 fragColor;
layout(location = 1) in flat vec2 fragTexCoord;

layout(location = 0) out vec4 outColor;

void main() {
    vec4 sampledColor = texture(texSampler, fragTexCoord);
    outColor = vec4(sampledColor.x*fragColor.x, sampledColor.y*fragColor.y, sampledColor.z*fragColor.z, sampledColor.a);
}