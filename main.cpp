#include<iostream>
#include<thread>
#include"C:\Users\DELL\Desktop\oop\singleton\Singleton.hpp"

using namespace std ;

void user1()
{
    Logger* log = Logger::getInstance();

}
void user2()
{
     Logger* log2 = Logger::getInstance();
}

int main()
{
    
    thread t1(user1);
    thread t2(user2);
    t1.join();
    t2.join();
    return 0;
}