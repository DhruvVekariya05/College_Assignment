#include <stdio.h>
int max(int *arr, int len);
int main() {
  int len;
  printf("Enter Length of the Arr:");
  scanf("%d", &len);
  printf("Enter Arr:");
  int arr[len];
  for (int i = 0; i < len; i++) scanf("%d", &arr[i]);
  int *ptrArr = arr;
  int maxEle = max(ptrArr, len);
  printf("Maximum Element: %d", maxEle);
  return 0;
}
int max(int *arr, int len) {
  int max = *arr;
  for (int i = 0; i < len; i++) {
    if (max < *(arr + i)) {
      max = *(arr + i);
    }
  }
  return max;
}