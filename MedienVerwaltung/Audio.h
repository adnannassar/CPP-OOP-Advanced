//
// Created by Nassar, Mohamad Adnan on 06.06.22.
//

#ifndef CLIONCPP_AUDIO_H
#define CLIONCPP_AUDIO_H


#include "Medium.h"
#include <string>

class Audio : public Medium {
private:
    std::string interpret;
    int dauer;

public:
    Audio(std::string title, int jahr, std::string interpret, int dauer);

    std::string getInterpret() { return interpret; }

    int getDauer() { return dauer; }

    void druckeDaten() override {
        std::cout << "ID = " << getID() << " \"" << geTitle() << "\" von " << interpret << " aus " << getJahr()
                  << " Spieldauer: " << dauer << " sek." << std::endl;
    }

    std::string virtual getDaten() override {
        return "ID = " + std::to_string(getID()) + " \"" + geTitle() + "\" von " + interpret + " aus " +
               std::to_string(getJahr()) + " Spieldauer: " + std::to_string(dauer) + " sek.\n";
    }
};

Audio::Audio(std::string title, int jahr, std::string interpret, int dauer) : Medium(title, jahr), interpret(interpret),
                                                                              dauer(dauer) {}

#endif //CLIONCPP_AUDIO_H
