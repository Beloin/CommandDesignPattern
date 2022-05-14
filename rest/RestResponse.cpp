//
// Created by beloin on 11/05/2022.
//

#include <iostream>
#include "RestResponse.h"
using namespace std;

void RestResponse::send(const string& bd) {
    if (!isSent) {
        cout << "Sent Body in response: " << endl << bd << endl;
    } else {
        cout << "Message Already Sent" << endl;
    }

    isSent = true;
}
