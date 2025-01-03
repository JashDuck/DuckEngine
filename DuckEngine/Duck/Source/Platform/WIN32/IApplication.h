#pragma once

#define ENTRYAPP(x) IApplication* EntryApplication() { return new x; }

class DUCK_API IApplication {

	// Application

public:
	// Constructor
	IApplication();

	// Deconstructor
	virtual ~IApplication() {};

public:
	// Initialize Application
	virtual VOID Initialize() = 0;

	// Game Loop
	virtual VOID Update() = 0;
};

IApplication* EntryApplication();