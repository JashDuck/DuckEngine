#include "pch.h"
#include "Application.h"
#include "Platform/WIN32/WinEntry.h"

ENTRYAPP(Application);

Application::Application() {
}

Application::~Application() {
}

VOID Application::SetupPerGameSettings() {
	/* Set the Per Game Settings */
	PerGameSettings::SetGameName(IDS_PERGAMENAME);
	PerGameSettings::SetShortName(IDS_SHORTNAME);
	PerGameSettings::SetMainIcon(IDI_MAINICON);
}

VOID Application::Initialize() {
	Logger::PrintLog(L"I have Loaded Up");
	//MessageBox(0, L" Lasdfasdfoop ", 0, 0);
}

VOID Application::Update() {
	MessageBox(0, L" Loop ", 0, 0);
}
