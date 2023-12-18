#include "engine.h"

int vulk_app::initWindow()
{
    // Don't use GLFW api; Don't allow resizing
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    // Create Window
    window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
}

int vulk_app::initVulkan()
{
    createInstance();
}

void vulk_app::createInstance()
{
    // Create information on the application
    VkApplicationInfo appInfo;
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = title.c_str();
    appInfo.apiVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = "No Engine";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_0;

    // Apply instance creation info
    VkInstanceCreateInfo instanceInfo;
    instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceInfo.pApplicationInfo = &appInfo;

    // Get glfw extensions
    uint32_t glfwExtensionCount = 0;
    const char** glfwExtensions;
    glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);
    // Pass extension to instance information
    instanceInfo.enabledExtensionCount = glfwExtensionCount;
    instanceInfo.ppEnabledExtensionNames = glfwExtensions;

    // No layers for now
    instanceInfo.enabledLayerCount = 0;

    // Create instance
    if (vkCreateInstance(&instanceInfo, nullptr, &instance) != VK_SUCCESS)
    {
        throw std::runtime_error("Failed to create info");
    }
}

vulk_app::vulk_app(std::string _title) 
    : title(_title), width(1007), height(641)
{
    this->initWindow();
    this->initVulkan();
}

vulk_app::vulk_app(std::string _title, const int _width, const int _height) 
    : title(_title), width(_width), height(_height)
{
    this->initWindow();
    this->initVulkan();
}

void vulk_app::vulk_loop()
{
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }
}

vulk_app::~vulk_app()
{
    glfwDestroyWindow(window);
    glfwTerminate();
}