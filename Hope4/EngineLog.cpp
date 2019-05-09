#include "EngineLog.h"
#include <iostream>
string EngineLog::LogFileName = "EngineLogFile.log";
bool EngineLog::enableConsoleOutput = true;

EngineLog::EngineLog()
{
	this->className = "";
}

EngineLog::EngineLog(string className)
{
	this->className = className;
}


EngineLog::~EngineLog()
{
}

void EngineLog::info(string str)
{
	string output = getTimeStamp() + getClassName() + " [info] " + str + "\n";
	writeToLogFile(output);
}


void EngineLog::warning(string str)
{
	string output = getTimeStamp() + getClassName() + " [warning] " + str + "\n";
	writeToLogFile(output);
}


void EngineLog::error(string str)
{
	string output = getTimeStamp() + getClassName() +  " [error] " + str + "\n";
	writeToLogFile(output);
}

void EngineLog::setConsoleOutput(bool Value)
{
	enableConsoleOutput = Value;
}

void EngineLog::writeToLogFile(string str)
{
	// display in console
	if (enableConsoleOutput) {
		cout << str;
	}
	ofstream out;
	out.open(LogFileName, ios::app);
	
	if (out.is_open()) {
		out << str;
	}

	out.close();
}

string EngineLog::getTimeStamp()
{
	chrono::system_clock::time_point Chronotime = chrono::system_clock::now();
	time_t timeStamp = chrono::system_clock::to_time_t(chrono::system_clock::now());
	char buf[100];
	ctime_s(buf, 100, &timeStamp);
	string retTime = buf;
	// erase escape character at the end of the string
	retTime.pop_back();

	return "{"+retTime+"}";
}

string EngineLog::getClassName()
{
	if (this->className != "") {
		return " <" + this->className + "> ";
	}
	return "";
}
