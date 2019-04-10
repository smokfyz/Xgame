#include <iostream>
#include <string>
#include <Ultralight/Ultralight.h>
#include "field/Field.h"

using namespace std;
using namespace ultralight;

int main() {

    auto& platform = Platform::instance();

    Config config_{};
    config_.face_winding = kFaceWinding_Clockwise; // CW in D3D, CCW in OGL
    config_.device_scale_hint = 1.0;               // Set DPI to monitor DPI scale
    config_.font_family_standard = "Segoe UI";     // Default font family

    platform.set_config(config_);
    //platform.set_gpu_driver(gpu_driver_);
    //platform.set_file_system(file_system_);
    //platform.set_font_loader(font_loader_);

    Ref<Renderer> renderer = Renderer::Create();


    unsigned field_size;
    string name;

    cout << "What's your name?" << endl;
    cin >> name;
    cout << "What's field size would be?" << endl;
    cin >> field_size;

    Field game_field = Field(field_size);
    std::cout << game_field.getSize() << std::endl;
    return 0;
}