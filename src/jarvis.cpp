#include <iostream>
#include <string>

#include "physical_interface.h"
#include "speech_to_text.h"
#include "text_to_speech.h"
#include "jarvis.h"



Jarvis::Jarvis() {
    std::cout << "Create jarvis" << std::endl;
    this->api = new Api("http://chatgpt.com");
    this->speech_to_text = new SpeechToText();
    this->text_to_speech = new TextToSpeech();
    this->physical_interface = new PhysicalInterface();
}


Jarvis::~Jarvis() {
    std::cout << "Delete jarvis" << std::endl;
    delete this->api;
    delete this->speech_to_text;
    delete this->text_to_speech;
    delete this->physical_interface;
}


void Jarvis::ListenAndRespond() {
    std::cout << "I'm listening..." << std::endl;
    AudioMessage* audio_message = this->physical_interface->listen();
    std::string text_message = this->speech_to_text->to_text(audio_message);
    std::string response_message = this->api->call(text_message);
    AudioMessage* response_audio_message = this->text_to_speech->to_audio(response_message);
    this->physical_interface->speak(response_audio_message);
    std::cout << "Processing finished" << std::endl << std::endl;

}