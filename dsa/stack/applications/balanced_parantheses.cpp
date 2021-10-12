#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

bool CheckBalancedParanthesis(char expr[])
{
    stack<char> S;
    int n = strlen(expr);
    for(int i=0; i<n; i++)
    {
        if(expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
        {
            S.push(expr[i]);
        }
        else if(expr[i] == ')')
        {
            if(S.empty() || S.top()!='(')
            {
                return false;
            }
            else
            {
                S.pop();
            }
        }
        else if(expr[i] == ']')
        {
            if(S.empty() || S.top()!='[')
            {
                return false;
            }
            else
            {
                S.pop();
            }
        }
        else if(expr[i] == '}')
        {
            if(S.empty() || S.top()!='{')
            {
                return false;
            }
            else
            {
                S.pop();
            }
        }
    }
    return S.empty() ? true:false;
}

int main()
{
    char expr[51];
    printf("Enter the expression: ");
    gets(expr);
    printf("You entered: %s\n", expr);
    printf("Parantheses are balanced? (1: True, 0: False)\n %d",CheckBalancedParanthesis(expr));
    return 0;
}