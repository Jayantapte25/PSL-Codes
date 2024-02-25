//copy contructor
#include<iostream>
using namespace std;

class cayman{
    int money;
    public:
    cayman(int m){
        money=m;
    }
    cayman(cayman &obj){
        money=obj.money;
    }
    void display(){
        cout<<money<<endl;
    }
};
int main(){
    cayman obj1(20);
    cayman obj2(obj1);
    obj1.display();
    obj2.display();
}
// Path: OOPS/constructor.cpp

