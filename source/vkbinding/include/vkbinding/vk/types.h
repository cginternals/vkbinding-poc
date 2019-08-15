
#pragma once


#include <cstddef>
#include <cstdint>
#include <array>
#include <string>

#include <vk_platform.h>
#include <X11/Xlib.h>
#include <X11/extensions/Xrandr.h>
#include <wayland-client.h>
#include <windows.h>
#include <xcb/xcb.h>
#include <zircon/types.h>
#include <ggp_c/vulkan_types.h>

#ifdef _MSC_VER
#define VK_APIENTRY __stdcall
#else
#define VK_APIENTRY
#endif

#include <vkbinding/novk.h>
#include <vkbinding/vkbinding_api.h>
#include <vkbinding/vkbinding_features.h>
#include <vkbinding/vk/boolean.h>


namespace vk
{


enum class VKextension : int;
enum class VKenum : unsigned int;
Display
VisualID
Window
RROutput
wl_display
wl_surface
HINSTANCE
HWND
HMONITOR
HANDLE
SECURITY_ATTRIBUTES
DWORD
LPCWSTR
xcb_connection_t
xcb_visualid_t
xcb_window_t
zx_handle_t
GgpStreamDescriptor
GgpFrameToken
struct ;
struct ;
using VkSampleMask = uint32_t;
using VkBool32 = uint32_t;
using VkFlags = uint32_t;
using VkDeviceSize = uint64_t;
using VkDeviceAddress = uint64_t;
void
char
float
uint8_t
uint16_t
uint32_t
uint64_t
int32_t
size_t
int
)VK_DEFINE_HANDLE(
)VK_DEFINE_HANDLE(
)VK_DEFINE_HANDLE(
)VK_DEFINE_HANDLE(
)VK_DEFINE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
)VK_DEFINE_NON_DISPATCHABLE_HANDLE(
enum class VkAttachmentLoadOp : unsigned int;
enum class VkAttachmentStoreOp : unsigned int;
enum class VkBlendFactor : unsigned int;
enum class VkBlendOp : unsigned int;
enum class VkBorderColor : unsigned int;
enum class VkFramebufferCreateFlagBits : unsigned int;
enum class VkQueryPoolCreateFlagBits : unsigned int;
enum class VkRenderPassCreateFlagBits : unsigned int;
enum class VkSamplerCreateFlagBits : unsigned int;
enum class VkPipelineCacheHeaderVersion : unsigned int;
enum class VkPipelineLayoutCreateFlagBits : unsigned int;
enum class VkPipelineCacheCreateFlagBits : unsigned int;
enum class VkPipelineDepthStencilStateCreateFlagBits : unsigned int;
enum class VkPipelineDynamicStateCreateFlagBits : unsigned int;
enum class VkPipelineColorBlendStateCreateFlagBits : unsigned int;
enum class VkPipelineMultisampleStateCreateFlagBits : unsigned int;
enum class VkPipelineRasterizationStateCreateFlagBits : unsigned int;
enum class VkPipelineViewportStateCreateFlagBits : unsigned int;
enum class VkPipelineTessellationStateCreateFlagBits : unsigned int;
enum class VkPipelineInputAssemblyStateCreateFlagBits : unsigned int;
enum class VkPipelineVertexInputStateCreateFlagBits : unsigned int;
enum class VkPipelineShaderStageCreateFlagBits : unsigned int;
enum class VkDescriptorSetLayoutCreateFlagBits : unsigned int;
enum class VkBufferViewCreateFlagBits : unsigned int;
enum class VkInstanceCreateFlagBits : unsigned int;
enum class VkDeviceQueueCreateFlagBits : unsigned int;
enum class VkBufferCreateFlagBits : unsigned int;
enum class VkBufferUsageFlagBits : unsigned int;
enum class VkColorComponentFlagBits : unsigned int;
enum class VkComponentSwizzle : unsigned int;
enum class VkCommandPoolCreateFlagBits : unsigned int;
enum class VkCommandPoolResetFlagBits : unsigned int;
enum class VkCommandBufferResetFlagBits : unsigned int;
enum class VkCommandBufferLevel : unsigned int;
enum class VkCommandBufferUsageFlagBits : unsigned int;
enum class VkCompareOp : unsigned int;
enum class VkCullModeFlagBits : unsigned int;
enum class VkDescriptorType : unsigned int;
enum class VkDeviceCreateFlagBits : unsigned int;
enum class VkDynamicState : unsigned int;
enum class VkFenceCreateFlagBits : unsigned int;
enum class VkPolygonMode : unsigned int;
enum class VkFormat : unsigned int;
enum class VkFormatFeatureFlagBits : unsigned int;
enum class VkFrontFace : unsigned int;
enum class VkImageAspectFlagBits : unsigned int;
enum class VkImageCreateFlagBits : unsigned int;
enum class VkImageLayout : unsigned int;
enum class VkImageTiling : unsigned int;
enum class VkImageType : unsigned int;
enum class VkImageUsageFlagBits : unsigned int;
enum class VkImageViewCreateFlagBits : unsigned int;
enum class VkImageViewType : unsigned int;
enum class VkSharingMode : unsigned int;
enum class VkIndexType : unsigned int;
enum class VkLogicOp : unsigned int;
enum class VkMemoryHeapFlagBits : unsigned int;
enum class VkAccessFlagBits : unsigned int;
enum class VkMemoryPropertyFlagBits : unsigned int;
enum class VkPhysicalDeviceType : unsigned int;
enum class VkPipelineBindPoint : unsigned int;
enum class VkPipelineCreateFlagBits : unsigned int;
enum class VkPrimitiveTopology : unsigned int;
enum class VkQueryControlFlagBits : unsigned int;
enum class VkQueryPipelineStatisticFlagBits : unsigned int;
enum class VkQueryResultFlagBits : unsigned int;
enum class VkQueryType : unsigned int;
enum class VkQueueFlagBits : unsigned int;
enum class VkSubpassContents : unsigned int;
enum class VkResult : unsigned int;
enum class VkShaderStageFlagBits : unsigned int;
enum class VkSparseMemoryBindFlagBits : unsigned int;
enum class VkStencilFaceFlagBits : unsigned int;
enum class VkStencilOp : unsigned int;
enum class VkStructureType : unsigned int;
enum class VkSystemAllocationScope : unsigned int;
enum class VkInternalAllocationType : unsigned int;
enum class VkSamplerAddressMode : unsigned int;
enum class VkFilter : unsigned int;
enum class VkSamplerMipmapMode : unsigned int;
enum class VkVertexInputRate : unsigned int;
enum class VkPipelineStageFlagBits : unsigned int;
enum class VkSparseImageFormatFlagBits : unsigned int;
enum class VkSampleCountFlagBits : unsigned int;
enum class VkAttachmentDescriptionFlagBits : unsigned int;
enum class VkDescriptorPoolCreateFlagBits : unsigned int;
enum class VkDependencyFlagBits : unsigned int;
enum class VkObjectType : unsigned int;
enum class VkDescriptorBindingFlagBitsEXT : unsigned int;
enum class VkConditionalRenderingFlagBitsEXT : unsigned int;
enum class VkIndirectCommandsLayoutUsageFlagBitsNVX : unsigned int;
enum class VkIndirectCommandsTokenTypeNVX : unsigned int;
enum class VkObjectEntryUsageFlagBitsNVX : unsigned int;
enum class VkObjectEntryTypeNVX : unsigned int;
enum class VkDescriptorUpdateTemplateType : unsigned int;
enum class VkDescriptorUpdateTemplateTypeKHR : unsigned int;
using VkDescriptorUpdateTemplateType = VkDescriptorUpdateTemplateTypeKHR;
enum class VkViewportCoordinateSwizzleNV : unsigned int;
enum class VkDiscardRectangleModeEXT : unsigned int;
enum class VkSubpassDescriptionFlagBits : unsigned int;
enum class VkPointClippingBehavior : unsigned int;
enum class VkPointClippingBehaviorKHR : unsigned int;
using VkPointClippingBehavior = VkPointClippingBehaviorKHR;
enum class VkCoverageModulationModeNV : unsigned int;
enum class VkCoverageReductionModeNV : unsigned int;
enum class VkValidationCacheHeaderVersionEXT : unsigned int;
enum class VkShaderInfoTypeAMD : unsigned int;
enum class VkQueueGlobalPriorityEXT : unsigned int;
enum class VkTimeDomainEXT : unsigned int;
enum class VkConservativeRasterizationModeEXT : unsigned int;
enum class VkResolveModeFlagBitsKHR : unsigned int;
enum class VkGeometryFlagBitsNV : unsigned int;
enum class VkGeometryInstanceFlagBitsNV : unsigned int;
enum class VkBuildAccelerationStructureFlagBitsNV : unsigned int;
enum class VkCopyAccelerationStructureModeNV : unsigned int;
enum class VkAccelerationStructureTypeNV : unsigned int;
enum class VkGeometryTypeNV : unsigned int;
enum class VkRayTracingShaderGroupTypeNV : unsigned int;
enum class VkAccelerationStructureMemoryRequirementsTypeNV : unsigned int;
enum class VkMemoryOverallocationBehaviorAMD : unsigned int;
enum class VkScopeNV : unsigned int;
enum class VkComponentTypeNV : unsigned int;
enum class VkPipelineCreationFeedbackFlagBitsEXT : unsigned int;
enum class VkPerformanceConfigurationTypeINTEL : unsigned int;
enum class VkQueryPoolSamplingModeINTEL : unsigned int;
enum class VkPerformanceOverrideTypeINTEL : unsigned int;
enum class VkPerformanceParameterTypeINTEL : unsigned int;
enum class VkPerformanceValueTypeINTEL : unsigned int;
enum class VkLineRasterizationModeEXT : unsigned int;
enum class VkShaderModuleCreateFlagBits : unsigned int;
enum class VkColorSpaceKHR : unsigned int;
enum class VkCompositeAlphaFlagBitsKHR : unsigned int;
enum class VkDisplayPlaneAlphaFlagBitsKHR : unsigned int;
enum class VkPresentModeKHR : unsigned int;
enum class VkSurfaceTransformFlagBitsKHR : unsigned int;
enum class VkDebugReportFlagBitsEXT : unsigned int;
enum class VkDebugReportObjectTypeEXT : unsigned int;
enum class VkRasterizationOrderAMD : unsigned int;
enum class VkExternalMemoryHandleTypeFlagBitsNV : unsigned int;
enum class VkExternalMemoryFeatureFlagBitsNV : unsigned int;
enum class VkValidationCheckEXT : unsigned int;
enum class VkValidationFeatureEnableEXT : unsigned int;
enum class VkValidationFeatureDisableEXT : unsigned int;
enum class VkExternalMemoryHandleTypeFlagBits : unsigned int;
enum class VkExternalMemoryHandleTypeFlagBitsKHR : unsigned int;
enum class VkExternalMemoryFeatureFlagBits : unsigned int;
enum class VkExternalMemoryFeatureFlagBitsKHR : unsigned int;
enum class VkExternalSemaphoreHandleTypeFlagBits : unsigned int;
enum class VkExternalSemaphoreHandleTypeFlagBitsKHR : unsigned int;
enum class VkExternalSemaphoreFeatureFlagBits : unsigned int;
enum class VkExternalSemaphoreFeatureFlagBitsKHR : unsigned int;
enum class VkSemaphoreImportFlagBits : unsigned int;
enum class VkSemaphoreImportFlagBitsKHR : unsigned int;
enum class VkExternalFenceHandleTypeFlagBits : unsigned int;
enum class VkExternalFenceHandleTypeFlagBitsKHR : unsigned int;
enum class VkExternalFenceFeatureFlagBits : unsigned int;
enum class VkExternalFenceFeatureFlagBitsKHR : unsigned int;
enum class VkFenceImportFlagBits : unsigned int;
enum class VkFenceImportFlagBitsKHR : unsigned int;
enum class VkSurfaceCounterFlagBitsEXT : unsigned int;
enum class VkDisplayPowerStateEXT : unsigned int;
enum class VkDeviceEventTypeEXT : unsigned int;
enum class VkDisplayEventTypeEXT : unsigned int;
enum class VkPeerMemoryFeatureFlagBits : unsigned int;
enum class VkPeerMemoryFeatureFlagBitsKHR : unsigned int;
enum class VkMemoryAllocateFlagBits : unsigned int;
enum class VkMemoryAllocateFlagBitsKHR : unsigned int;
enum class VkDeviceGroupPresentModeFlagBitsKHR : unsigned int;
enum class VkSwapchainCreateFlagBitsKHR : unsigned int;
enum class VkSubgroupFeatureFlagBits : unsigned int;
enum class VkTessellationDomainOrigin : unsigned int;
enum class VkTessellationDomainOriginKHR : unsigned int;
using VkTessellationDomainOrigin = VkTessellationDomainOriginKHR;
enum class VkSamplerYcbcrModelConversion : unsigned int;
enum class VkSamplerYcbcrModelConversionKHR : unsigned int;
using VkSamplerYcbcrModelConversion = VkSamplerYcbcrModelConversionKHR;
enum class VkSamplerYcbcrRange : unsigned int;
enum class VkSamplerYcbcrRangeKHR : unsigned int;
using VkSamplerYcbcrRange = VkSamplerYcbcrRangeKHR;
enum class VkChromaLocation : unsigned int;
enum class VkChromaLocationKHR : unsigned int;
using VkChromaLocation = VkChromaLocationKHR;
enum class VkSamplerReductionModeEXT : unsigned int;
enum class VkBlendOverlapEXT : unsigned int;
enum class VkDebugUtilsMessageSeverityFlagBitsEXT : unsigned int;
enum class VkDebugUtilsMessageTypeFlagBitsEXT : unsigned int;
enum class VkFullScreenExclusiveEXT : unsigned int;
enum class VkShaderFloatControlsIndependenceKHR : unsigned int;
enum class VkSwapchainImageUsageFlagBitsANDROID : unsigned int;
enum class VkVendorId : unsigned int;
enum class VkDriverIdKHR : unsigned int;
enum class VkShadingRatePaletteEntryNV : unsigned int;
enum class VkCoarseSampleOrderTypeNV : unsigned int;
using PFN_vkInternalAllocationNotification = void (VKAPI_PTR *)(void*                                       pUserData,size_t                                      size,VkInternalAllocationType                    allocationType,VkSystemAllocationScope                     allocationScope);
using PFN_vkInternalFreeNotification = void (VKAPI_PTR *)(void*                                       pUserData,size_t                                      size,VkInternalAllocationType                    allocationType,VkSystemAllocationScope                     allocationScope);
using PFN_vkReallocationFunction = void* (VKAPI_PTR *)(void*                                       pUserData,void*                                       pOriginal,size_t                                      size,size_t                                      alignment,VkSystemAllocationScope                     allocationScope);
using PFN_vkAllocationFunction = void* (VKAPI_PTR *)(void*                                       pUserData,size_t                                      size,size_t                                      alignment,VkSystemAllocationScope                     allocationScope);
using PFN_vkFreeFunction = void (VKAPI_PTR *)(void*                                       pUserData,void*                                       pMemory);
using PFN_vkVoidFunction = void (VKAPI_PTR *)(void);
using PFN_vkDebugReportCallbackEXT = VkBool32 (VKAPI_PTR *)(VkDebugReportFlagsEXT                       flags,VkDebugReportObjectTypeEXT                  objectType,uint64_t                                    object,size_t                                      location,int32_t                                     messageCode,const char*                                 pLayerPrefix,const char*                                 pMessage,void*                                       pUserData);
using PFN_vkDebugUtilsMessengerCallbackEXT = VkBool32 (VKAPI_PTR *)(VkDebugUtilsMessageSeverityFlagBitsEXT           messageSeverity,VkDebugUtilsMessageTypeFlagsEXT                  messageTypes,const VkDebugUtilsMessengerCallbackDataEXT*      pCallbackData,void*                                            pUserData);
VkStructureType 
struct VkBaseOutStructure* 
const struct VkBaseInStructure* 
int32_t        
uint32_t        
float 
float                       
VkOffset2D     
VkExtent2D     
VkRect2D       
uint32_t       
VkComponentSwizzle 
VkPhysicalDeviceType 
char           
uint8_t        
VkPhysicalDeviceLimits 
VkPhysicalDeviceSparseProperties 
char            
const void*     
const char*     
void*           
PFN_vkAllocationFunction   
PFN_vkReallocationFunction 
PFN_vkFreeFunction    
PFN_vkInternalAllocationNotification 
PFN_vkInternalFreeNotification 
VkDeviceQueueCreateFlags    
const float*    
VkDeviceCreateFlags    
const VkDeviceQueueCreateInfo* 
uint32_t               
const char* const*      
const VkPhysicalDeviceFeatures* 
VkInstanceCreateFlags  
const VkApplicationInfo* 
VkQueueFlags           
VkExtent3D             
VkMemoryType           
VkMemoryHeap           
const void*            
VkDeviceSize           
VkImageAspectFlags     
VkSparseImageFormatFlags 
VkSparseImageFormatProperties 
VkMemoryPropertyFlags  
VkMemoryHeapFlags      
VkDeviceMemory         
VkFormatFeatureFlags   
VkSampleCountFlags     
VkBuffer               
VkSampler       
VkImageView     
VkImageLayout   
VkDescriptorSet        
VkDescriptorType       
const VkDescriptorImageInfo* 
const VkDescriptorBufferInfo* 
const VkBufferView*    
VkBufferCreateFlags    
VkBufferUsageFlags     
VkSharingMode          
const uint32_t*        
VkBufferViewCreateFlags
VkFormat               
VkAccessFlags          
VkImageLayout          
VkImage                
VkImageSubresourceRange 
VkImageCreateFlags     
VkImageType            
VkSampleCountFlagBits  
VkImageTiling          
VkImageUsageFlags      
VkImageViewCreateFlags 
VkImageViewType        
VkComponentMapping     
VkDeviceSize                       
VkDeviceSize 
VkSparseMemoryBindFlags
VkImageSubresource     
VkOffset3D             
VkBuffer 
const VkSparseMemoryBind* 
VkImage 
const VkSparseImageMemoryBind* 
const VkSemaphore*     
const VkSparseBufferMemoryBindInfo* 
const VkSparseImageOpaqueMemoryBindInfo* 
const VkSparseImageMemoryBindInfo* 
VkImageSubresourceLayers 
VkShaderModuleCreateFlags 
size_t                 
const uint32_t*            
uint32_t 
VkShaderStageFlags     
const VkSampler*       
VkDescriptorSetLayoutCreateFlags    
const VkDescriptorSetLayoutBinding* 
VkDescriptorPoolCreateFlags  
const VkDescriptorPoolSize* 
VkDescriptorPool       
const VkDescriptorSetLayout* 
uint32_t                     
size_t 
const VkSpecializationMapEntry* 
VkPipelineShaderStageCreateFlags    
VkShaderStageFlagBits  
VkShaderModule         
const char*            
const VkSpecializationInfo* 
VkPipelineCreateFlags  
VkPipelineShaderStageCreateInfo 
VkPipelineLayout       
VkPipeline      
int32_t                
VkVertexInputRate      
VkPipelineVertexInputStateCreateFlags    
const VkVertexInputBindingDescription* 
const VkVertexInputAttributeDescription* 
VkPipelineInputAssemblyStateCreateFlags    
VkPrimitiveTopology    
VkBool32               
VkPipelineTessellationStateCreateFlags    
VkPipelineViewportStateCreateFlags    
const VkViewport*      
const VkRect2D*        
const void* 
VkPipelineRasterizationStateCreateFlags    
VkPolygonMode          
VkCullModeFlags        
VkFrontFace            
float                  
VkPipelineMultisampleStateCreateFlags    
const VkSampleMask*    
VkBlendFactor          
VkBlendOp              
VkColorComponentFlags  
VkPipelineColorBlendStateCreateFlags    
VkLogicOp              
const VkPipelineColorBlendAttachmentState* 
VkPipelineDynamicStateCreateFlags    
const VkDynamicState*  
VkStencilOp            
VkCompareOp            
VkPipelineDepthStencilStateCreateFlags    
VkStencilOpState       
const VkPipelineShaderStageCreateInfo* 
const VkPipelineVertexInputStateCreateInfo* 
const VkPipelineInputAssemblyStateCreateInfo* 
const VkPipelineTessellationStateCreateInfo* 
const VkPipelineViewportStateCreateInfo* 
const VkPipelineRasterizationStateCreateInfo* 
const VkPipelineMultisampleStateCreateInfo* 
const VkPipelineDepthStencilStateCreateInfo* 
const VkPipelineColorBlendStateCreateInfo* 
const VkPipelineDynamicStateCreateInfo* 
VkRenderPass           
VkPipelineCacheCreateFlags    
VkPipelineLayoutCreateFlags    
const VkPushConstantRange* 
VkSamplerCreateFlags   
VkFilter               
VkSamplerMipmapMode    
VkSamplerAddressMode   
VkBorderColor          
VkCommandPoolCreateFlags   
VkCommandPool          
VkCommandBufferLevel   
VkRenderPass    
VkFramebuffer   
VkQueryControlFlags    
VkQueryPipelineStatisticFlags 
VkCommandBufferUsageFlags  
const VkCommandBufferInheritanceInfo*       
VkFramebuffer          
VkRect2D               
const VkClearValue*    
VkClearColorValue      
VkClearDepthStencilValue 
VkClearValue           
VkAttachmentDescriptionFlags 
VkAttachmentLoadOp     
VkAttachmentStoreOp    
VkSubpassDescriptionFlags 
VkPipelineBindPoint    
const VkAttachmentReference* 
const uint32_t* 
VkPipelineStageFlags   
VkDependencyFlags      
VkRenderPassCreateFlags    
uint32_t   
const VkAttachmentDescription* 
const VkSubpassDescription* 
const VkSubpassDependency* 
VkEventCreateFlags     
VkFenceCreateFlags     
VkSemaphoreCreateFlags 
VkQueryPoolCreateFlags 
VkQueryType            
VkFramebufferCreateFlags    
const VkImageView*     
uint32_t                       
int32_t                        
const VkPipelineStageFlags*           
const VkCommandBuffer*     
VkDisplayKHR                     
const char*                      
VkExtent2D                       
VkSurfaceTransformFlagsKHR       
VkBool32                         
uint32_t                         
VkDisplayModeKHR                 
VkDisplayModeParametersKHR       
const void*                      
VkDisplayModeCreateFlagsKHR      
VkDisplayPlaneAlphaFlagsKHR      
VkOffset2D                       
VkDisplaySurfaceCreateFlagsKHR   
VkSurfaceTransformFlagBitsKHR    
float                            
VkDisplayPlaneAlphaFlagBitsKHR   
VkRect2D                         
VkCompositeAlphaFlagsKHR         
VkImageUsageFlags                
const void*                                    
VkAndroidSurfaceCreateFlagsKHR 
struct ANativeWindow*    
VkViSurfaceCreateFlagsNN   
void*                            
VkWaylandSurfaceCreateFlagsKHR   
struct wl_display*               
struct wl_surface*               
VkWin32SurfaceCreateFlagsKHR   
HINSTANCE                        
HWND                             
VkXlibSurfaceCreateFlagsKHR   
Display*                         
Window                           
VkXcbSurfaceCreateFlagsKHR   
xcb_connection_t*                
xcb_window_t                     
VkImagePipeSurfaceCreateFlagsFUCHSIA   
zx_handle_t                      
VkStreamDescriptorSurfaceCreateFlagsGGP 
GgpStreamDescriptor              
VkFormat                         
VkColorSpaceKHR                  
VkSwapchainCreateFlagsKHR        
VkSurfaceKHR                     
VkSharingMode                    
uint32_t         
const uint32_t*                  
VkCompositeAlphaFlagBitsKHR      
VkPresentModeKHR                 
VkSwapchainKHR   
const void*  
const VkSemaphore* 
const VkSwapchainKHR* 
VkResult* 
VkDebugReportFlagsEXT            
PFN_vkDebugReportCallbackEXT     
void*            
VkStructureType                  
const VkValidationCheckEXT* 
VkStructureType  
const VkValidationFeatureEnableEXT* 
const VkValidationFeatureDisableEXT* 
VkRasterizationOrderAMD          
VkDebugReportObjectTypeEXT       
uint64_t                         
const char* 
size_t                           
const void*        
float            
VkImage          
VkBuffer         
VkImageFormatProperties          
VkExternalMemoryFeatureFlagsNV   
VkExternalMemoryHandleTypeFlagsNV 
HANDLE                           
const SECURITY_ATTRIBUTES*       
DWORD                            
const VkDeviceMemory*            
const uint64_t*                  
VkIndirectCommandsTokenTypeNVX      
VkBuffer                         
VkDeviceSize                     
VkPipelineBindPoint                      
VkIndirectCommandsLayoutUsageFlagsNVX    
uint32_t                                 
const VkIndirectCommandsLayoutTokenNVX*  
VkObjectTableNVX                                         
VkIndirectCommandsLayoutNVX                              
uint32_t                                                 
const VkIndirectCommandsTokenNVX*       
VkCommandBuffer                          
VkBuffer                                 
VkDeviceSize                             
uint32_t                                          
const VkObjectEntryTypeNVX*       
const uint32_t*                   
const VkObjectEntryUsageFlagsNVX* 
VkObjectEntryTypeNVX         
VkObjectEntryUsageFlagsNVX   
VkPipeline                   
VkPipelineLayout             
VkDescriptorSet              
VkBuffer                     
VkIndexType                  
VkShaderStageFlags           
VkPhysicalDeviceFeatures         
VkPhysicalDeviceProperties       
VkFormatProperties               
void* 
VkImageType                      
VkImageTiling                    
VkImageCreateFlags 
VkQueueFamilyProperties          
VkPhysicalDeviceMemoryProperties 
VkSparseImageFormatProperties    
VkSampleCountFlagBits            
uint8_t                          
VkDriverIdKHR                    
char                             
VkConformanceVersionKHR          
const VkPresentRegionKHR*   
const VkRectLayerKHR*   
VkExtent2D 
VkExternalMemoryFeatureFlags  
VkExternalMemoryHandleTypeFlags 
VkExternalMemoryHandleTypeFlagBits 
VkExternalMemoryProperties 
VkBufferCreateFlags 
VkBufferUsageFlags               
VkExternalMemoryProperties    
HANDLE           
LPCWSTR          
const SECURITY_ATTRIBUTES* 
LPCWSTR                          
VkDeviceMemory                   
int                              
const VkDeviceMemory* 
const uint64_t* 
VkExternalSemaphoreHandleTypeFlagBits 
VkExternalSemaphoreHandleTypeFlags 
VkExternalSemaphoreFeatureFlags 
VkSemaphore    
VkSemaphoreImportFlags 
VkSemaphore                      
VkExternalFenceHandleTypeFlagBits 
VkExternalFenceHandleTypeFlags 
VkExternalFenceFeatureFlags 
const void*                                        
VkFence                          
VkFenceImportFlags              
VkExternalFenceHandleTypeFlagBits  
HANDLE                             
LPCWSTR                            
const void*                                
DWORD                                      
LPCWSTR                                    
const void*                            
VkFence                                
VkExternalFenceHandleTypeFlagBits   
VkFence              
VkFenceImportFlags  
int                                    
VkStructureType        
const uint32_t*     
const int32_t*   
VkSurfaceCounterFlagsEXT 
VkDisplayPowerStateEXT           
VkDeviceEventTypeEXT             
VkDisplayEventTypeEXT            
VkSurfaceCounterFlagsEXT         
VkPhysicalDevice                 
VkMemoryAllocateFlags 
const uint32_t*  
VkImage                          
const VkRect2D*  
const uint32_t*    
VkDeviceGroupPresentModeFlagsKHR 
VkSwapchainKHR 
VkSemaphore 
VkFence 
VkDeviceGroupPresentModeFlagBitsKHR 
const VkPhysicalDevice*  
VkDeviceGroupPresentModeFlagsKHR                         
VkDescriptorType                 
const void*                               
VkDescriptorUpdateTemplateCreateFlags    
uint32_t                 
const VkDescriptorUpdateTemplateEntry* 
VkDescriptorUpdateTemplateType 
VkDescriptorSetLayout 
VkPipelineBindPoint 
float   
const void*    
VkXYColorEXT   
float          
void*          
VkBool32       
const VkPresentTimeGOOGLE*   
VkIOSSurfaceCreateFlagsMVK     
VkMacOSSurfaceCreateFlagsMVK   
VkMetalSurfaceCreateFlagsEXT   
const CAMetalLayer*      
const VkViewportWScalingNV*      
VkViewportCoordinateSwizzleNV          
VkPipelineViewportSwizzleStateCreateFlagsNV    
const VkViewportSwizzleNV*      
void*                  
const void*                                                                      
VkPipelineDiscardRectangleStateCreateFlagsEXT                    
VkDiscardRectangleModeEXT                                                        
uint32_t                                                         
const VkRect2D* 
uint32_t                        
VkImageAspectFlags              
const void*                     
const VkInputAttachmentAspectReference* 
VkSurfaceKHR 
void*   
VkSurfaceCapabilitiesKHR 
VkSurfaceFormatKHR 
VkDisplayPropertiesKHR 
VkDisplayPlanePropertiesKHR 
VkDisplayModePropertiesKHR 
VkDisplayModeKHR 
VkDisplayPlaneCapabilitiesKHR 
VkImageUsageFlags 
void*      
void*                   
uint32_t                      
VkShaderStageFlags            
VkSubgroupFeatureFlags        
VkBool32 
const void*                                                          
VkBuffer                                                             
VkImage                                                              
VkMemoryRequirements                                                 
void*                                       
VkSparseImageMemoryRequirements                                      
VkPointClippingBehavior      
VkTessellationDomainOrigin    
VkSamplerYcbcrConversion      
VkSamplerYcbcrModelConversion 
VkSamplerYcbcrRange           
VkComponentMapping               
VkChromaLocation              
VkFilter                         
VkImageAspectFlagBits            
VkConditionalRenderingFlagsEXT    
VkBool32                        
void*                               
VkBool32                            
const void*                         
VkDeviceQueueCreateFlags            
uint32_t                            
VkPipelineCoverageToColorStateCreateFlagsNV                    
VkExtent2D                             
const VkSampleLocationEXT* 
VkSampleLocationsInfoEXT         
const VkAttachmentSampleLocationsEXT* 
const VkSubpassSampleLocationsEXT* 
VkSampleCountFlags               
VkSamplerReductionModeEXT 
VkBlendOverlapEXT      
VkPipelineCoverageModulationStateCreateFlagsNV                   
VkCoverageModulationModeNV                                                       
VkBool32                                                                         
const float* 
const VkFormat*      
VkValidationCacheCreateFlagsEXT    
VkValidationCacheEXT    
VkBool32         
VkShaderFloatControlsIndependenceKHR 
void*        
VkBool32                           
uint64_t 
int 
VkNativeBufferUsage2ANDROID 
VkSwapchainImageUsageFlagsANDROID 
VkShaderStageFlags 
VkShaderResourceUsageAMD 
const void*                    
VkQueueGlobalPriorityEXT       
const void*                                            
VkObjectType                                           
uint64_t                                               
const char*      
VkObjectType                           
uint64_t                               
size_t                                 
const void*              
const void*                                          
VkDebugUtilsMessengerCreateFlagsEXT  
VkDebugUtilsMessageSeverityFlagsEXT                  
VkDebugUtilsMessageTypeFlagsEXT                      
PFN_vkDebugUtilsMessengerCallbackEXT                 
void*                                
const void*                                                        
VkDebugUtilsMessengerCallbackDataFlagsEXT                          
const char*                                  
int32_t                                                            
const char*                                                  
uint32_t                                                           
const VkDebugUtilsLabelEXT*                  
const VkDebugUtilsLabelEXT*                 
const VkDebugUtilsObjectNameInfoEXT*             
VkTimeDomainEXT        
void*    
VkPipelineRasterizationConservativeStateCreateFlagsEXT           
VkConservativeRasterizationModeEXT                                               
float                                                                            
const VkDescriptorBindingFlagsEXT* 
VkFormat                                     
VkSampleCountFlagBits                        
VkAttachmentLoadOp                           
VkAttachmentStoreOp                          
VkImageLayout                                
uint32_t                          
VkImageLayout                     
VkImageAspectFlags 
const void*                           
VkSubpassDescriptionFlags                   
VkPipelineBindPoint                                         
uint32_t                                                    
uint32_t                                    
const VkAttachmentReference2KHR* 
const VkAttachmentReference2KHR*            
const uint32_t*               
VkPipelineStageFlags              
VkAccessFlags     
VkDependencyFlags 
int32_t           
const void*                                              
VkRenderPassCreateFlags 
const VkAttachmentDescription2KHR* 
const VkSubpassDescription2KHR*       
const VkSubpassDependency2KHR*     
VkSubpassContents      
uint32_t          
const VkVertexInputBindingDivisorDescriptionEXT*      
const void*                        
struct AHardwareBuffer*            
void*                              
uint64_t                           
uint32_t                           
VkDeviceMemory                     
VkFormat                           
VkFormatFeatureFlags               
VkComponentMapping                 
VkSamplerYcbcrModelConversion      
VkSamplerYcbcrRange                
VkChromaLocation                   
VkPipelineStageFlags 
VkPipelineStageFlagBits   
VkResolveModeFlagsKHR                
VkBool32                             
VkResolveModeFlagBitsKHR                                 
const VkAttachmentReference2KHR*         
VkPipelineRasterizationStateStreamCreateFlagsEXT                 
uint32_t                                                                         
VkBool32                       
const void*                                                    
uint32_t                                       
const VkRect2D*    
uint32_t                                                               
const VkShadingRatePaletteEntryNV*  
const void*                                                            
VkBool32                                                               
const VkShadingRatePaletteNV*      
VkExtent2D                          
VkShadingRatePaletteEntryNV         
const VkCoarseSampleLocationNV* 
VkCoarseSampleOrderTypeNV                                              
uint32_t                                               
const VkCoarseSampleOrderCustomNV*        
VkRayTracingShaderGroupTypeNV 
const VkRayTracingShaderGroupCreateInfoNV* 
const void*                
VkBuffer   
VkDeviceSize               
uint32_t                   
VkFormat                   
VkIndexType                
VkGeometryTrianglesNV                  
VkGeometryAABBNV                       
VkGeometryTypeNV                  
VkGeometryDataNV                  
VkGeometryFlagsNV 
VkAccelerationStructureTypeNV         
VkBuildAccelerationStructureFlagsNV
const VkGeometryNV* 
VkDeviceSize                           
VkAccelerationStructureInfoNV          
VkAccelerationStructureNV        
const VkAccelerationStructureNV* 
VkAccelerationStructureMemoryRequirementsTypeNV                      
VkAccelerationStructureNV                                            
VkDrmFormatModifierPropertiesEXT* 
VkFormatFeatureFlags 
VkSharingMode 
const VkSubresourceLayout* 
VkMemoryOverallocationBehaviorAMD 
VkAttachmentReference            
const void*                                                                 
VkPipelineRasterizationDepthClipStateCreateFlagsEXT         
VkBool32                                                                    
float                              
VkBuffer                                               
VkDeviceAddress                  
VkImageViewType                  
void*                                    
VkBool32                                 
const void*                              
const VkFramebufferAttachmentImageInfoKHR* 
VkImageCreateFlags       
VkImageUsageFlags                        
const VkFormat*    
const VkImageView* 
VkShaderStageFlags                  
VkComponentTypeNV                   
VkScopeNV                           
VkImageView                         
VkDescriptorType                    
VkSampler           
GgpFrameToken                    
VkPipelineCreationFeedbackFlagsEXT  
uint64_t                            
VkPipelineCreationFeedbackEXT*      
VkPipelineCreationFeedbackEXT* 
VkFullScreenExclusiveEXT         
const void*      
HMONITOR         
VkHeadlessSurfaceCreateFlagsEXT   
VkPipelineCoverageReductionStateCreateFlagsNV      
VkCoverageReductionModeNV                                          
void*                      
VkCoverageReductionModeNV  
VkSampleCountFlagBits      
VkSampleCountFlags         
const char*                        
VkPerformanceValueTypeINTEL        
VkPerformanceValueDataINTEL        
void*             
VkQueryPoolSamplingModeINTEL        
VkPerformanceOverrideTypeINTEL      
VkPerformanceConfigurationTypeINTEL 
void*                          
VkShaderStageFlags             
const void*                                                      
VkLineRasterizationModeEXT                                       
VkBool32                                                         
uint32_t                                         
uint16_t                                         
enum class UNGROUPED : unsigned int;
const VkInstanceCreateInfo*
const VkAllocationCallbacks*
VkInstance*
uint32_t*
VkPhysicalDevice*
const char*
VkPhysicalDeviceProperties*
VkQueueFamilyProperties*
VkPhysicalDeviceMemoryProperties*
VkPhysicalDeviceFeatures*
VkFormatProperties*
VkImageUsageFlags
VkImageCreateFlags
VkImageFormatProperties*
const VkDeviceCreateInfo*
VkDevice*
VkLayerProperties*
VkExtensionProperties*
VkQueue*
const VkSubmitInfo*
const VkMemoryAllocateInfo*
VkDeviceMemory*
VkMemoryMapFlags
void**
const VkMappedMemoryRange*
VkDeviceSize*
VkMemoryRequirements*
VkSparseImageMemoryRequirements*
VkSparseImageFormatProperties*
const VkBindSparseInfo*
const VkFenceCreateInfo*
VkFence*
const VkFence*
const VkSemaphoreCreateInfo*
VkSemaphore*
const VkEventCreateInfo*
VkEvent*
const VkQueryPoolCreateInfo*
VkQueryPool*
void*
VkQueryResultFlags
const VkBufferCreateInfo*
VkBuffer*
const VkBufferViewCreateInfo*
VkBufferView*
const VkImageCreateInfo*
VkImage*
const VkImageSubresource*
VkSubresourceLayout*
const VkImageViewCreateInfo*
VkImageView*
const VkShaderModuleCreateInfo*
VkShaderModule*
const VkPipelineCacheCreateInfo*
VkPipelineCache*
size_t*
const VkPipelineCache*
const VkGraphicsPipelineCreateInfo*
VkPipeline*
const VkComputePipelineCreateInfo*
const VkPipelineLayoutCreateInfo*
VkPipelineLayout*
const VkSamplerCreateInfo*
VkSampler*
const VkDescriptorSetLayoutCreateInfo*
VkDescriptorSetLayout*
const VkDescriptorPoolCreateInfo*
VkDescriptorPool*
VkDescriptorPoolResetFlags
const VkDescriptorSetAllocateInfo*
VkDescriptorSet*
const VkDescriptorSet*
const VkWriteDescriptorSet*
const VkCopyDescriptorSet*
const VkFramebufferCreateInfo*
VkFramebuffer*
const VkRenderPassCreateInfo*
VkRenderPass*
VkExtent2D*
const VkCommandPoolCreateInfo*
VkCommandPool*
VkCommandPoolResetFlags
const VkCommandBufferAllocateInfo*
VkCommandBuffer*
const VkCommandBuffer*
const VkCommandBufferBeginInfo*
VkCommandBufferResetFlags
const VkViewport*
const VkRect2D*
const float
VkStencilFaceFlags
const uint32_t*
const VkBuffer*
const VkDeviceSize*
const VkBufferCopy*
const VkImageCopy*
const VkImageBlit*
const VkBufferImageCopy*
const void*
const VkClearColorValue*
const VkImageSubresourceRange*
const VkClearDepthStencilValue*
const VkClearAttachment*
const VkClearRect*
const VkImageResolve*
VkPipelineStageFlags
const VkEvent*
const VkMemoryBarrier*
const VkBufferMemoryBarrier*
const VkImageMemoryBarrier*
VkDependencyFlags
VkQueryControlFlags
const VkConditionalRenderingBeginInfoEXT*
VkShaderStageFlags
const VkRenderPassBeginInfo*
const VkAndroidSurfaceCreateInfoKHR*
VkSurfaceKHR*
VkDisplayPropertiesKHR*
VkDisplayPlanePropertiesKHR*
VkDisplayKHR*
VkDisplayModePropertiesKHR*
const VkDisplayModeCreateInfoKHR*
VkDisplayModeKHR*
VkDisplayPlaneCapabilitiesKHR*
const VkDisplaySurfaceCreateInfoKHR*
const VkSwapchainCreateInfoKHR*
VkSwapchainKHR*
VkBool32*
VkSurfaceCapabilitiesKHR*
VkSurfaceFormatKHR*
VkPresentModeKHR*
const VkPresentInfoKHR*
const VkViSurfaceCreateInfoNN*
const VkWaylandSurfaceCreateInfoKHR*
struct wl_display*
const VkWin32SurfaceCreateInfoKHR*
const VkXlibSurfaceCreateInfoKHR*
Display*
const VkXcbSurfaceCreateInfoKHR*
xcb_connection_t*
const VkImagePipeSurfaceCreateInfoFUCHSIA*
const VkStreamDescriptorSurfaceCreateInfoGGP*
const VkDebugReportCallbackCreateInfoEXT*
VkDebugReportCallbackEXT*
VkDebugReportFlagsEXT
const VkDebugMarkerObjectNameInfoEXT*
const VkDebugMarkerObjectTagInfoEXT*
const VkDebugMarkerMarkerInfoEXT*
VkExternalMemoryHandleTypeFlagsNV
VkExternalImageFormatPropertiesNV*
HANDLE*
const VkCmdProcessCommandsInfoNVX*
const VkCmdReserveSpaceForCommandsInfoNVX*
const VkIndirectCommandsLayoutCreateInfoNVX*
VkIndirectCommandsLayoutNVX*
const VkObjectTableCreateInfoNVX*
VkObjectTableNVX*
const VkObjectTableEntryNVX* const*
const VkObjectEntryTypeNVX*
VkDeviceGeneratedCommandsFeaturesNVX*
VkDeviceGeneratedCommandsLimitsNVX*
VkPhysicalDeviceFeatures2*
VkPhysicalDeviceProperties2*
VkFormatProperties2*
const VkPhysicalDeviceImageFormatInfo2*
VkImageFormatProperties2*
VkQueueFamilyProperties2*
VkPhysicalDeviceMemoryProperties2*
const VkPhysicalDeviceSparseImageFormatInfo2*
VkSparseImageFormatProperties2*
VkCommandPoolTrimFlags
const VkPhysicalDeviceExternalBufferInfo*
VkExternalBufferProperties*
const VkMemoryGetWin32HandleInfoKHR*
VkMemoryWin32HandlePropertiesKHR*
const VkMemoryGetFdInfoKHR*
int*
VkMemoryFdPropertiesKHR*
const VkPhysicalDeviceExternalSemaphoreInfo*
VkExternalSemaphoreProperties*
const VkSemaphoreGetWin32HandleInfoKHR*
const VkImportSemaphoreWin32HandleInfoKHR*
const VkSemaphoreGetFdInfoKHR*
const VkImportSemaphoreFdInfoKHR*
const VkPhysicalDeviceExternalFenceInfo*
VkExternalFenceProperties*
const VkFenceGetWin32HandleInfoKHR*
const VkImportFenceWin32HandleInfoKHR*
const VkFenceGetFdInfoKHR*
const VkImportFenceFdInfoKHR*
const VkDisplayPowerInfoEXT*
const VkDeviceEventInfoEXT*
const VkDisplayEventInfoEXT*
uint64_t*
VkSurfaceCapabilities2EXT*
VkPhysicalDeviceGroupProperties*
VkPeerMemoryFeatureFlags*
const VkBindBufferMemoryInfo*
const VkBindImageMemoryInfo*
VkDeviceGroupPresentCapabilitiesKHR*
VkDeviceGroupPresentModeFlagsKHR*
const VkAcquireNextImageInfoKHR*
VkRect2D*
const VkDescriptorUpdateTemplateCreateInfo*
VkDescriptorUpdateTemplate*
const VkSwapchainKHR*
const VkHdrMetadataEXT*
VkRefreshCycleDurationGOOGLE*
VkPastPresentationTimingGOOGLE*
const VkIOSSurfaceCreateInfoMVK*
const VkMacOSSurfaceCreateInfoMVK*
const VkMetalSurfaceCreateInfoEXT*
const VkViewportWScalingNV*
const VkSampleLocationsInfoEXT*
VkMultisamplePropertiesEXT*
const VkPhysicalDeviceSurfaceInfo2KHR*
VkSurfaceCapabilities2KHR*
VkSurfaceFormat2KHR*
VkDisplayProperties2KHR*
VkDisplayPlaneProperties2KHR*
VkDisplayModeProperties2KHR*
const VkDisplayPlaneInfo2KHR*
VkDisplayPlaneCapabilities2KHR*
const VkBufferMemoryRequirementsInfo2*
VkMemoryRequirements2*
const VkImageMemoryRequirementsInfo2*
const VkImageSparseMemoryRequirementsInfo2*
VkSparseImageMemoryRequirements2*
const VkSamplerYcbcrConversionCreateInfo*
VkSamplerYcbcrConversion*
const VkDeviceQueueInfo2*
const VkValidationCacheCreateInfoEXT*
VkValidationCacheEXT*
const VkValidationCacheEXT*
VkDescriptorSetLayoutSupport*
VkSwapchainImageUsageFlagsANDROID
const VkSemaphore*
VkTimeDomainEXT*
const VkCalibratedTimestampInfoEXT*
const VkDebugUtilsObjectNameInfoEXT*
const VkDebugUtilsObjectTagInfoEXT*
const VkDebugUtilsLabelEXT*
const VkDebugUtilsMessengerCreateInfoEXT*
VkDebugUtilsMessengerEXT*
VkDebugUtilsMessageTypeFlagsEXT
const VkDebugUtilsMessengerCallbackDataEXT*
VkMemoryHostPointerPropertiesEXT*
const VkRenderPassCreateInfo2KHR*
const VkSubpassBeginInfoKHR*
const VkSubpassEndInfoKHR*
const struct AHardwareBuffer*
VkAndroidHardwareBufferPropertiesANDROID*
const VkMemoryGetAndroidHardwareBufferInfoANDROID*
struct AHardwareBuffer**
VkCheckpointDataNV*
const VkShadingRatePaletteNV*
const VkCoarseSampleOrderCustomNV*
const VkAccelerationStructureCreateInfoNV*
VkAccelerationStructureNV*
const VkAccelerationStructureMemoryRequirementsInfoNV*
VkMemoryRequirements2KHR*
const VkBindAccelerationStructureMemoryInfoNV*
const VkAccelerationStructureNV*
const VkAccelerationStructureInfoNV*
const VkRayTracingPipelineCreateInfoNV*
VkImageDrmFormatModifierPropertiesEXT*
const VkBufferDeviceAddressInfoEXT*
VkCooperativeMatrixPropertiesNV*
const VkImageViewHandleInfoNVX*
const VkHeadlessSurfaceCreateInfoEXT*
VkFramebufferMixedSamplesCombinationNV*
const VkInitializePerformanceApiInfoINTEL*
const VkPerformanceMarkerInfoINTEL*
const VkPerformanceStreamMarkerInfoINTEL*
const VkPerformanceOverrideInfoINTEL*
const VkPerformanceConfigurationAcquireInfoINTEL*
VkPerformanceConfigurationINTEL*
VkPerformanceValueINTEL*
enum class UnusedMask : unsigned int;


} // namespace vk


#include <vkbinding/vk/types.inl>