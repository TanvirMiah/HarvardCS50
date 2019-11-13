#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // check if there is only 1 argument
    if (argc != 2)
    {
        printf("Invalid input\n");
        return 1;
    }

    int k = atoi(argv[1]);

    // check that the key is larger than 0
    if (k < 1 || k > 25)
    {
        printf("Invalid key\n");
        return 1;
    }
    char plaintext[100];
    printf("plaintext: ");
    scanf("%s", plaintext);
    int n = strlen(plaintext);
    char encrypt[n];
    for (int i = 0; i < n; i++)
    {
        if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            if ((plaintext[i] + k) < 91)
            {
                encrypt[i] = plaintext[i] + k;
            }
            else if ((plaintext[i] + k) > 90) 
            {
                encrypt[i] = (plaintext[i] + k) - 26;
                
            }
        }
        else if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            if ((plaintext[i] + k) < 123)
            {
                encrypt[i] = plaintext[i] + k;
            } 
            else if ((plaintext[i] + k) > 122)
            {
                encrypt[i] = (plaintext[i] + k) - 26;
            }
        }
        else 
        {
            encrypt[i] = (plaintext[i]);
        }
    }

    printf("encrypted: %s\n", encrypt);
}
