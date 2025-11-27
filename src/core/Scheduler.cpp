//
// Created by wisniewski on 23/11/2025.
//

#include "Scheduler.h"

void Scheduler::addTask(Task task) {
    tasks.push_back(task);
}

void Scheduler::runOnce() {
    for (auto& t : tasks) {
        t();
    }
}
