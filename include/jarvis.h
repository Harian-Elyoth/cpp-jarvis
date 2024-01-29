#ifndef JARVIS_H
#define JARVIS_H
#include <iostream>
#include <string>

#include "speech_to_text.h"
#include "text_to_speech.h"
#include "audio.h"
#include "api.h"
#include "physical_interface.h"


class Jarvis {
    TextToSpeech* text_to_speech;
    SpeechToText* speech_to_text;
    Api* api;
    PhysicalInterface* physical_interface;

public:
    Jarvis();
    ~Jarvis();
    void ListenAndRespond();
};
#endif