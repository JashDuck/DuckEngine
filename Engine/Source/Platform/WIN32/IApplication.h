#pragma once

#define ENTRYAPP(x) IApplication* EntryApplication() { return new x; }

class DUCK_API IApplication {
public:
	// Contructor
	IApplication();

	// Deconstructor
	virtual ~IApplication() {};

public:
	virtual VOID SetupPerGameSettings() = 0;

	virtual VOID Initialize() = 0;

	virtual VOID Update() = 0;
};

IApplication* EntryApplication();