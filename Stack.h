#include<iostream>
#include<stdio.h>

using namespace std;

class Stack
{
public:
    int top,limit;
    int stcar[100000];
    Stack(int x)
    {
        limit=x;
        top=-1;
    }
    void push(int val)
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
    int pop()
    {int val;
        if(top<=-1)
        {
            printf("\nError : Stack underflow");
            return -1;
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
    int peek()
    {
        return stcar[top];
    }
};

