#include <stdio.h>
 
int main(void)
{
  int a;
 
  printf("整数を入力してください = ");
  scanf("%d",&a);
 
  if( a % 2 == 0 ){
    printf("%d は偶数です\n", a);
  } else {
    printf("%d は奇数です\n", a);
  }
 
  return 0;
}

