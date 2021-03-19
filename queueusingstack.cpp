#include<iostream>
#define MAX 5
using namespace std;
class stacks{
   int top=-1;
 public:
   int a[MAX];
    public:
    bool push(int element);
    int pop();
    int peek();
    int printstack();
    bool isempty();
};
int stacks::printstack(){
    for(int i=0; i<=top;i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
bool stacks::push(int element){
    if(top>=(MAX-1)){
    cout<<"stack overflow"<<endl;
    //add here 
    return false;
    }
    else{
    a[++top]=element;
    return true;
}
}
int stacks::pop(){
    if(top<0){
    cout<<"stack underflow";  
    }
    else{
    return a[top--];
}
}
int stacks::peek(){
    return a[top];
}
bool stacks::isempty()
{
    return (top<0);
}
class queues{
    //object oriented program
    stacks s1,s2;
    public:
        void enqueue(int element);
        void dequeue();
        void printqueue();
};
void queues::enqueue(int element){
    s1.push(element);
}
void queues::dequeue(){
    if(!s1.isempty()){
    while(!s1.isempty()){
        s2.push(s1.pop());
    }
    }
    else{
        cout<<"queue is empty";
    }
    s2.printstack();
    s2.pop();
    while(!s2.isempty()){
        s1.push(s2.pop());    
    }
}
void queues::printqueue(){
    s1.printstack();
}
int main(){
queues q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.printqueue();
}