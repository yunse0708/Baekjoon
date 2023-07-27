#include <stdio.h>

int main() {
  int n;
  int arr[101];
  int v;

  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  scanf("%d", &v);

  int res = 0; 
  for(int i = 0; i < n; i++) {
    if(arr[i] == v) 
      res++;
  }

  printf("%d", res);
}