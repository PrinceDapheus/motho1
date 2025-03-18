#ifndef HUMANOID_H
#define HUMANOID_H

#include <iostream>
using namespace std;

class humanoid {
public:
    humanoid(string n, int y, long i);
    void spawn();
    void getInfo();

private:
    string name;
    int year;
    long ID;
};

#endif // HUMANOID_H

