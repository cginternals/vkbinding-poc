
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


void vkCmdBeginConditionalRenderingEXT(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin)
{
    return vkbinding::Binding::CmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin);
}

void vkCmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo)
{
    return vkbinding::Binding::CmdBeginDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
}

void vkCmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags)
{
    return vkbinding::Binding::CmdBeginQuery(commandBuffer, queryPool, query, flags);
}

void vkCmdBeginQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index)
{
    return vkbinding::Binding::CmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index);
}

void vkCmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents)
{
    return vkbinding::Binding::CmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents);
}

void vkCmdBeginRenderPass2KHR(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfoKHR* pSubpassBeginInfo)
{
    return vkbinding::Binding::CmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
}

void vkCmdBeginTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets)
{
    return vkbinding::Binding::CmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
}

void vkCmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets)
{
    return vkbinding::Binding::CmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
}

void vkCmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType)
{
    return vkbinding::Binding::CmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);
}

void vkCmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline)
{
    return vkbinding::Binding::CmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);
}

void vkCmdBindShadingRateImageNV(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout)
{
    return vkbinding::Binding::CmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout);
}

void vkCmdBindTransformFeedbackBuffersEXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes)
{
    return vkbinding::Binding::CmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);
}

void vkCmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets)
{
    return vkbinding::Binding::CmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);
}

void vkCmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter)
{
    return vkbinding::Binding::CmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
}

void vkCmdBuildAccelerationStructureNV(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset)
{
    return vkbinding::Binding::CmdBuildAccelerationStructureNV(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset);
}

void vkCmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount, const VkClearRect* pRects)
{
    return vkbinding::Binding::CmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects);
}

void vkCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges)
{
    return vkbinding::Binding::CmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);
}

void vkCmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange* pRanges)
{
    return vkbinding::Binding::CmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);
}

void vkCmdCopyAccelerationStructureNV(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeNV mode)
{
    return vkbinding::Binding::CmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode);
}

void vkCmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions)
{
    return vkbinding::Binding::CmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);
}

void vkCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions)
{
    return vkbinding::Binding::CmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
}

void vkCmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions)
{
    return vkbinding::Binding::CmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}

void vkCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions)
{
    return vkbinding::Binding::CmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
}

void vkCmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags)
{
    return vkbinding::Binding::CmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
}

void vkCmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo)
{
    return vkbinding::Binding::CmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo);
}

void vkCmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer)
{
    return vkbinding::Binding::CmdDebugMarkerEndEXT(commandBuffer);
}

void vkCmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo)
{
    return vkbinding::Binding::CmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo);
}

void vkCmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
{
    return vkbinding::Binding::CmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ);
}

void vkCmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
{
    return vkbinding::Binding::CmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}

void vkCmdDispatchBaseKHR(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
{
    return vkbinding::Binding::CmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}

void vkCmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset)
{
    return vkbinding::Binding::CmdDispatchIndirect(commandBuffer, buffer, offset);
}

void vkCmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance)
{
    return vkbinding::Binding::CmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
}

void vkCmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance)
{
    return vkbinding::Binding::CmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
}

void vkCmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
    return vkbinding::Binding::CmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);
}

void vkCmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
    return vkbinding::Binding::CmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

void vkCmdDrawIndexedIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
    return vkbinding::Binding::CmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

void vkCmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
    return vkbinding::Binding::CmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);
}

void vkCmdDrawIndirectByteCountEXT(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride)
{
    return vkbinding::Binding::CmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride);
}

void vkCmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
    return vkbinding::Binding::CmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

void vkCmdDrawIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
    return vkbinding::Binding::CmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

void vkCmdDrawMeshTasksIndirectCountNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
    return vkbinding::Binding::CmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

void vkCmdDrawMeshTasksIndirectNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
    return vkbinding::Binding::CmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride);
}

void vkCmdDrawMeshTasksNV(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask)
{
    return vkbinding::Binding::CmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask);
}

void vkCmdEndConditionalRenderingEXT(VkCommandBuffer commandBuffer)
{
    return vkbinding::Binding::CmdEndConditionalRenderingEXT(commandBuffer);
}

void vkCmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer)
{
    return vkbinding::Binding::CmdEndDebugUtilsLabelEXT(commandBuffer);
}

void vkCmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query)
{
    return vkbinding::Binding::CmdEndQuery(commandBuffer, queryPool, query);
}

void vkCmdEndQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index)
{
    return vkbinding::Binding::CmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index);
}

void vkCmdEndRenderPass(VkCommandBuffer commandBuffer)
{
    return vkbinding::Binding::CmdEndRenderPass(commandBuffer);
}

void vkCmdEndRenderPass2KHR(VkCommandBuffer commandBuffer, const VkSubpassEndInfoKHR* pSubpassEndInfo)
{
    return vkbinding::Binding::CmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo);
}

void vkCmdEndTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets)
{
    return vkbinding::Binding::CmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
}

void vkCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers)
{
    return vkbinding::Binding::CmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers);
}

void vkCmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data)
{
    return vkbinding::Binding::CmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);
}

void vkCmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo)
{
    return vkbinding::Binding::CmdInsertDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
}

void vkCmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents)
{
    return vkbinding::Binding::CmdNextSubpass(commandBuffer, contents);
}

void vkCmdNextSubpass2KHR(VkCommandBuffer commandBuffer, const VkSubpassBeginInfoKHR* pSubpassBeginInfo, const VkSubpassEndInfoKHR* pSubpassEndInfo)
{
    return vkbinding::Binding::CmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
}

void vkCmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers)
{
    return vkbinding::Binding::CmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
}

void vkCmdProcessCommandsNVX(VkCommandBuffer commandBuffer, const VkCmdProcessCommandsInfoNVX* pProcessCommandsInfo)
{
    return vkbinding::Binding::CmdProcessCommandsNVX(commandBuffer, pProcessCommandsInfo);
}

void vkCmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void* pValues)
{
    return vkbinding::Binding::CmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);
}

void vkCmdPushDescriptorSetKHR(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites)
{
    return vkbinding::Binding::CmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
}

void vkCmdPushDescriptorSetWithTemplateKHR(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void* pData)
{
    return vkbinding::Binding::CmdPushDescriptorSetWithTemplateKHR(commandBuffer, descriptorUpdateTemplate, layout, set, pData);
}

void vkCmdReserveSpaceForCommandsNVX(VkCommandBuffer commandBuffer, const VkCmdReserveSpaceForCommandsInfoNVX* pReserveSpaceInfo)
{
    return vkbinding::Binding::CmdReserveSpaceForCommandsNVX(commandBuffer, pReserveSpaceInfo);
}

void vkCmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
{
    return vkbinding::Binding::CmdResetEvent(commandBuffer, event, stageMask);
}

void vkCmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)
{
    return vkbinding::Binding::CmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);
}

void vkCmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve* pRegions)
{
    return vkbinding::Binding::CmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}

void vkCmdSetBlendConstants(VkCommandBuffer commandBuffer, const float blendConstants)
{
    return vkbinding::Binding::CmdSetBlendConstants(commandBuffer, blendConstants);
}

void vkCmdSetCheckpointNV(VkCommandBuffer commandBuffer, const void* pCheckpointMarker)
{
    return vkbinding::Binding::CmdSetCheckpointNV(commandBuffer, pCheckpointMarker);
}

void vkCmdSetCoarseSampleOrderNV(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV* pCustomSampleOrders)
{
    return vkbinding::Binding::CmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
}

void vkCmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor)
{
    return vkbinding::Binding::CmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
}

void vkCmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds)
{
    return vkbinding::Binding::CmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds);
}

void vkCmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask)
{
    return vkbinding::Binding::CmdSetDeviceMask(commandBuffer, deviceMask);
}

void vkCmdSetDeviceMaskKHR(VkCommandBuffer commandBuffer, uint32_t deviceMask)
{
    return vkbinding::Binding::CmdSetDeviceMaskKHR(commandBuffer, deviceMask);
}

void vkCmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D* pDiscardRectangles)
{
    return vkbinding::Binding::CmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
}

void vkCmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
{
    return vkbinding::Binding::CmdSetEvent(commandBuffer, event, stageMask);
}

void vkCmdSetExclusiveScissorNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D* pExclusiveScissors)
{
    return vkbinding::Binding::CmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
}

void vkCmdSetLineStippleEXT(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern)
{
    return vkbinding::Binding::CmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern);
}

void vkCmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth)
{
    return vkbinding::Binding::CmdSetLineWidth(commandBuffer, lineWidth);
}

VkResult vkCmdSetPerformanceMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL* pMarkerInfo)
{
    return vkbinding::Binding::CmdSetPerformanceMarkerINTEL(commandBuffer, pMarkerInfo);
}

VkResult vkCmdSetPerformanceOverrideINTEL(VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL* pOverrideInfo)
{
    return vkbinding::Binding::CmdSetPerformanceOverrideINTEL(commandBuffer, pOverrideInfo);
}

VkResult vkCmdSetPerformanceStreamMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo)
{
    return vkbinding::Binding::CmdSetPerformanceStreamMarkerINTEL(commandBuffer, pMarkerInfo);
}

void vkCmdSetSampleLocationsEXT(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo)
{
    return vkbinding::Binding::CmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo);
}

void vkCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors)
{
    return vkbinding::Binding::CmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors);
}

void vkCmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask)
{
    return vkbinding::Binding::CmdSetStencilCompareMask(commandBuffer, faceMask, compareMask);
}

void vkCmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference)
{
    return vkbinding::Binding::CmdSetStencilReference(commandBuffer, faceMask, reference);
}

void vkCmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask)
{
    return vkbinding::Binding::CmdSetStencilWriteMask(commandBuffer, faceMask, writeMask);
}

void vkCmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports)
{
    return vkbinding::Binding::CmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports);
}

void vkCmdSetViewportShadingRatePaletteNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV* pShadingRatePalettes)
{
    return vkbinding::Binding::CmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes);
}

void vkCmdSetViewportWScalingNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV* pViewportWScalings)
{
    return vkbinding::Binding::CmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings);
}

void vkCmdTraceRaysNV(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth)
{
    return vkbinding::Binding::CmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
}

void vkCmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData)
{
    return vkbinding::Binding::CmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);
}

void vkCmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers)
{
    return vkbinding::Binding::CmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
}

void vkCmdWriteAccelerationStructuresPropertiesNV(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery)
{
    return vkbinding::Binding::CmdWriteAccelerationStructuresPropertiesNV(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
}

void vkCmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker)
{
    return vkbinding::Binding::CmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker);
}

void vkCmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query)
{
    return vkbinding::Binding::CmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);
}

VkResult vkCompileDeferredNV(VkDevice device, VkPipeline pipeline, uint32_t shader)
{
    return vkbinding::Binding::CompileDeferredNV(device, pipeline, shader);
}

VkResult vkCreateAccelerationStructureNV(VkDevice device, const VkAccelerationStructureCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureNV* pAccelerationStructure)
{
    return vkbinding::Binding::CreateAccelerationStructureNV(device, pCreateInfo, pAllocator, pAccelerationStructure);
}

VkResult vkCreateAndroidSurfaceKHR(VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    return vkbinding::Binding::CreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

VkResult vkCreateBuffer(VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer)
{
    return vkbinding::Binding::CreateBuffer(device, pCreateInfo, pAllocator, pBuffer);
}

VkResult vkCreateBufferView(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView)
{
    return vkbinding::Binding::CreateBufferView(device, pCreateInfo, pAllocator, pView);
}

VkResult vkCreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool)
{
    return vkbinding::Binding::CreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool);
}

VkResult vkCreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines)
{
    return vkbinding::Binding::CreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

VkResult vkCreateDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback)
{
    return vkbinding::Binding::CreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback);
}

VkResult vkCreateDebugUtilsMessengerEXT(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger)
{
    return vkbinding::Binding::CreateDebugUtilsMessengerEXT(instance, pCreateInfo, pAllocator, pMessenger);
}

VkResult vkCreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool)
{
    return vkbinding::Binding::CreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool);
}

VkResult vkCreateDescriptorSetLayout(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout)
{
    return vkbinding::Binding::CreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout);
}

VkResult vkCreateDescriptorUpdateTemplate(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate)
{
    return vkbinding::Binding::CreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
}

VkResult vkCreateDescriptorUpdateTemplateKHR(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate)
{
    return vkbinding::Binding::CreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
}

VkResult vkCreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice)
{
    return vkbinding::Binding::CreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice);
}

VkResult vkCreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode)
{
    return vkbinding::Binding::CreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);
}

VkResult vkCreateDisplayPlaneSurfaceKHR(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    return vkbinding::Binding::CreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

VkResult vkCreateEvent(VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent)
{
    return vkbinding::Binding::CreateEvent(device, pCreateInfo, pAllocator, pEvent);
}

VkResult vkCreateFence(VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence)
{
    return vkbinding::Binding::CreateFence(device, pCreateInfo, pAllocator, pFence);
}

VkResult vkCreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer)
{
    return vkbinding::Binding::CreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer);
}

