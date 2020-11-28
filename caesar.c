#include <cs50.h>   //get_string
#include <stdio.h>  //padrao
#include <string.h> //usar string
#include <stdlib.h> //atoi-to int

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int length = strlen(argv[1]);
        for (int i = 0; i < length; i++)
        {
            if (argv[1][i] / 10 > 5)
            {
                return 1;
            }
        }
        int x = atoi(argv[1]);
        x = x % 26;
        string s = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                if (s[i] + x > 122)
                {
                    int y = (s[i] + x) - 122 + 96;
                    printf("%c", y);
                }
                else
                {
                    printf("%c", s[i] + x);
                }
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                if (s[i] + x > 90)
                {
                    int y = (s[i] + x) - 90 + 64;
                    printf("%c", y);
                }
                else
                {
                    printf("%c", s[i] + x);
                }
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
    else
    {
        return 1;
    }
}
