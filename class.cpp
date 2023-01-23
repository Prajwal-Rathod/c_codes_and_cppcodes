#include<iostream>
using namespace std;
class father{
    public : void house(){
        cout<< "have owen 2bhk house ,"<< endl;
    }
};
class son: public father{
    public :void car(){
        cout<<"owen a audi car"<< endl;
    }
};
int main(){
    son o;  // Create an object of class son
    o.house();
    o.car();
    return 0;
}


