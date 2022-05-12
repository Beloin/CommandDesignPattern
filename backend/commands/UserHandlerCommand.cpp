//
// Created by beloin on 11/05/2022.
//

#include <iostream>
#include "UserHandlerCommand.h"

using namespace std;

void UserHandlerCommand::handle(RestRequest *req, RestResponse *res) {
    cout << "Handling from UserHandlerCommand." << endl;
    cout << "Body: " << req->getBody() << endl;
    res->send((string *) R"({ "ace" : "Ribeiro"})");
}
