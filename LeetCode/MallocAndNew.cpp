/*
NEW:    Initializes the allocated memory by calling the constructor
        New is an operator.
        New[] requires you to specify the number of objects to allocate.
        Delete[] is associated with new.
        It creates an object.
        It can be overloaded.
        It allocates enough momory for the object of a specified type so it doesn't require sizing operator.
        It does not require any type cast.
        If it fails to allocate the memory it thorws an exception.
        Once the memory is allocated by NEW it can not be resized in anyway.

Malloc: Allocates the unitialized Memory only
        Malloc is a function 
        Malloc requires you to specfy total number of bytes to allocate.
        Free is associated with Malloc
        It does not create object.
        It cannot be overloaded.
        It returns NULL when failed to allocate memory.
        Memory can be reallocate(resize) by using realloc function.

*/

#include<iostream>

class Stuff{
    public:
        int i;
        int a=23;
        Stuff(){
            std::cout<<"\n Hey I am in the Constructor";
            i=456;
        }
};

int main(){
    //NEW
    Stuff *abc = new Stuff[5];
    std::cout<<"\nCreating Memmory with NEW: "<< abc->i;
    std::cout<<"\nCreating Memmory with NEW: "<< abc->a;

    //Malloc
    Stuff *abc1 = static_cast<Stuff*>(malloc(5*sizeof(Stuff)));
    std::cout<<"\n Creating Memmory with Malloc: "<< abc1->i;
    std::cout<<"\nCreating Memmory with Malloc: "<< abc->a;
    return 0;
}

/*
 Hey I am in the Constructor
 Hey I am in the Constructor
 Hey I am in the Constructor
 Hey I am in the Constructor
 Hey I am in the Constructor
Creating Memmory with NEW: 456
Creating Memmory with NEW: 23
Creating Memmory with Malloc: 15301224
Creating Memmory with Malloc: 23
*/