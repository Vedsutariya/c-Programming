#include <stdio.h>

int main()
{

  float unit, fbill, bill;

  printf(" Enter electricity units consumed:");
  scanf("%f", &unit);

  if (unit <= 50)
  {
    bill = unit * 0.25;
  }

  if (unit <= 150)
  {
    bill = (50 * 0.25) + (unit - 50 * 0.75);
  }

  if (unit <= 250)
  {
    bill = (50 * 0.25) + (100 * 0.75) + ((unit - 150) * 1);
  }

  else
  {
    bill = (50 * 0.25) + (100 * 0.75) + (100 * 1) + (unit - 250 * 1.2);
  }

  fbill = bill + (bill * 0.2);

  printf("Your bill is %f", fbill);
  return 0;
}