#include <iostream>
#include <cstring>
#include<stack>
using namespace std;

void Reverse(char * C, int n)
{
    stack<char> S;
    for(int i=0; i<n; i++)
    {
        S.push(C[i]);
    }
    for(int i=0; i<n; i++)
    {
        C[i] = S.top();
        S.pop();
    }
}
// class Stack
// {
//     private:
//     char A[51];
//     int top = -1;

//     public:
//     void Push(char c)
//     void Pop();
//     char Top();
//     bool IsEmpty();
// };

int main()
{
    char s[51];
    printf("Enter a string: ");
    gets(s);
    Reverse(s, strlen(s));
    printf("Output: %s", s);
    return 0;
}