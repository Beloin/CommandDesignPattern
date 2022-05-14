//
// Created by beloin on 13/05/2022.
//

#ifndef COMMAND_RESTDRIVER_H
#define COMMAND_RESTDRIVER_H
#include "RestCommand.h"
#include "map"
#include "string"

using namespace std;

class RestDriver {

private:
    map<string, RestCommand*> rest;

public:
    void registerRest(string r, RestCommand* restCommand);
    void makeRequest(string url, string body);
};


#endif //COMMAND_RESTDRIVER_H
