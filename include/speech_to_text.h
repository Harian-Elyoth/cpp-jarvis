#ifndef SPEECHTOTEXT_H
#define SPEECHTOTEXT_H
#include <iostream>
#include <string>
#include "audio.h"


class SpeechToText {
public:
    std::string to_text(AudioMessage* message);
};
#endif