#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>
#include <vector>

#include "audio.h"

class PhysicalInterface {
public:
    void speak (AudioMessage*);
    AudioMessage* listen();
};
#endif