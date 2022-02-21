/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km. */

#include <stdio.h>

int main() 
{
  int dist;
  int amount;

  printf("Enter the distance travelled : ");
  scanf("%d", &dist);

  if(dist<=30)
  {
    amount = dist * 50;
  }
  if(dist>30)
  {
    amount = 30*50 + (dist-30)*40;
  }
  printf("The amount to be paid : %d", amount);
  return 0;
}
