#include <chrono>
#include <thread>

#include "Jarvis.h"


int main() { 
    Jarvis my_jarvis = Jarvis();
    while (true) {
        try {
            my_jarvis.ListenAndRespond();
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
        catch(...){
            break;
        }
    }
    return 0; 
}
