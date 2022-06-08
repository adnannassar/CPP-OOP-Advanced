//
// Created by Nassar, Mohamad Adnan on 08.06.22.
//

#ifndef CLIONCPP_ITERATOR_H
#define CLIONCPP_ITERATOR_H

template<typename T>
class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual const T next() = 0;
    virtual ~Iterator(){}
};

#endif //CLIONCPP_ITERATOR_H
