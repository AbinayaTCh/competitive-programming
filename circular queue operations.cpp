#include<bits/stdc++.h>
using namespace std;
class cqueue{
    int arr[4],rear=-1,front=-1;
    public:

    void enqueue(int x)
    {
        if((rear+1)%4==front)
        {
            cout<<"Queue Overflow"<<endl;
            return;
        }
        else if(front==-1)
        {
            front++;
            rear++;
        }
        else
        {
            rear=(rear+1)%4;
        }
        arr[rear]=x;
    }

    void dequeue()
    {
        if(rear==-1 && front==-1)
        {
            cout<<"Queue Underflow"<<endl;
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%4;
        }
    }

    void display()
    {
        if(front==-1&& rear==-1)
        {
            cout<<"circular Queue is empty"<<endl;
            return;
        }

        int i=front;
        while(i!=rear)
        {
        	cout<<arr[i]<<" ";
            
                
            i=(i+1)%4;
        }
        
        cout<<arr[rear];
    }
};

int main()
{
    cqueue q1;
    q1.enqueue(2);
    q1.enqueue(3);
    q1.display();
    q1.dequeue();
    q1.enqueue(5);
    q1.enqueue(1);
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.display();
} 