/*　演習9-6　*/
#include <stdio.h>
int str_chum(const char s[],const int c){
  int count=0;
  int i;
  for(i=0;s[i];i++){
    if(s[i]==c){
      count++;
    }
  }
  return count;
}

int main(void) {
  char s[128];
  char c;
  puts("文字列の入力");
  printf("入力 :");
  scanf("%s",s);

  puts("探す文字の入力");
  printf("入力 :");
  scanf(" %c",&c);

  printf("文字列中の%cの数は%d個",c,str_chum(s,c));
  return 0;
}
