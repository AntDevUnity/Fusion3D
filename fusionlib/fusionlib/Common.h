#pragma once
#include "stdafx.h"

class GraphicsPipeline;
class Effect;

class Common
{
public:
	Common();
	virtual ~Common();
	static void SetupPipeline(GraphicsPipeline *gp, vector<UniformBuffer *> uniforms, VkDescriptorSetLayout desLay);
	static void BindShadersToPipeline(GraphicsPipeline *gp, Effect * fx);

};


