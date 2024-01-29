#include <iostream>
#include <array>

#include "audio.h"


std::vector<int>* AudioMessage::get_data() {
    return &this->content;
}

