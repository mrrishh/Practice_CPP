#include<iostream>
void swap(int *v1, int *v2){
    int temp = *v1;
    *v1=*v2;
    *v2=temp;
}

int main(){
    int n1=2, n2=3;
    std::cout<<"\n Before  A= "<<n1<<" B= "<<n2;
    swap(&n1,&n2);
    std::cout<<"\n After  A= "<<n1<<" B= "<<n2;
}