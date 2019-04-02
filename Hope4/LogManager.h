#ifndef LOG_MANAGER_H
#define LOG_MANAGER_H
#include <string>

enum class ELogType
{
	E_ERROR,
	E_WARNING,
	E_EVENT
};

class LogManager
{
private:
	LogManager() {};

public:
	static LogManager& getInstance() {
		static LogManager theInstance;
		return theInstance;
	}

	LogManager(LogManager const&) = delete;
	void operator=(LogManager const&) = delete;

private:
	static std::string mEventLog;
	static bool mEnableLog;

public:
	static void addLog(ELogType logType, std::string _log);
	static void errorExit();
};
#endif

