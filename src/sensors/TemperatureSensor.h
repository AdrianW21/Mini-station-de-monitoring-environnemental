//
// Created by wisniewski on 23/11/2025.
//

#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H
#include "ISensor.h"

// TemperatureSensor hérite de la classe ISensor
class TemperatureSensor : public ISensor {
public:
    float read() override;
    const char* name() override {return "Temperature";} //On retourne un nom dans le header car c'est le nom invariant du capteur. Inutile donc de la spécifier dans le .cpp
};



#endif //TEMPERATURESENSOR_H
