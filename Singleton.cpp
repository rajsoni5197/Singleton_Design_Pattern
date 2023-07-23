#include "C:\Users\DELL\Desktop\oop\singleton\Singleton.hpp"

Logger *Logger::LoggerInstance = nullptr;
int Logger::count = 0;
mutex Logger::mtx;

Logger::Logger()
{
    cout << "No of Instance created = " << ++count << endl;
    cout << "New Logger Created" << endl;
}
Logger *Logger::getInstance()
{
    if (!LoggerInstance)
    {
        mtx.lock();
        if (!LoggerInstance)
        {
            LoggerInstance = new Logger();
        }
        mtx.unlock();
    }

    return LoggerInstance;
}
void Logger::Log(string msg)
{
    cout << msg << endl;
}
