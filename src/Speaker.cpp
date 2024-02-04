#include <iostream>
#include <array>

#include "AudioMessage.h"
#include "Speaker.h"


void Speaker::speak(AudioMessage* audio_message) {
    std::cout << "Sending sound to mic..." << std::endl;
    std::vector<int>* content = audio_message->get_data();
    std::cout << "Content: ";
    for (size_t i{0}; i<content->size(); i++) {
        std::cout << content->at(i);
    }
    std::cout << std::endl;
}
