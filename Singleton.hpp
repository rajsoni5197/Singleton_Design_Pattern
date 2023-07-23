#ifndef Singleton_H
#define Singleton_H
#include<string>
#include<iostream>
#include<mutex>
using namespace std;

class Logger
{
        static Logger* LoggerInstance;
        static int count;
        static mutex mtx ;
        Logger();
       
    public:
        static Logger* getInstance();
        void Log(string msg );

};

#endif