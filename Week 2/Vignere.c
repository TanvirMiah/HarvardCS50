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

    char plaintext[100];
    printf("plaintext: ");
    scanf("%s", plaintext);
    int n = strlen(plaintext);
    int m = strlen(k);
    char encrypt[n];
    int key[m];
    int pos = 0;

    for (int j = 0; j < m; j++)
    {
        key[j] = key[j] - 65;
    }

    for (int i = 0; i < n; i++)
    {
        if (pos > m-1)
        {
            pos = 0;
        }

        if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            if ((plaintext[i] + key[pos]) < 91)
            {
                encrypt[i] = plaintext[i] + key[pos];
                pos += 1;
            }
            else if ((plaintext[i] + k) > 90) 
            {
                encrypt[i] = (plaintext[i] + k) - 26;
                pos += 1;
                
            }
        }
        else if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            if ((plaintext[i] + key[pos]) < 123)
            {
                encrypt[i] = plaintext[i] + key[pos];
                pos += 1;
            } 
            else if ((plaintext[i] + key[pos]) > 122)
            {
                encrypt[i] = (plaintext[i] + key[pos]) - 26;
                pos += 1;
            }
        }
        else 
        {
            encrypt[i] = (plaintext[i]);
            pos += 1;
        }
    }

    printf("encrypted: %s\n", encrypt);
}

/*
Pseudo Code: 
Start the program and write your key
Enter the plaintext
Turn the key into integers
Map the integers to 0-25 for A-Z
Run through the plaintext letter by letter and add the key
Print encrypted message
*/