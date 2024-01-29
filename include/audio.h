#ifndef AUDIO_H
#define AUDIO_H
#include <iostream>
#include <vector>

class AudioMessage {
    std::vector<int> content {0, 1, 2, 3, 4};
public:
    std::vector<int>* get_data();
};
#endif