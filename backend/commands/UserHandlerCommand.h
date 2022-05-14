//
// Created by beloin on 11/05/2022.
//

#ifndef COMMAND_USERHANDLERCOMMAND_H
#define COMMAND_USERHANDLERCOMMAND_H


#include <RestCommand.h>

class UserHandlerCommand : RestCommand {
    void handle(RestRequest *req, RestResponse *res) override;
};


#endif //COMMAND_USERHANDLERCOMMAND_H
