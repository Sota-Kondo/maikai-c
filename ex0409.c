/*　演習4-9　*/

#include <stdio.h>

int main(void)
{
  int no;

  printf("整数を入力してください :");
  scanf("%d", &no);

  while (no>=2)
  {
    printf("+-");

    no-=2;
  }

  if (no%2) printf("+");

  printf("\n");

  return 0;
}