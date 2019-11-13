#include <stdio.h>
#include <cs50.h>

int main(void){
   int array[16], position, c, n, value;
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
    printf("Your number is ");
    for (int i = 0; i < n; i++)
        printf("%d", array[i]);
}