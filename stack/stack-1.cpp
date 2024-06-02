#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();
    cout<<"The top element is : "<<s.top()<<endl;

    if(s.empty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"The size of the stack is : "<<s.size()<<endl;
        cout<<"Stack is not empty";
    }

    return 0;
}