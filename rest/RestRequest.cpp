//
// Created by beloin on 11/05/2022.
//

#include "RestRequest.h"

string &RestRequest::getBody() const {
    return *body;
}

string &RestRequest::getUrl() const {
    return *URL;
}
