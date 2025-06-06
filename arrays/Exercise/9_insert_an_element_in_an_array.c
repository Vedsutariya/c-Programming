#include <stdio.h>
int main() {

  int n ,val, arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("Enter where you want to insert: ");
  scanf("%d", &n);

  printf("Enter what you want to insert: ");
  scanf("%d", &val);

  arr1[n-1] = val ;

  for (int i = 0; i < 10; i++) {
    printf("%d ", arr1[i]);
  }



  return 0;
}


