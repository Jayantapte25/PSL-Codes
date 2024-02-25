#include <iostream>
using namespace std;

class Animal {
public:
    string name;

    void setName(string a)
    {
        name = a;
        cout << "Name of the animal is: " << name << endl;
    }

    virtual void display()
    {
        cout << "Name of the animal is: " << name << endl;
    }
};

class Dog : public Animal
{
public:
    void setName(string b)
    {
        name = b;
        cout<<"Dog Function"<<endl;
    }

    void display()
    {
        cout << "Name of the dog is: " << name << endl;
    }
};

class Cat : public Animal
{
public:
    void setName(string c)
    {
        name = c;
        cout<<"Cat Function"<<endl;
    }

    void display()
    {
        cout << "Name of the cat is: " << name << endl;
    }
};

int main() {
    string animalName;
    cout << "Enter the name of the animal: ";
    cin >> animalName;

    Animal* chut;

    chut = new Dog();

    chut->setName(animalName);
    chut->display();

    chut= new Cat;
    chut->setName(animalName);
    chut->display();

    //2 methods of doing the above operations
    
    // Animal *c, o1;
    // Dog o2;
    // Cat o3;
    // c= &o2;
    // c->setName(animalName);
    // c->display();
}
