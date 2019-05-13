//
// Created by smokfyz on 13.05.19.
//

#ifndef XGAME_IMPEDIMENTMANAGER_H
#define XGAME_IMPEDIMENTMANAGER_H

#include "Impediment.h"

class ImpedimentManager {
    vector<shared_ptr<Impediment>> impediments;

public:
    void update();
};


#endif //XGAME_IMPEDIMENTMANAGER_H
