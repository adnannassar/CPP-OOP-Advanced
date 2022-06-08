//
// Created by Nassar, Mohamad Adnan on 06.06.22.
//

#ifndef CLIONCPP_BILD_H
#define CLIONCPP_BILD_H


#include "Medium.h"
#include <string>

class Bild : public Medium {
private:
    std::string ort;

public:
    Bild(std::string title, int jahr, std::string ort);

    std::string getOrt() { return ort; }

    void druckeDaten() override {
        std::cout << "ID = " << getID() << " \"" << geTitle() << "\" aufgenommen im Jahr " << getJahr() << " in " << ort
                  << std::endl;
    }

    std::string virtual getDaten() override {
        return "ID = " + std::to_string(getID()) + " \"" + geTitle() + "\" aufgenommen im Jahr " +
               std::to_string(getJahr()) + " ing: " +  ort + "\n";
    }
};

Bild::Bild(std::string title, int jahr, std::string ort) : Medium(title, jahr), ort(ort) {}

#endif //CLIONCPP_BILD_H
