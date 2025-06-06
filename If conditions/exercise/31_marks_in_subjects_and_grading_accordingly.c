#include <stdio.h>

int main (){

  int eng, math , sci, his, com , per;

  printf("Enter your marks in english: ");
  scanf("%d", &eng);
  printf("Enter your marks in maths: ");
  scanf("%d", &math);
  printf("Enter your marks in science: ");
  scanf("%d", &sci);
  printf("Enter your marks in history: ");
  scanf("%d", &his);
  printf("Enter your marks in computer: ");
  scanf("%d", &com);

  per = eng+sci+math+his+com / 5;

  if (per>=90) printf("Grade A+");
    else if (per >=80) printf("Grade a");
    else if (per >=70) printf("Grade B");
    else if (per>=60) printf(" Grade C");
    else if (per >= 40) printf(" Grade D");
    else printf("Fail.");

    return 0;
}