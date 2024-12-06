#ifndef ZOO_H
#define ZOO_H

#include <vector>
#include <string>
#include "animal.h"
#include "enclos.h"

class Zoo {
private:
    std::vector<Animal> animaux;
    std::vector<Enclos> enclosList;

public:

    Zoo() {}

    void ajouterAnimal(Animal& animal){
        animaux.push_back(animal);
        std::cout << animal.getName() << "(" << animal.getEspece().getName() << ")" << " a été ajouté au zoo." << std::endl;
        std::cout << animal.getName() << " dit " << animal.getEspece().faireUnSon() << " !" << std::endl;
    }

    void retirerAnimal(std::string& nomAnimal){
        animaux.erase(std::remove_if(animaux.begin(), animaux.end(),
            [&nomAnimal](Animal& animal) { return animal.getName() == nomAnimal; }), animaux.end());

        std::cout << nomAnimal << " a été retiré du zoo." << std::endl;
    }
    
    void listerAnimaux() {
        std::cout << "Dans le zoo, il y a : ";
        for (auto& animal : animaux) {
            std::cout << animal.getName() << " ,";
        }
        std::cout << std::endl;
    }

    void ajouterEnclos(Enclos& enclos){
        enclosList.push_back(enclos);
        std::cout << "L'enclos " << enclos.getName() << " a été ajouté au zoo." << std::endl;
    }

    void listerEnclos(){
        std::cout << "Dans le zoo, les enclos sont : ";
        for (auto& enclos : enclosList) {
            std::cout << enclos.getName() << " ,";
        }
        std::cout << std::endl;
    }

};

#endif // ZOO_H