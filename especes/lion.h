#ifndef LION_H
#define LION_H

#include <iostream>
#include "../espece.h"

class Lion : public Espece {
public:
    Lion() : Espece(EspeceID::Lion, "Lion", 110, 3, 15, 3, 4, 1, 0, 0, "Roaaaaar") {}

};

#endif // LION_H