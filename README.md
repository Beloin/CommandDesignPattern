# Command Design Pattern Project

The internet are in everyday usable applications, like Facebook, Google, Whatsapp etc.
But in order to use those applications, an infrastructure and software architecture are
necessary to make those things become practical. With this in mind, Roy Fielding created
an internet-based architecture to transfer data between client and server, 
the REST Architectural Style. Since that, everyday software developer can implement
a good and universal server following REST style.  
In our project, we will implement a handler to REST requests using the Command
Design Pattern.


Implementar interrface Rest usando command.


Ex:  
RestInterface.handle("/users", new UserHandlerCommand())

Command:
 - Handle(Request, Response)

Response:
 - send(String)
//  headers

Request:
 - string& getURL();
 - string& getBody()