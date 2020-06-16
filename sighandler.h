#include <csignal>
void signalHandler( int signum ) {
    error("User Interruption");
    exit(signum);
}
void registerHandler(){
    signal(SIGINT, signalHandler);
}