//
// Created by smokfyz on 10.04.19.
//

#ifndef XGAME_IMPEDIMENT_H
#define XGAME_IMPEDIMENT_H

#include <iostream>

using namespace std;

class Impediment {
    unsigned permeability;

public:
    explicit Impediment(unsigned = 100);

    unsigned getPermeability() const;

    friend ostream &operator<<(ostream &, const Impediment &);
};


#endif //XGAME_IMPEDIMENT_H
