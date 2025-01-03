#pragma once

#include "Platform/WIN32/IApplication.h"

class Application : public IApplication {

	// Application

public:
	// Constructor
	Application();

	// Deconstructor
	~Application();

public:
	VOID SetupPerGameSettings();

	// Initialize Application
	VOID Initialize();

	// Game Loop
	VOID Update();
};