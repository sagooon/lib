#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int i, len, temp=0;
    int flag = 0;
    printf("Input a string: ");
    scanf("%s", str);
    len = strlen(str);
    len--;

    for (i=0; i<len; i++)
    {
        if (str[i] != str[len-i])
        {
            temp = 1;
            break;
        }
    }

    if (temp==0)
    {
        printf("A palindrome.\n");
    }

    else
    {
        printf("Not a palindrome.\n");
    }
}
