/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

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
