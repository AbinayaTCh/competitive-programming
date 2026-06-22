#include<bits/stdc++.h>
using namespace std;
class queuet{
	int arr[4],rear=-1,front=-1;
	public:
		
		
		void enqueue(int x)
		{
			if(rear==3)
			{
				cout<<"Queue Overflow"<<endl;
			
			}
			else if(front==-1)
			{
				front++;
				rear++;
			}
			else
			{
				rear++;
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
				front++;
			}
		}
		void display()
{
    if(front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    for(int i = front; i <= rear; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
};
int main()
{
	queuet q1;
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