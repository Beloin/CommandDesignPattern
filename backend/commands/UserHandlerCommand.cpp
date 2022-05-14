//
// Created by beloin on 11/05/2022.
//

#include <iostream>
#include "UserHandlerCommand.h"

using namespace std;

void UserHandlerCommand::handle(RestRequest *req, RestResponse *res) {
    cout << "Handling from UserHandlerCommand." << endl;
    cout << "URL: " << req->getUrl() << endl;
    cout << "Body: " << req->getBody() << endl;
    res->send( R"({ "ace" : "Ribeiro"})");
}
