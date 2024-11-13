#include "Engine.h"
#include <fstream>
#include <Shlobj.h>

Logger* Logger::inst;

Logger::Logger() {
	inst = this;
}

Logger::~Logger() {
}

VOID Logger::PrintLog(const WCHAR* fmt, ...) {
	WCHAR buf[4096];
	va_list args;

	va_start(args, fmt);
	vswprintf_s(buf, fmt, args);
	va_end(args);

	// MessageBox(0, buf, 0, 0);
	OutputDebugString(buf);

	// Target Location = %AppData%/Local/BlankProject/Log/BlankProject03052021194056.log

	std::wfstream outfile;

	//outfile.open(std::wstring(LogDirectory() + L"/" + LogFile()), std::ios_base::app);
}

std::wstring Logger::LogDirectory() {
	WCHAR Path[1024];
	WCHAR* AppDataLocal;
	SHGetKnownFolderPath(FOLDERID_RoamingAppData, 0, nullptr, &AppDataLocal);
	wcscpy_s(Path, AppDataLocal);
	wcscat_s(Path, L"\\");
	wcscat_s(Path, PerGameSettings::GameName());
	CreateDirectory(Path, NULL);
	wcscat_s(Path, L"\\Log");
	CreateDirectory(Path, NULL);
	return Path;
}