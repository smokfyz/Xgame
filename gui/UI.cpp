//
// Created by smokfyz on 12.04.19.
//

#include "../runtime/Game.h"
#include "UI.h"
#include "../impediment/StaticImpediment.h"

static UI *g_ui = nullptr;

UI::UI(Ref<Window> window) : window_(window) {
    int window_width = App::instance()->window()->width();
    int window_height = App::instance()->window()->height();
    overlay_ = Overlay::Create(window_, window_width, window_height, 0, 0);
    g_ui = this;

    view()->set_load_listener(this);
    view()->LoadURL("file:///field.html");
}

UI::~UI() {
    view()->set_load_listener(nullptr);
    g_ui = nullptr;
}

void UI::OnClose() {
}

void UI::OnResize(int width, int height) {
    RefPtr<Window> window = App::instance()->window();
    overlay_->Resize(window->width(), window->height());
}

void UI::OnDOMReady(ultralight::View* caller) {
    // Set the context for all subsequent JS* calls
    SetJSContext(view()->js_context());

    JSObject global = JSGlobalObject();

    createField = global["createField"];
    setUnit = global["setUnit"];

    global["OnPickHex"] = BindJSCallback(&UI::OnPickHex);
    global["OnNextTurn"] = BindJSCallback(&UI::OnNextTurn);

    CreateField();
    RenderField();
}

void UI::OnPickHex(const JSObject& obj, const JSArgs& args) {
    Game &game = Game::getGame();
    Field &field = game.getField();
}

void UI::OnNextTurn(const JSObject &obj, const JSArgs &args) {
    Game &game = Game::getGame();
    Field &field = game.getField();
}

void UI::CreateField() {
    Game &game = Game::getGame();
    Field &field = game.getField();

    createField({ field.getSize() });

}

void UI::RenderField() {
    Game &game = Game::getGame();
    Field &field = game.getField();

    for(int i = 0; i < field.getSize(); i++) {
        for(int j = 0; j < field.getSize(); j++) {
            if(field[i][j]->getUnit() != nullptr) {
                setUnit({ i, j });
            }
        }
    }

}