/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {
  int sub1, sub2;
  float avg;

  printf("Enter Subject 01 :-");
  scanf("%d", &sub1);

  printf("Enter Subject 02 :-");
  scanf("%d", &sub2);

  avg = (sub1 + sub2) / 2.0;
  printf("Average Marks :- %.2f", avg);

  return 0;
}
#include <stdio.h>
int main(void)
{
    int distance, ratePerKm;
    float total;
    
    printf("Enter the distance :- ");
    scanf("%d", &distance);
    
    if (distance <= 30)
    {
    ratePerKm = 50;
    total = distance * 50;
    }
    
    else
    {
    distance -= 30;
    total = 30 * 50 + distance * 40;
    }
    
    printf("Amount :- %.2f", total);
    
}

