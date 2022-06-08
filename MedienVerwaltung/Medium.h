//
// Created by Nassar, Mohamad Adnan on 06.06.22.
//

#ifndef CLIONCPP_MEDIUM_H
#define CLIONCPP_MEDIUM_H


#include <string>
#include <iostream>
#define aktuellesJahr 2022

class Medium{
private:
    const int id;
    static int counter;
    std::string title;
    int jahr;

public:
    Medium(std::string title, int jahr);
    virtual ~Medium();
    int alter();
    void virtual druckeDaten() = 0; // pure virtual methode
    std::string virtual getDaten() = 0; // pure virtual methode
    int getID()  { return id; }
    std::string geTitle() const { return title; }
    int getJahr(){return jahr;}
};

int Medium::counter = 0;

Medium::Medium(std::string title, int jahr) : title(title), jahr(jahr), id(counter){
    counter++;
}
Medium::~Medium(){std::cout<<"Destructor"<<std::endl;}
int  Medium::alter() { return aktuellesJahr  - jahr;}

#endif //CLIONCPP_MEDIUM_H
