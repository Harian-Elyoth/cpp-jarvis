#include <iostream>
#include <string>

#include <curl/curl.h>

#include "ApiHandler.h"

ApiHandler::ApiHandler() {
}

ApiHandler::ApiHandler(std::string url) {
    this->url = url;
}

ApiHandler::~ApiHandler() {
}

struct ResponseData {
    std::string data;
};

size_t write_callback(char* ptr, size_t size, size_t nmemb, void* userdata) {
    size_t total_size = size * nmemb;
    ResponseData* response = static_cast<ResponseData*>(userdata);
    response->data.append(ptr, total_size);
    return total_size;
}

std::string ApiHandler::call(std::string message) {
    std::cout << "Calling api with message: " << message << std::endl;
    CURL* curl;
    CURLcode res;
    ResponseData response_data;
    struct curl_slist* headers = NULL;
    std::string json_data = "{\"message\": \"" + message + "\"}";
    const char* json_data_c_style = json_data.c_str();
    //const char* json_data = "{\"name\": \"John Doe\", \"email\": \"john@example.com\"}";


    curl = curl_easy_init();
    if (curl) {
        headers = curl_slist_append(headers, "Content-Type: application/json");
        curl_easy_setopt(curl, CURLOPT_URL, "https://google.com");
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, json_data_c_style);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_data);
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        }
        curl_easy_cleanup(curl);
        std::cout << "Response: " << response_data.data << std::endl;
    } else {
        std::cerr << "Failed to initialize curl" << std::endl;
    }
    return "This is the answer from chatgpt";
};