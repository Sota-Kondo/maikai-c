/*　演習9-5　*/
#include <stdio.h>

int str_char(const char s[],int c){
  int i;
  for(i=0;s[i]!=0;i++){
    if(s[i]==c)
      return i;
  }
  return -1;
}

int main(void){
  char s[128];
  char c;
  int no;
  
  printf("入力 :");
  scanf(" %c",&c);
  
  printf("入力 :");
  scanf("%s",s);
  
  no=str_char(s,c);
  
  if(no==-1)
    printf("%c は無し。\n",c);
  else
    printf("%c の添え字は%d\n",c,no);
  
  return 0;
}
  
