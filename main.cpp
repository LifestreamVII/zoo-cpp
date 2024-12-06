// ***************************************************************

// Project: Gestion du Zoo
// Author: Loïs L.
// Date: 2024-12-06

// ***************************************************************

#include <iostream>
#include <string>
#include "zoo.h"
#include "enclos.h"
#include "espece.h"
#include "animal.h"

int main() {
    std::cout << "Bienvenue au Zoo" << std::endl;
    Zoo zoo;
    
    Enclos enclos1("Enclos des Lions");
    Enclos enclos2("Enclos des Poissons");
    
    zoo.ajouterEnclos(enclos1);
    zoo.ajouterEnclos(enclos2);
    
    Animal simba("Simba", 5, EspeceID::Lion);
    Animal nemo("Nemo", 2, EspeceID::Poisson);
    
    zoo.ajouterAnimal(simba);
    zoo.ajouterAnimal(nemo);

    enclos1.ajouterAnimal(simba);
    enclos2.ajouterAnimal(nemo);

    zoo.listerAnimaux();

    enclos1.listerAnimaux();
    enclos2.listerAnimaux();

    enclos1.retirerAnimal(simba.getName());
    zoo.retirerAnimal(simba.getName());

    enclos1.listerAnimaux();
    zoo.listerAnimaux();

    return 0;
}