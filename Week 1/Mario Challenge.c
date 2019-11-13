#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    int r;
    int p = 0;
    printf("Enter the number of rows you would like: ");
    scanf("%d", &h);
    if(h >= 1 && h <= 8)
    {
        for(int i = 0; i < h; i++)
        {
            p = h - i - 1;
            r = h - p;
            for (int j = 0; j < p; j++)
            {
                printf("%s", " ");
            }
            for (int k = 0; k < r; k++)
            {
                printf("%s", "#");
            }
            for(int l = 0; l < 2; l++)
            {
                printf("%s", " ");
            }
            for (int m = 0; m < r; m++)
            {
                printf("%s", "#");
            }
            for (int n = 0; n < p; n++)
            {
                printf("%s", " ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Enter the number of rows you would like: ");
        scanf("%d", &h);
    }  
}