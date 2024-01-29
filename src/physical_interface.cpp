#include <iostream>
#include <array>

#include "audio.h"
#include "physical_interface.h"


AudioMessage* PhysicalInterface::listen() {
    std::cout << "Getting audio message from mic..." << std::endl;
    AudioMessage* audio_message = new AudioMessage(); 
    return audio_message;
}

void PhysicalInterface::speak(AudioMessage* audio_message) {
    std::cout << "Sending sound to mic..." << std::endl;
    std::vector<int>* content = audio_message->get_data();
    std::cout << "Content: ";
    for (size_t i{0}; i<content->size(); i++) {
        std::cout << content->at(i);
    }
    std::cout << std::endl;
}

