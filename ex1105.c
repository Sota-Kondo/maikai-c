/*　演習11-5　*/
#include <stdio.h>
int str_chnum(const char *s,int c){
  int count=0;
  while(*s){
    if(*s++==c){
      count++;
    }
  }
  return count;
}

/*文字列の入力（手続き）*/
void scan_str(char s[]){
  printf("入力 :");
  scanf("%s",s);
  putchar('\n');
}


int main(void){
  char s[128];
  char c;

  puts("英数字で文字を入力");
  scan_str(s);

  puts("探す文字を入力");
  printf("入力 :");
  scanf(" %c",&c);

  printf("%cが現れた回数は%d回\n",c,str_chnum(s,c));

  return 0;
}
