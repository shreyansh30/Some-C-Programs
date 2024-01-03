#include <stdio.h>
int main() {

  int i, n;
  int t1 = 0, t2 = 1, t3 = 1;
  int t4 = t1 + t2 + t3;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("%d, %d, %d ,", t1, t2, t3);

  for (i = 4; i <= n; ++i) 
  {
    printf("%d, ", t4);
    t1 = t2;
    t2 = t3;
    t3 = t4;
    t4 = t1 + t2 + t3;
  }

}
