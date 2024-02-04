#include <iostream>
#include <string>
#include <array>

#include "AudioMessage.h"
#include "TextToSpeech.h"

AudioMessage* TextToSpeech::to_audio(std::string message) {
    std::cout << "Processing text to speech... Message: " << message << std::endl;
    AudioMessage* audio_message_ptr = new AudioMessage();
    return audio_message_ptr;
}