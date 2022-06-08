cmake_minimum_required(VERSION 3.21)
project(ClionCPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(ClionCPP MedienVerwaltung/Main.cpp MedienVerwaltung/Medium.h MedienVerwaltung/Audio.h MedienVerwaltung/Bild.h MedienVerwaltung/Node.h MedienVerwaltung/LinkedList.h MedienVerwaltung/Iterator.h)
