#include <iostream>
#include <string>

using namespace std;

void attack() {
    cout << "Performing a basic attack on the rock!" << endl;
}

void attack(int damage) {
    cout << "Performing a physical attack on the rock with " << damage << " damage!" << endl;
}

void attack(string spell, int damage) {
    cout << "Casting " << spell << " on the rock, dealing " << damage << " magical damage!" << endl;
}

int main() {
    attack();
    
    attack(35);
    
    attack("lightning strike", 80);

    return 0;
}