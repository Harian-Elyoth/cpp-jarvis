#include <iostream>
#include <array>

#include "AudioMessage.h"


std::vector<int>* AudioMessage::get_data() {
    return &this->content;
}

