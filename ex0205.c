/*　演習2−5　*/

#include <stdio.h>

int main(void)
{
  double x,y,z;

  puts("実数を２つ入力してください");

  printf("実数x :");   scanf("%lf", &x);
  printf("実数y :");   scanf("%lf", &y);

  z=x/y*100;

  printf("xはyの%f％です。\n", z);

  return 0;
}