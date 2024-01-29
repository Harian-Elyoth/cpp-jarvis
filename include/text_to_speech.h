#ifndef TEXTTOSPEECH_H
#define TEXTTOSPEECH_H
#include <iostream>
#include <string>
#include "audio.h"


class TextToSpeech {
public:
    AudioMessage* to_audio(std::string message);
};
#endif