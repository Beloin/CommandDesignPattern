//
// Created by beloin on 13/05/2022.
//

#include "RestDriver.h"
void RestDriver::registerRest(string r, RestCommand *restCommand) {
    this->rest.insert(pair<string, RestCommand*>(r, restCommand));
}

void RestDriver::request(string url, string body) {
    RestCommand* dr = this->rest.at(url);
    dr->handle(new RestRequest(&body, &url), new RestResponse());
}
