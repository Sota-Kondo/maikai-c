/*　演習9-3　*/
#include <stdio.h>

void null_string(char s[]){
  int i=0;
  
  while(s[i])
    s[i]='\0';
  
}

int main(void){
  char s[128];
  
  printf("入力 :");
  scanf("%s",s);
  
  puts("入力した文字列");
  
  printf("%s\n",s);
  
  puts("変換後");
  
  null_string(s);
  printf("%s\n",s);
  
  return 0;
}
