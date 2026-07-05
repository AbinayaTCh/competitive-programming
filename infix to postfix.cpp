#include<bits/stdc++.h>

using namespace std;

int precedence(char c)
{
    if(c=='+' || c=='-')
        return -1;
    else if(c=='*' || c=='/')
        return 0;
    else if(c=='^')
        return 1;
   

   
}

int main()
{
    string infix;
    cin >> infix;
  stack<char> s;
    string postfix;
   for(int i=0;i<infix.length();i++)
    {
        if((infix[i]>='a' && infix[i]<='z') ||(infix[i]>='A' && infix[i]<='Z'))
        {
            postfix += infix[i];
        }
        else if(infix[i]=='(')
        {
            s.push(infix[i]);
        }
        else if(infix[i]==')')
        {
            while( s.top()!='(')
            {
                postfix += s.top();
                s.pop();
            }

            if(s.top()=='(')
                s.pop();
        }
        else
        {
            if( s.empty()==1||s.top()=='(')
            {
                s.push(infix[i]);
            }
            else
            {
                while(s.empty()==0 &&s.top()!='(' &&precedence(infix[i]) <= precedence(s.top()))
                {
                    postfix += s.top();
                    s.pop();
                }

                s.push(infix[i]);
            }
        }
    }

    while(s.empty()==0)
    {
        postfix += s.top();
        s.pop();
    }

    cout << postfix << endl;
}