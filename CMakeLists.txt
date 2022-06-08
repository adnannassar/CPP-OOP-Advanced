cmake_minimum_required(VERSION 3.21)
project(ClionCPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(ClionCPP Buchverwaltung/Main.cpp Buchverwaltung/Medium.h Buchverwaltung/Audio.h Buchverwaltung/Bild.h Buchverwaltung/Node.h Buchverwaltung/LinkedList.h Buchverwaltung/Iterator.h)
