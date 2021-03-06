#pragma once
#include "stdafx.h"

class MemBuffer
{
public:
	MemBuffer();
	MemBuffer(int size, void * data, bool gpuMem = false);
	void MakeVertexBuffer();
	void MakeIndexBuffer();
	void MakeUniformBuffer();
	void MakeImageBuffer();
	virtual ~MemBuffer();
	VkBuffer GetBuffer() {
		return buffer;
	}
	VkDeviceMemory GetDevMem() {
		return devMem;
	}
	VkDeviceSize GetSize() {
		return Size;
	}
	void Set(void * data);
private:

	void Create(VkDeviceSize size, VkBufferUsageFlags usage, VkMemoryPropertyFlags properties, VkBuffer& buffer, VkDeviceMemory& bufferMemory);
	VkBuffer buffer;
	VkDeviceMemory devMem;

	VkDeviceSize Size;
	void * rawData;
	bool gpuMem = false;
	
};

