cmake_minimum_required(VERSION 3.10)
project(command)

set(CMAKE_CXX_STANDARD 14)

include_directories(rest)

add_executable(
        command
        rest/RestCommand.h
        rest/RestRequest.cpp
        rest/RestRequest.h
        rest/RestResponse.cpp
        rest/RestResponse.h

        backend/commands/UserHandlerCommand.cpp
        backend/commands/UserHandlerCommand.h

        main.cpp
)
