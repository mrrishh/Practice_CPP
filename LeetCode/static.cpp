/*
Static Data members in C++_
A static member is shared by all objects of the class. 
All static data is initialized to zero when the first object is created, if no other initialization is present. 
We can't put it in the class definition but it can be initialized outside the class using the scope resolution operator :: to identify which class it belongs to.
When we declare a member of a class as static it means no matter how many objects of the class are created, there is only one copy of the static member.

Static Member functions in C++
By declaring a member function as static, you make it independent of any particular object of the class. A static member function can be called even if no objects of the class exist and the static functions are accessed using only the class name and the scope resolution operator (::)
A static member function can only access static data member, other static member functions and any other functions from outside the class.
Static member functions have a class scope and they do not have access to the this pointer of the class. 
You could use a static member function to determine whether some objects of the class have been created or not.
*/
#include<iostream>
using namespace std;

class StaticClass{
    private:
        int x;
        static int count;
    public:
        StaticClass(){
            count++;
        }

        static int getCount(){
            return count;
        }
};

int StaticClass::count =0;

int main(){
    cout<<"Value of count: "<<StaticClass::getCount()<<endl;
    StaticClass obj1;
    cout<<"Value of count: "<<StaticClass::getCount()<<endl;
    StaticClass obj2;
    cout<<"Value of count: "<<StaticClass::getCount()<<endl;
    StaticClass obj3;
    cout<<"Value of count: "<<StaticClass::getCount()<<endl;
    StaticClass obj4;
    cout<<"Value of count: "<<StaticClass::getCount()<<endl;
}



