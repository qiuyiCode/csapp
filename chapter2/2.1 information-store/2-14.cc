#include <iostream>
using namespace std;

int main(){
  int x = 0x66,y = 0x39;
  // 前面的输出为位运算结果,后面的输出为逻辑运算结果~
  printf("%d,%d",x&y,x&&y);
  putc('\n',stdout);
  printf("%d,%d",x|y,x||y);
  putc('\n',stdout);
  printf("%d,%d",~x|~y,!x||!y);
  putc('\n',stdout);
  printf("%d,%d",x&!y,x&&~y);
  putc('\n',stdout);

  printf("%d\n",!x);
  return 0;
}