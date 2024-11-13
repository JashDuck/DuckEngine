#pragma once

#include <string>

class DUCK_API Logger {

	// Getters and Setters for singleton static class
private:
	static Logger* inst;

	static Logger* Instance() { return inst; }

	// Constructor
public:
	Logger();
	~Logger();
	
	// Print to Log File
	static VOID PrintLog(const WCHAR* fmt, ...);

	static std::wstring LogDirectory();
};