#ifndef POISSON_H
#define POISSON_H

#include <iostream>
#include "../espece.h"

class Poisson : public Espece {
public:
    Poisson() : Espece(EspeceID::Poisson, "Poisson", 110, 3, 15, 3, 4, 1, 0, 0, "Bloop bloop") {}
};

#endif // POISSON_H