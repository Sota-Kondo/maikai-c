/*　演習4-8　*/

#include <stdio.h>

int main(void)
{
  int no;

  printf("整数を入力してください :");
  scanf("%d", &no);

  if (no>=1)
  {
    while (no-->0) putchar('*');

    printf("\n");
  }

  return 0;
}