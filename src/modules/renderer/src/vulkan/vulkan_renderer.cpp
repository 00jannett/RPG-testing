#include "include/vulkan_renderer.hpp"
#include <stdexcept>
#include <vector>

VulkanRenderer::VulkanRenderer(const std::vector<std::string>& extensions)
: m_Instanse(extensions),
  m_PhysicalDevice(m_Instanse.Get()),
  m_Device(m_PhysicalDevice.Get())
{
    init();
}

VulkanRenderer::~VulkanRenderer() {
    cleanup();
}

void VulkanRenderer::init() {
    createSurface();
    pickPhysicalDevice();
    createLogicalDevice();
    createSwapChain();
    createRenderPass();
    createGraphicsPipeline();
    createFramebuffers();
    createCommandPool();
    createCommandBuffers();
}

void VulkanRenderer::cleanup() {
    vkDeviceWaitIdle(m_Device.Get());

}
