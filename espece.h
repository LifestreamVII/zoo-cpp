#ifndef ESPECE_H
#define ESPECE_H

#include <string>

enum EspeceID {
    Lion,
    Elephant,
    Poisson,
    Giraffe,
    Ours,
    Renard,
    Lapin,
    Serpent,
    Singe
};

class Espece {
    private:
        EspeceID id;
        std::string nom;
        std::string son;
        int dureeGestation;
        int nbPetits;
        int dureeVie;
        int ageAdulte;
        int nbPattes;
        int nbQueues;
        int nbAiles;
        int nbNageoires;
    public:
        Espece(EspeceID id, std::string nom, int dureeGestation, int nbPetits, int dureeVie, int ageAdulte, int nbPattes, int nbQueues, int nbAiles, int nbNageoires, std::string son) : id(id), nom(nom), dureeGestation(dureeGestation), nbPetits(nbPetits), dureeVie(dureeVie), ageAdulte(ageAdulte), nbPattes(nbPattes), nbQueues(nbQueues), nbAiles(nbAiles), nbNageoires(nbNageoires), son(son) {}

        EspeceID getID() {
            return id;
        }

        std::string getName() {
            return nom;
        }

        std::string faireUnSon() {
            return son;
        };

};

#endif // ESPECE_H