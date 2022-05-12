//
// Created by beloin on 11/05/2022.
//

#ifndef COMMAND_RESTCOMMAND_H
#define COMMAND_RESTCOMMAND_H
#include "RestRequest.h"
#include "RestResponse.h"

class RestCommand {

public:
    virtual void handle(RestRequest *req, RestResponse *res) = 0;
};


#endif //COMMAND_RESTCOMMAND_H
