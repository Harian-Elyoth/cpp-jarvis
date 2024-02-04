#include <iostream>
#include <string>

#include "Mic.h"
#include "ApiHandler.h"
#include "Speaker.h"
#include "SpeechToText.h"
#include "TextToSpeech.h"
#include "Jarvis.h"



Jarvis::Jarvis() {
    std::cout << "Create jarvis" << std::endl;
    std::string api_endpoint {"http://chatgpt.com"};
    this->chatgpt_api = ApiHandler(api_endpoint);
    this->speech_to_text = SpeechToText();
    this->text_to_speech = TextToSpeech();
    this->mic = Mic();
    this->speaker = Speaker();
}


Jarvis::~Jarvis() {
    std::cout << "Delete jarvis" << std::endl;
}


void Jarvis::ListenAndRespond() {
    std::cout << "I'm listening..." << std::endl;
    AudioMessage* audio_message_ptr = this->mic.listen();
    std::string text_message = this->speech_to_text.to_text(audio_message_ptr);
    std::string response_message = this->chatgpt_api.call(text_message);
    AudioMessage* response_audio_message_ptr = this->text_to_speech.to_audio(response_message);
    this->speaker.speak(response_audio_message_ptr);
    std::cout << "Processing finished" << std::endl << std::endl;
    delete audio_message_ptr;
    delete response_audio_message_ptr;
}