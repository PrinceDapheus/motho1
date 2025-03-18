#include "humanoid.h"

humanoid::humanoid(string n, int y, long i) : name(n), year(y), ID(i) {
    spawn();
}

void humanoid::spawn() {
    cout << "Robot has spawned!!!" << endl;
}

void humanoid::getInfo() {
    cout << "-------Robot Info--------" << endl;
    cout << "Name: " << name << endl;
    cout << "Year: " << year << endl;
    cout << "ID: " << ID << endl;
}

