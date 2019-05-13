//
// Created by smokfyz on 13.05.19.
//

#include <iostream>
#include <cstdlib>
#include "StaticImpediment.h"
#include "../runtime/Game.h"

void StaticImpediment::update() {}

Mountains::Mountains()  {
    type_name = "Mountains";
    permeability = 70;
    probability = 0.5;
}

void Mountains::generate() {
  /*  Game &game = Game::getGame();
    Field &field = game.getField();

    shared_ptr<Mountains> ptr = shared_ptr<Mountains>(this);

    unsigned x, y;
    do {
        x = rand() % field.getSize();
        y = rand() % field.getSize();
    } while(field[x][y]->getImpediment());

    filled.push_back(field[x][y]);
    field[x][y]->setImpediment(ptr);

    float prob;

    vector<shared_ptr<Cell>> reachable = field[x][y]->getReachable();
    for(shared_ptr<Cell> &cell : reachable) {
        prob = float(rand() % 100) / 100;
        std::cout << prob << " " << probability << std::endl;
        //if(prob < probability && !cell->getImpediment()) {
            //cell->setImpediment(ptr);
            //filled.push_back(cell);
            //for(shared_ptr<Cell> &cell2 : cell->getReachable())
            //    reachable.push_back(cell2);
        //}
    }*/
}

Forest::Forest() {
    type_name = "Forest";
    permeability = 40;
    probability = 0.2;
}

void Forest::generate() {
    Game &game = Game::getGame();
    Field &field = game.getField();
}

Swamp::Swamp() {
    type_name = "Swamp";
    permeability = 60;
    probability = 0.1;
}

void Swamp::generate() {
    Game &game = Game::getGame();
    Field &field = game.getField();
}

River::River() {
    type_name = "River";
    permeability = 30;
    probability = 0.3;
}

void River::generate() {
    Game &game = Game::getGame();
    Field &field = game.getField();
}
