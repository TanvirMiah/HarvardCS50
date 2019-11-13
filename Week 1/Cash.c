#include <stdio.h>
#include <cs50.h>

int main(void){
    int number;
    int coins = 0;
    bool complete = false;
    printf("Enter your value: ");
    scanf("%d", &number);
    while (complete == false)
    {
        if (number == 0)
        {
            complete = true;
        }
        else if (number >= 25)
        {
            number -= 25;
            coins += 1;
        }
        else if (number >= 10 && number < 25)
        {
            number -= 10;
            coins += 1;
        }
        else if (number >= 5 && number < 10)
        {
            number -= 5;
            coins += 1;
        }
        else if (number >= 1 && number < 5)
        {
            number -= 1;
            coins += 1;
        }
    }
    printf("You need %d coins\n", coins);
}
