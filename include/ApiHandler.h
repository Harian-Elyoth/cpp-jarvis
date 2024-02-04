#ifndef _INCLUDE_APIHANDER_H_
#define _INCLUDE_APIHANDER_H_
// some declarations in
// the header file.
#include <iostream>
#include <string>


class ApiHandler {
    std::string url;
public:
    ApiHandler();
    ApiHandler(std::string url);
    ~ApiHandler();
    std::string call(std::string message);
};

#endif