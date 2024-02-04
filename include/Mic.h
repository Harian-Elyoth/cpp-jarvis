#ifndef _INCLUDE_INTERFACE_H_
#define _INCLUDE_INTERFACE_H_
#include <iostream>
#include <vector>

#include "AudioMessage.h"

class Mic {
public:
    AudioMessage* listen();
};
#endif