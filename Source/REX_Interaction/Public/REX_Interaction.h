#pragma once

#include "Modules/ModuleManager.h"

class FREX_InteractionModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
