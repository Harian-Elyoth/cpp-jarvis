#include <iostream>
#include <string>
#include "audio.h"
#include "speech_to_text.h"


std::string SpeechToText::to_text(AudioMessage* message) {
    std::vector<int>* content = message->get_data();
    std::cout << "Processing speech to text..." << std::endl;
    std::string text_message = "This is the message spoken by the user" + content->at(0);
    return text_message;
}