cmake_minimum_required(VERSION 3.14)
project(CopyControl)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CopyControl
        DoublyLinkedNode.h
        DoublyLinkedNodeIterator.h
        List.h
        main.cpp
        Queue.h
        QueueIterator.h
        Stack.h
        StackIterator.h)
