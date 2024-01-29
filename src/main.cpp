#include <chrono>
#include <thread>

#include "jarvis.h"


int main() { 
    Jarvis *my_jarvis = new Jarvis();
    while (true) {
        try {
            my_jarvis->ListenAndRespond();
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
        catch(...){
            break;
        }
    }
    delete my_jarvis;
    return 0; 
}
