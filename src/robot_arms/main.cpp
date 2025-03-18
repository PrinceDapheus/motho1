
//Create a shared pointer
//Check it's use_count
//Create a weak pointer that is linked to the object
//Check the use_count 
//Reset the shared_pointer   
//check if the object is alive and is the shared pointer is still active or null.

#include <iostream>
using namespace std;
#include <memory>

class arm{

public:

    arm (string n)
    : name(n)
    {

    cout << name << " has been activated !" <<endl;

    }

    ~arm(){

       cout << "arm has been killed....." <<endl;

    }


    void arm_move(double a){
        angle = a;
        cout << "arm is moving " << angle <<" degrees"<<endl;
    }

    private:
    double angle;
    string name;

};



int main(){

// unique_ptr<string>up1 = make_unique<string> ("right_arm");
unique_ptr<int>up1 = make_unique<int>(10);

cout << *up1 << endl;

//cout << "Billy" <<endl;

    return 0;
}