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


    shared_ptr<Player> p1 = make_shared<Player>();
    shared_ptr<Player> p2 = make_shared<Player>();

    Game game = Game();

    Field &game_field = game.getField();

    game.run();

    return 0;
}