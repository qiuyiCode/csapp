#include <iostream>
using namespace std;
typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
  size_t i = 0;
  for (i = 0; i < len; i++)
  printf ("%.2x", start[i]);
  printf("\n");
}
// 数据是固定的,怎么显示取决于你给计算机的指令是什么  
void show_int(int x) {
  show_bytes((byte_pointer) &x, sizeof(int));
}

int main(){
  short sx = -12345;
  unsigned short usx = sx;
  // 符号扩展
  int x = sx;
  // 零扩展
  unsigned ux = usx;

  printf("sx = %d:\t",sx);
  show_bytes((byte_pointer) &sx,sizeof(short));
  printf("usx = %u:\t",usx);
  show_bytes((byte_pointer) &usx,sizeof(unsigned short));
  printf("x = %d:\t",x);
  show_bytes((byte_pointer) &x,sizeof(int));
  printf("ux = %u:\t",ux);
  show_bytes((byte_pointer) &ux,sizeof(unsigned));
  
  return 0;
}