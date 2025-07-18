#ifndef VULKAN_RENDERER_HPP
#define VULKAN_RENDERER_HPP

#include <vulkan/vulkan.h>
#include <vector>
#include <string>

class VulkanRenderer : public Renderer {
public:
    VulkanRenderer();
    ~VulkanRenderer() override;

    void init(Window& window) override;
    void drawFrame() override;
    void cleanup() override;
};

#endif // VULKAN_RENDERER_HPP
