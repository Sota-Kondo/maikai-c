/*　演習2−1　*/

#include <stdio.h>

int main(void)
{
  int x,y,z;

  puts("整数を２つ入力してください");

  printf("整数x :");   scanf("%d", &x);
  printf("整数y :");   scanf("%d", &y);

  z=x/y*100;

  printf("xはyの%d％です。\n", z);

  return 0;
}