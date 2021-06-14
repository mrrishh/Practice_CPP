#include<iostream>
using namespace std;

class Animal
{
private:
    /* data */
public:
    virtual void eat(){
        cout<<"I am eating generic food"<<endl;
    }
};

class Cat : public Animal{
    public:
        void eat(){
            cout<<"I am eating cat food"<<endl;
        }
};

class Dog : public Animal{
    public:
        void eat(){
            cout<<"I am eating dog food"<<endl;
        }
};

void eatFood(Animal *an){
    an->eat();
}


int main(){
    Animal *ptr;
    Cat catObj;
    Dog dogObj;

    ptr=&catObj;
    eatFood(ptr);

    ptr=&dogObj;
    eatFood(ptr);
}