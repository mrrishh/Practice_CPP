#include<iostream>

class MyCircularQueue {
public:
    int f;
    int r;
    int n;
    int* circQ;
    MyCircularQueue(int k) {
        n=k;
        f=-1;
        r=-1;
        circQ = new int[k];
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        else if(isEmpty()){
            f=0;r=0;
            circQ[f]=value;
        }
        else{
            r=(r+1)%n;
            circQ[r]=value;
        }
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
    else if(f == r)
    {
        circQ[f] = 0;
        f = -1;
        r = -1;
    }
    else
    {
        circQ[f]= 0;
        f++;
        if(f == n) f = 0;
    }
    return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return circQ[f];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return circQ[r];
    }
    
    bool isEmpty() {
        return  (f==-1 && r==-1);
    }
    
    bool isFull() {
        return((r+1)%n == f);
    }
};

int main(){
 int k = 3;
 int value = 1;
 MyCircularQueue* obj = new MyCircularQueue(k);
 bool param_1 = obj->enQueue(value);
 bool param_2 = obj->deQueue();
 int param_3 = obj->Front();
 int param_4 = obj->Rear();
 bool param_5 = obj->isEmpty();
 bool param_6 = obj->isFull();

}