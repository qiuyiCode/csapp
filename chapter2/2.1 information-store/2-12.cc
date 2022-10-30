#include <iostream>
using namespace std;

int main(){
  // 写出变量x的C语言表达式,代码应该对任何字长w>=8都能工作

  // A.x的最低有效字节,其他位置均置为0
  unsigned long long x = 0x87654321;
  int x1 = x & 0xFF;

  // B.除了x的最低有效字节外,其他的位都取补,最低有效字节保持不变.
  // 思路:先按位取反,最后将最后一个字节单独取反.
  int x2 = (~x) ^ 0xFF;
  int x4 = ~(x^0xFF);

  // C.x的最低有效字节设置成全1,其他字节都保持不变
  int x3 = x | 0xFF;

  printf("%x,%x,%x,%x",x1,x2,x3,x4);
  putchar('\n');
  return 0;
}