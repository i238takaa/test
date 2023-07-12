
#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d",&n);
  
  if(( n & 1) == 0 ){//ビット演算子は、"=="よりも優先順位が低いので、"()"をつける必要がある
    printf("%d は偶数です\n,%d", n,n&1);
  }
  return 0;
}
