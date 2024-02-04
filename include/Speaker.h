#ifndef _INCLUDE_SPEAKER_H_
#define _INCLUDE_SPEAKER_H_
#include <iostream>
#include <vector>

#include "AudioMessage.h"

class Speaker {
public:
    void speak (AudioMessage*);
};
#endif