#include <iostream>
#include <string>
#include "field/Field.h"

using namespace std;

int main() {
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