#include "includes.h"
void writeout(std::string output){
    replace(output, "\n", "");
    std::cout<< "\r" << output  << std::flush;
}
void timeout(){
    std::string old = "";
    while(true){
        std::string output;
        std::chrono::system_clock::time_point today = std::chrono::system_clock::system_clock::now();
        std::time_t tt;
        tt = std::chrono::system_clock::to_time_t ( today );
        output=ctime(&tt);
        if(output != old){
            writeout(output);
            old=output;
        }
    }
}
int main(int argc, char **argv){
    std::cout << "Sharkbyteprojects Time Output\nVersion 0.0.1" << std::endl;
    if(argc > 1){
        std::cerr << std::endl;
        error("No Arguments Expected!");
        std::cerr << std::endl;
    }
    try {
        registerHandler();
        timeout();
    } catch (const std::exception& e) {
        error(e.what());
    }
    return 0;
}