#pragma once

#include "Platform/WIN32/IApplication.h"

class Application : public IApplication {
public:
	// Contructor
	Application();

	// Deconstructor
	~Application();

public:
	VOID SetupPerGameSettings();

	VOID Initialize();

	VOID Update();
};