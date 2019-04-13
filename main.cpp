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

    auto app = App::Create();

    auto window = Window::Create(app->main_monitor(), 1024, 768, false,
                             kWindowFlags_Resizable | kWindowFlags_Titled | kWindowFlags_Maximizable);
    window->SetTitle("Xgame");
    app->set_window(window.get());

    app->Run();

    shared_ptr<Player> p1 = make_shared<Player>();
    shared_ptr<Player> p2 = make_shared<Player>();

    Game game = Game();
    game.addPlayer(p1);
    game.addPlayer(p2);

    Field &game_field = game.getField();

    game_field.print();

    return 0;
}