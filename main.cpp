//
// Created by beloin on 11/05/2022.
//

#include "RestDriver.h"
#include "backend/commands/UserHandlerCommand.h"
#include "backend/commands/PostCommand.h"

int main() {
    RestDriver *restDriver = new RestDriver();

    restDriver->registerRest("/users", (RestCommand *) new UserHandlerCommand());
    restDriver->registerRest("/posts", (RestCommand *) new PostCommand());

    restDriver->makeRequest("/users", R"({ "Jenkins": null, "Steps": [ {"do": "..."} ] })");
    restDriver->makeRequest("/posts", R"({ "Jenkins": null, "Steps": [ {"do": "..."} ] })");
    return 0;
}