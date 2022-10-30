/*
#include <stdio.h>

typedef unsigned char *byte_pointer;

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

void show_float (float x) {
  show_bytes ((byte_pointer) &x, sizeof (float));
}

void show_double (double x) {
  show_bytes ((byte_pointer) &x, sizeof (double));
}

void show_pointer(void *x) {
  show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val){
  int ival = val;
  float fval = (float) ival;
  double dval = (double) ival;
  int *pval = &ival;
  show_int(ival);
  show_float(fval);
  show_pointer(pval);
}

int main(){
  test_show_bytes(12345);
  return 0;
}
*/

/*练习题2.5*/

// #include <stdio.h>

// typedef unsigned char *byte_pointer;

// void show_bytes(byte_pointer start, size_t len) {
//   size_t i = 0;
//   for (i = 0; i < len; i++)
//   printf ("%.2x", start[i]);
//   printf("\n");
// }
// // 数据是固定的,怎么显示取决于你给计算机的指令是什么  
// void show_int(int x) {
//   show_bytes((byte_pointer) &x, sizeof(int));
// }

// int main(){
//   int val = 0x87654321;
//   byte_pointer valp = (byte_pointer) &val;
//   show_bytes(valp,1);
//   show_bytes(valp,2);
//   show_bytes(valp,3);
// }

#include <stdio.h>
#include <cstring>
typedef unsigned char *byte_pointer;
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

void show_float (float x) {
  show_bytes ((byte_pointer) &x, sizeof (float));
}

int main(){
  int ival = 3510593;
  float fval = 3510593.0;
  unsigned char str[6] = "12345";
  show_bytes(str,6);
  show_int(ival);
  show_float(fval);
  const char *s = "abcdef";
  show_bytes((byte_pointer) s,strlen(s));
}

