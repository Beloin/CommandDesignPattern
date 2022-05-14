//
// Created by beloin on 11/05/2022.
//

#ifndef COMMAND_RESTRESPONSE_H
#define COMMAND_RESTRESPONSE_H
#include "string"
using namespace std;


class RestResponse {

private:
    bool isSent = false;

public:
    void send(const string& bd);
};


#endif //COMMAND_RESTRESPONSE_H
