#ifndef ANIMAL_H
#define ANIMAL_H
#include "espece.h"
#include "especes/lion.h"
#include "especes/poisson.h"

class Animal {
private:
    std::string nom;
    int age;
    EspeceID especeId;
    Espece espece = Lion::Lion();

public:
    Animal(std::string nom, int age, EspeceID especeId) : nom(nom), age(age), especeId(especeId) {
        switch (especeId) {
            case EspeceID::Lion:
                espece = Lion::Lion();
                break;
            case EspeceID::Poisson:
                espece = Poisson::Poisson();
                break;
            default:
                std::cerr << "Espece inconnue" << std::endl;
                break;
        }
    }
    
    void afficheNom() {
        std::cout << "Nom: " << nom << std::endl;
    }
    void afficheAge() {
        std::cout << "Age: " << age << std::endl;
    }
    Espece getEspece() {
        return espece;
    }
    std::string getName() {
        return nom;
    }
    int getAge() {
        return age;
    }
};

#endif // ANIMAL_H