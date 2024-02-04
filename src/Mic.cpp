#include <iostream>
#include <array>

#include "AudioMessage.h"
#include "Mic.h"


AudioMessage* Mic::listen() {
    std::cout << "Getting audio message from mic..." << std::endl;
    AudioMessage* audio_message = new AudioMessage(); 
    return audio_message;
}