VkResult vkCreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines)
{
    return vkbinding::Binding::CreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

VkResult vkCreateHeadlessSurfaceEXT(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    return vkbinding::Binding::CreateHeadlessSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
}

VkResult vkCreateImage(VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage)
{
    return vkbinding::Binding::CreateImage(device, pCreateInfo, pAllocator, pImage);
}

VkResult vkCreateImagePipeSurfaceFUCHSIA(VkInstance instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    return vkbinding::Binding::CreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, pSurface);
}

VkResult vkCreateImageView(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView)
{
    return vkbinding::Binding::CreateImageView(device, pCreateInfo, pAllocator, pView);
}

VkResult vkCreateIndirectCommandsLayoutNVX(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNVX* pIndirectCommandsLayout)
{
    return vkbinding::Binding::CreateIndirectCommandsLayoutNVX(device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
}

VkResult vkCreateInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance)
{
    return vkbinding::Binding::CreateInstance(pCreateInfo, pAllocator, pInstance);
}

VkResult vkCreateIOSSurfaceMVK(VkInstance instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    return vkbinding::Binding::CreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
}

VkResult vkCreateMacOSSurfaceMVK(VkInstance instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    return vkbinding::Binding::CreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
}

VkResult vkCreateMetalSurfaceEXT(VkInstance instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    return vkbinding::Binding::CreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
}

VkResult vkCreateObjectTableNVX(VkDevice device, const VkObjectTableCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkObjectTableNVX* pObjectTable)
{
    return vkbinding::Binding::CreateObjectTableNVX(device, pCreateInfo, pAllocator, pObjectTable);
}

VkResult vkCreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache)
{
    return vkbinding::Binding::CreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache);
}

VkResult vkCreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout)
{
    return vkbinding::Binding::CreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout);
}

VkResult vkCreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool)
{
    return vkbinding::Binding::CreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool);
}

VkResult vkCreateRayTracingPipelinesNV(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines)
{
    return vkbinding::Binding::CreateRayTracingPipelinesNV(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

VkResult vkCreateRenderPass(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass)
{
    return vkbinding::Binding::CreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass);
}

VkResult vkCreateRenderPass2KHR(VkDevice device, const VkRenderPassCreateInfo2KHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass)
{
    return vkbinding::Binding::CreateRenderPass2KHR(device, pCreateInfo, pAllocator, pRenderPass);
}

VkResult vkCreateSampler(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler)
{
    return vkbinding::Binding::CreateSampler(device, pCreateInfo, pAllocator, pSampler);
}

VkResult vkCreateSamplerYcbcrConversion(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion)
{
    return vkbinding::Binding::CreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion);
}

VkResult vkCreateSamplerYcbcrConversionKHR(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion)
{
    return vkbinding::Binding::CreateSamplerYcbcrConversionKHR(device, pCreateInfo, pAllocator, pYcbcrConversion);
}

VkResult vkCreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore)
{
    return vkbinding::Binding::CreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore);
}

VkResult vkCreateShaderModule(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule)
{
    return vkbinding::Binding::CreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule);
}

VkResult vkCreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains)
{
    return vkbinding::Binding::CreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
}

VkResult vkCreateStreamDescriptorSurfaceGGP(VkInstance instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    return vkbinding::Binding::CreateStreamDescriptorSurfaceGGP(instance, pCreateInfo, pAllocator, pSurface);
}

VkResult vkCreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain)
{
    return vkbinding::Binding::CreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain);
}

VkResult vkCreateValidationCacheEXT(VkDevice device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache)
{
    return vkbinding::Binding::CreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache);
}

VkResult vkCreateViSurfaceNN(VkInstance instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    return vkbinding::Binding::CreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface);
}

VkResult vkCreateWaylandSurfaceKHR(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    return vkbinding::Binding::CreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

VkResult vkCreateWin32SurfaceKHR(VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    return vkbinding::Binding::CreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

VkResult vkCreateXcbSurfaceKHR(VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    return vkbinding::Binding::CreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

VkResult vkCreateXlibSurfaceKHR(VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    return vkbinding::Binding::CreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}


} // namespace vk