#ifndef API_H
#define API_H
// some declarations in
// the header file.
#include <iostream>
#include <string>


class Api {
    std::string url;
public:
    Api(std::string url);
    ~Api();
    std::string call(std::string message);
};

#endif