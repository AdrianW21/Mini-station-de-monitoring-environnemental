//
// Created by wisniewski on 23/11/2025.
//

#ifndef SCHEDULER_H
#define SCHEDULER_H
#include <functional>
#include <vector>

//Ici on crée un ordonnanceur afin d'éxecuter des tâches périodiquement
class Scheduler {
public:
    using Task = std::function<void()>; //Création de la fonction Task qui ne prend aucun argument et ne retourne rien

    void addTask(Task task); //Ajoute une tâche à la liste
    void runOnce();
private:
    std::vector<Task> tasks; //Tableau qui stocke des fonctions Task
};



#endif //SCHEDULER_H
