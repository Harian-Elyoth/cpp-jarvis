#ifndef _INCLUDE_JARVIS_H_
#define _INCLUDE_JARVIS_H_
#include <iostream>
#include <string>

#include "SpeechToText.h"
#include "TextToSpeech.h"
#include "AudioMessage.h"
#include "ApiHandler.h"
#include "Mic.h"
#include "Speaker.h"


class Jarvis {
    TextToSpeech text_to_speech;
    SpeechToText speech_to_text;
    ApiHandler chatgpt_api;
    Mic mic;
    Speaker speaker;

public:
    Jarvis();
    ~Jarvis();
    void ListenAndRespond();
};
#endif