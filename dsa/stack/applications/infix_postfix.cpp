#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <cstring>
#include <stack>

using namespace std;

bool HasHigherPrecedence(char op1, char op2)
{
    if((op2 == '*' || op2 == '/') && (op1 =='+' || op1 == '-'))
    {
        return false;
    }
    return true;
}

bool IsNotParantheses(char c)
{
    if(c=='(') return false;
    return true;
}

void InfixToPostfix(char expr[], char res[])
{
    int n = strlen(expr);
    int i_res=0;
    stack<char> S;
    for(int i=0; i<n; i++)
    {
        if(isdigit(expr[i]))
        {
            res[i_res++] = expr[i];
        }
        else if(ispunct(expr[i]))
        {
            while(!S.empty() && 
            IsNotParantheses(expr[i]) && 
            HasHigherPrecedence(S.top(), expr[i]) &&
            IsNotParantheses(S.top()))
            {
                res[i_res++] = S.top();
                S.pop();
                if(!IsNotParantheses(S.top()))
                {
                    S.pop();
                }
            }
            S.push(expr[i]);
        }
    }
    while(!S.empty())
    {
        res[i_res++] = S.top();
        S.pop();
    }
}

int eval(int a, int b, char o)
{
    if(o=='+')
    {
        return a+b;
    }
    else if(o=='-')
    {
        return a-b;
    }
    else if(o=='*')
    {
        return a*b;
    }
    else if(o=='/')
    {
        return a/b;
    }
    return 0;
}

int EvaluatePostfix(char expr[])
{
    int n = strlen(expr);
    stack<int> S;
    for(int i=0; i<n; i++)
    {
        if(isdigit(expr[i]))
        {
            S.push(int(expr[i])%48);
        }
        else if(ispunct(expr[i]))
        {
            int op2 = S.top();
            S.pop();
            int op1 = S.top();
            S.pop();
            S.push(eval(op1, op2, expr[i]));
        }
    }
    return S.top();
}
int main()
{
    char expr[51];
    char res[51];
    printf("Enter an expression (single digit integers, no spaces): ");
    gets(expr);
    printf("You entered: %s\n",expr);
    printf("Converting the expression to postfix expression...\n");
    InfixToPostfix(expr, res);
    printf("Postfix form: %s",res);
    printf("\nEvaluating the above expression...\n%d",EvaluatePostfix(res));
    return 0;
}