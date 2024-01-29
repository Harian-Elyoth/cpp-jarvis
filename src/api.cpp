#include <iostream>
#include <string>

#include "api.h"

Api::Api(std::string url) {
    this->url = url;
}

Api::~Api() {
}


std::string Api::call(std::string message) {
    std::cout << "Calling api with message: " << message << std::endl;
    return "This is the answer from chatgpt";
};