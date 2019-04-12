#include <iostream>
#include <string>
#include "runtime/Game.h"
#include "field/Field.h"
#include "player/Player.h"

using namespace std;

int main() {

    shared_ptr<Player> p1 = make_shared<Player>();
    shared_ptr<Player> p2 = make_shared<Player>();

    Game game = Game();
    game.addPlayer(p1);
    game.addPlayer(p2);

    Field &game_field = game.getField();

    game_field.print();

    return 0;
}