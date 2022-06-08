


#include <iostream>
#include "Audio.h"
#include "Bild.h"
#include "LinkedList.h"

template<typename T>
void printData(T data) {
    std::cout << data << " ";
}

void printMedium(Medium *m) {
    m->druckeDaten();
}

std::ostream &operator<<(std::ostream &out, Medium *m) {
    out << m->getDaten();
    return out;
}

int main() {

    Medium *medien[2];
    medien[0] = new Audio("It Means Nothing", 2007, "Stereophonics", 229);
    medien[1] = new Bild("Gebaeude FB Informatik", 2014, "Dortmund");

    /*
    medien[0]->druckeDaten();
    medien[1]->druckeDaten();

    std::cout<<"Alter: "<<medien[0]->alter()<<std::endl;
    std::cout<<"Alter: "<<medien[1]->alter()<<std::endl;
     */


    LinkedList<int> list1{};
    LinkedList<char> list2{};

    LinkedList<Medium *> list3{};

    LinkedList<Medium *> *ptr = &list3;
    std::cout<<ptr<<std::endl;
    ptr++;
    std::cout<<ptr<<std::endl;





    Audio *a = new Audio("It Means Nothing", 2007, "Stereophonics", 229);
    Bild *b = new Bild("Gebaeude FB Informatik", 2014, "Dortmund");


    list3.add(medien[0]);
    list3.add(medien[1]);
    list3.add(a);
    list3.add(b);


    list1.add(1);
    list1.add(2);
    list1.add(3);

    list2.add('a');
    list2.add('b');
    list2.add('c');

    std::cout << "Print Normal:" << std::endl;
    list1.print(printData);
    list2.print(printData);
    list3.print(printMedium);
    std::cout << "Print Iterator:" << std::endl;
    list1.printIterator(printData);
    list2.printIterator(printData);
    list3.printIterator(printMedium);

    std::cout << "Anzahl Elemente in List 2: " << list2.size() << std::endl;
    std::cout << "Elemet in index 1: " << list2[1] << std::endl;

    std::cout << "Anzahl Elemente in List 3: " << list3.size() << std::endl;
    std::cout << "Elemet in index 1: " << list3[1] << std::endl;



    return 0;
}
