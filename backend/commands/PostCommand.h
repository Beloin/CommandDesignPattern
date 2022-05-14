//
// Created by beloin on 14/05/2022.
//

#ifndef COMMAND_POSTCOMMAND_H
#define COMMAND_POSTCOMMAND_H


#include "RestCommand.h"

class PostCommand : RestCommand {
    void handle(RestRequest *req, RestResponse *res) override;
};


#endif //COMMAND_POSTCOMMAND_H
