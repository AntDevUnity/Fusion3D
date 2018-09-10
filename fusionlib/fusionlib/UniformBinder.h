#pragma once
#include "stdafx.h"

class UniformBinder
{
public:
	UniformBinder(int count, vector<UniformBuffer *> ubuf, VkDescriptorSetLayout layout);
	virtual ~UniformBinder();

private:
	
	VkDescriptorPool descriptorPool;
	VkDescriptorPoolSize poolSize;
	VkDescriptorPoolCreateInfo poolInfo;
	std::vector<VkDescriptorSet> descriptorSets;

};

