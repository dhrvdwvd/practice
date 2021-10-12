#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;

int main(void)
{
    // To read a string with whitespaces, gets() from stdio.h is employed.
    // Reading the string from the user:
    int j = 0;
    int is_palindrome=1;
    char phrase[150];
    char phrase_alpha[150];
    printf("Enter the word/phrase: ");
    gets(phrase);
    printf("You entered: %s\n",phrase);

    // Now removing the punctuations, whitespaces, i.e., cleaning:
    for(int i=0; i<strlen(phrase); i++)
    {
        if (isalpha(phrase[i])!=0)
        {
            if(phrase[i]>='A' && phrase[i]<='Z')
            {
                phrase_alpha[j] = phrase[i] + 32;
                j++;
                continue;
            }
            phrase_alpha[j] = phrase[i];
            j++;
        }
    }
    phrase_alpha[j] = '\0' ;

    // Checking whether string is a palindrome.
    for(int i=0; i<=(j-1)/2; i++)
    {
        if(phrase_alpha[i]!=phrase_alpha[j-1-i])
        {
            is_palindrome = 0;
            break;
        }
    }
    cout << "The entered phrase is " << (is_palindrome ? "": "not ") << "a palindrome";
    return 0;
}