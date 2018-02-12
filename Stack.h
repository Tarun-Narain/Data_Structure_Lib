#include<iostream>
#include<stdio.h>

using namespace std;

template <class T>
class Stack
{
public:
    int top,limit;
    T stcar[100000];
    Stack(int x)
    {
        limit=x;
        top=-1;
    }
    void push(T val)
    {
        if(top>=limit)
        {
            printf("\nError : Stack Overflow !");
        }
        else{
            top++;
            stcar[top]=val;
        }
    }
    T pop()
    {T val;
        if(top<=-1)
        {
            printf("\nError : Stack underflow");
            return 0;
        }
        else{
            val=stcar[top];
            top--;
            return val;
        }
    }

    void show()
    {int topx=top;
        printf("\nThe Stack is : ");
        while(topx!=-1)
        {
            printf(" %d",stcar[topx]);
            topx--;
        }
    }
    T peek()
    {
        return stcar[top];
    }
};
