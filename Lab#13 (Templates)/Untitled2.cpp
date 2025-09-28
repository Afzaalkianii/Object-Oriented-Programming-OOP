// template_logger.cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

template<typename T>
class Logger {
    string filename;
public:
    Logger(const string& fname): filename(fname) {}
    void log(const T& item){
        ofstream ofs(filename, ios::app);
        ofs << item << '\n';
    }
};

int main(){
    Logger<string> log("log.txt");
    log.log("Program started");
    log.log("A sample log message");
    cout<<"Wrote log entries to log.txt\n";
}

