//
// Created by smokfyz on 12.04.19.
//

#ifndef XGAME_UI_H
#define XGAME_UI_H

#pragma once
#include <AppCore/AppCore.h>
#include <map>
#include <memory>

using ultralight::JSObject;
using ultralight::JSArgs;
using ultralight::JSFunction;
using namespace ultralight;

class UI : public WindowListener,
           public LoadListener {
public:
    UI(Ref<Window> window);
    ~UI() override;

    // Inherited from WindowListener
    void OnClose() override;
    void OnResize(int width, int height) override;

    // Inherited from LoadListener
    void OnDOMReady(View* caller) override;

    // Called by UI JavaScript
    void OnPickHex(const JSObject& obj, const JSArgs& args);
    void OnNextTurn(const JSObject& obj, const JSArgs& args);

protected:
    void CreateField();
    void RenderField();

    Ref<View> view() { return overlay_->view(); }

    Ref<Window> window_;
    RefPtr<Overlay> overlay_;

    JSFunction createField;
    JSFunction setUnit;
};


#endif //XGAME_UI_H
