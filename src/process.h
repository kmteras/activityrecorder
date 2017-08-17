#ifndef PROCESS_H
#define PROCESS_H

#include <windows.h>
#include <Psapi.h>
#include <string>
#include <vector>

class Process {
public:
	Process(std::wstring title, std::wstring path);

	static Process getActiveProcess();

	std::wstring getProcessTitle();
	std::wstring getProcessPath();
	std::wstring getProcessName();

	static std::vector<Process> _processHistory;

private:
	std::wstring m_processTitle;
	std::wstring m_processPath;
	std::wstring m_processName;
};

#endif // PROCESS_H