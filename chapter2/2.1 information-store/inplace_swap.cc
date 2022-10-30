#include <iostream>
using namespace std;

// 这个程序实现swap(x,y)
void inplace_swap(int *x,int *y){
  *x = *x ^ *y;
  *y = *x ^ *y;
  *x = *x ^ *y;
}

void reverse_array(int arr[],int cnt){
  int first,last;
  for(first = 0,last = cnt-1;first < last;first++,last--)
    inplace_swap(&arr[first],&arr[last]);
}

int main(){
  int a,b;
  int arr[6] = {1,2,3,4,5,6};
  reverse_array(arr,6);
  for(int i = 0;i < 6;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}