#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s)
{
    char stack[10000];
    int top = -1;

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == '(')
        {
            stack[++top] = ')';
        }
        else if(s[i] == '[')
        {
            stack[++top] = ']';
        }
        else if(s[i] == '{')
        {
            stack[++top] = '}';
        }
        else
        {
            if(top == -1 || stack[top] != s[i])
                return false;

            top--;
        }
    }

    return top == -1;
}

int main()
{
    // Test Case 1
    char s1[] = "()[]{}";

    printf("Test Case 1: %s\n",
           isValid(s1) ? "true" : "false");


    // Test Case 2 - Edge Case
    char s2[] = "([)]";

    printf("Test Case 2: %s\n",
           isValid(s2) ? "true" : "false");

    return 0;
}