#include<iostream>
using namespace std;
class myclass {
    public  :void myFuction()
    {
        cout<< "are u like me "<< endl ; 
    }
};
class myChaild: public myclass
{

} ;
class myGrandchaild:public myChaild 
{

};
int main (){
    myGrandchaild myobj ;
    myobj.myFuction();
    return 0 ;

}