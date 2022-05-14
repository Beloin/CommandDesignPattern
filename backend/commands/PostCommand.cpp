//
// Created by beloin on 14/05/2022.
//

#include <iostream>
#include "PostCommand.h"

void PostCommand::handle(RestRequest *req, RestResponse *res) {
    cout << "Handling from PostCommand." << endl;
    cout << "URL: " << req->getUrl() << endl;
    cout << "Body: " << req->getBody() << endl;
    res->send( R"(null)");
}
