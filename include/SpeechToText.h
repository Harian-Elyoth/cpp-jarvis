#ifndef _INCLUDE_SPEECHTOTEXT_H_
#define _INCLUDE_SPEECHTOTEXT_H_
#include <iostream>
#include <string>
#include "AudioMessage.h"


class SpeechToText {
public:
    std::string to_text(AudioMessage* message);
};
#endif