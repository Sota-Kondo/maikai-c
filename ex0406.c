/*　演習4-6　*/

#include <stdio.h>

int main(void)
{
  int no,i;

  printf("整数を入力して下さい :");
  scanf("%d", &no);

  i=2;

  while (i<=no)
  {
    printf("%d  ",i);

    i+=2;
  }

  printf("\n");

  return 0;
}