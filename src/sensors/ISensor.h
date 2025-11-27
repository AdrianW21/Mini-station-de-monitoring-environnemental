//
// Created by wisniewski on 23/11/2025.
//

#ifndef ISENSOR_H
#define ISENSOR_H

//Virtual permet le polymorphisme. Cela permet de récupérer la valeur réel d'une variable via un pointeur.
//En résumé, virtual spécifie les données essentielles dont peut être composé une class, un peu comme une empreinte ou ce que compose une identité.
//Le pointeur ira récupérer automatiquement la valeur réel de la classe instanciée à partir de celle-ci. A la manière d'une classe abstraite.
class ISensor {
public:
    virtual ~ISensor() = default; //Destructeur virtuel
    virtual float read() = 0; //on rajoute "=0" pour obliger les classes dérivées d'implémenter cette variable. Il ne peut y avoir de classe dérivé sans read()
    virtual const char* name() = 0;
};

#endif //ISENSOR_H
