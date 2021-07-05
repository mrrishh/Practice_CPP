#include<iostream>
#include<string>
int main(){
    int i =10;
    int *ptr;
    ptr = &i;

    std::cout<<"Value of i: "<<i<<"\n";
    std::cout<<"Address of i: "<<&i<<"\n";
    std::cout<<"Address of PTR: "<<&ptr<<"\n";
    std::cout<<"PTR's Pointer Variable: "<<*ptr<<"\n";
    std::cout<<"Pointer equals to &i: "<<*(&i)<<"\n";


    //Using Dereference operator to change the value of i

    *ptr=15;
    std::cout<<"Value of i :"<<i<<"\n";
    std::cout<<"Address of i"<<&i<<"\n";

    //Size of different Pointers

    char a ='x';
    char *pa = &a;

    float f = 10.01;
    float *pf = &f;

    double d= 12.3;
    double *pd= &d;

    long l = 34324324;
    long *pl = &l;

    long long l1 = 32532543543;
    long long *pl1 = &l1;

    std::string s= "Rishabh";
    std::string *ps = &s;

    std::cout<<"\n Size of INT I:" <<sizeof(*ptr);
    std::cout<<"\n Size of CHAR A:" <<sizeof(*pa);
    std::cout<<"\n Size of FLOAT F:" <<sizeof(*pf);
    std::cout<<"\n Size of DOUBLE D:" <<sizeof(*pd);
    std::cout<<"\n Size of LONG L:" <<sizeof(*pl);
    std::cout<<"\n Size of LONG LONG L1:" <<sizeof(*pl1);
    std::cout<<"\n Size of STRING S:" <<sizeof(*ps);

    int **dp;
    dp= &ptr;

    std::cout<<"\nAddress of Double Pointer"<<&dp;
    std::cout<<"\nValue of dp:"<<*dp;
    std::cout<<"\nDP pointing to value:"<<**dp;
}