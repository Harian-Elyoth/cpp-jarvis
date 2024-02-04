#include <iostream>
#include <string>

#include "ApiHandler.h"

ApiHandler::ApiHandler() {
}

ApiHandler::ApiHandler(std::string url) {
    this->url = url;
}

ApiHandler::~ApiHandler() {
}


std::string ApiHandler::call(std::string message) {
    std::cout << "Calling api with message: " << message << std::endl;
    return "This is the answer from chatgpt";
};