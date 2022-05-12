//
// Created by beloin on 11/05/2022.
//

#ifndef COMMAND_RESTREQUEST_H
#define COMMAND_RESTREQUEST_H
#include "string"

using namespace std;

class RestRequest {

private:
    string *body;
    string *URL;

public:
    string &getBody() const;
    string &getUrl() const;
};


#endif //COMMAND_RESTREQUEST_H
