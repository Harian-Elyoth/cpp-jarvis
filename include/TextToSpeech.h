#ifndef _INCLUDE_TEXTTOSPEECH_H_
#define _INCLUDE_TEXTTOSPEECH_H_
#include <iostream>
#include <string>
#include "AudioMessage.h"


class TextToSpeech {
public:
    AudioMessage* to_audio(std::string message);
};
#endif