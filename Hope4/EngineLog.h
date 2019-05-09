#ifndef ENGINE_LOG_H
#define ENGINE_LOG_H
#include <string>
#include <iostream>
#include <fstream>
#include <chrono>
#include <ctime>
using namespace std;

class EngineLog
{
public:
	static string LogFileName;

public:
	EngineLog();
	EngineLog(string className);
	~EngineLog();

	/*
		write info log into log file
		@parameter:
			str  the string to output
	*/
	void info(string str);

	/*
		write warning log into log file
		@parameter:
			str  the string to output
	*/
	void warning(string str);

	/*
		write error log into log file
		@parameter:
			str  the string to output
	*/
	void error(string str);

	/*
		set the flag for output logs in terminal
	*/
	static void setConsoleOutput(bool Value);

	/*
		set flag for output log
	*/
	static void setOutputLog(bool value);

private:
	string className;
	void writeToLogFile(string str);
	string getTimeStamp();
	string getClassName();

	static bool enableConsoleOutput;
	static bool enableLog;
};
#endif


