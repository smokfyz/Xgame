#include <iostream>
#include <string>
#include <Ultralight/Ultralight.h>
#include <AppCore/AppCore.h>
#include "runtime/Game.h"
#include "field/Field.h"
#include "player/Player.h"

using namespace std;
using namespace ultralight;

int main() {


    shared_ptr<Player> p1 = make_shared<Player>("Player 1", "#ffffff");
    shared_ptr<Player> p2 = make_shared<Player>("Player 2", "#000000");

    Game &game = Game::getGame();

    game.addPlayer(p1);
    game.addPlayer(p2);

    game.createUnits();

    game.run();

    return 0;
}