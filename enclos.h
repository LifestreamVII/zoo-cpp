#ifndef ENCLOS_H
#define ENCLOS_H

#include <vector>
#include <string>
#include "animal.h"

class Enclos {
private:
    std::string nom;
    std::vector<Animal> animaux;

public:
    Enclos(std::string nom) : nom(nom) {}

    void ajouterAnimal(Animal& animal) {
        animaux.push_back(animal);
    }

    void retirerAnimal(std::string& nomAnimal) {
        animaux.erase(std::remove_if(animaux.begin(), animaux.end(),
            [&nomAnimal](Animal& animal) { return animal.getName() == nomAnimal; }),
            animaux.end());
    }

    void listerAnimaux() {
        std::cout << "Animaux dans l'enclos " << nom << ": ";
        for (auto& animal : animaux) {
            std::cout << animal.getName() << ", ";
        }
        std::cout << std::endl;
    }

    std::string getName() {
        return nom;
    }
};

#endif // ENCLOS_H