#include<iostream>
#include<exception>
/*
1.  The NOTHROW constant value is used as an argument for operator new and operator new[] 
    to indicate that these functions shall not throw an exception on failure but return a
    null pointer instead.
2.  By default, when the new operator is used to attempt to allocate memory and the 
    handling function is unable to do so, a bad_alloc exception is thrown.
3.  But when nothrow is used as an argument for new, and it returns a null pointer instead.
4.  This constant (nothrow) is just a value of type nothrow_t, with the only purpose of 
    triggering an overloaded version of the function operator new (or operator new[]) 
    that takes an argument of this type.
*/
        
int main(){
    long memory=0x7fffffff;
    char *ptr = new (std::nothrow) char[memory];
    if(ptr)
        std::cout<<"Memory Allocated";
    else
        std::cout<<"Memory Allocation Failed!!";;
    return 0;
}