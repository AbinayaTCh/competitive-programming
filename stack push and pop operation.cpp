#include<bits/stdc++.h>
using namespace std;
class st{
	private:
		int top;
		int arr[5];
		public:
			st()
			{
				top=-1;
				for(int i=0;i<5;i++){
					arr[i]=0;
				}
			}
		
			
			void push(int x)
			{
				if(top==4)
				cout<<"Stack overflow"<<endl;
				else
				{
					top++;
					arr[top]=x;
				
						}		
			}
			void  pop()
			{
				if(top==-1)
				{
					cout<<"Stack underflow"<<endl;
				
				}
				else
				{
				
					arr[top]=0;
					top--;
					
				}
			}
			void display()
			{
				if(top==-1)
				{
					cout<<"Stack empty";
				}
				else
				{
					for(int i=0;i<=top;i++)
					{
						cout<<arr[i]<<" ";
					}
				}
			}
};
int main()
{
	st a;
	a.push(0);
	a.push(67);
	
	a.push(7);

	a.pop();
	a.display();
	
	
	
}