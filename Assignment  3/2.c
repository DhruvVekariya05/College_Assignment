#include <stdio.h>

int search(int *arr, int ele, int len) {
  for (int i = 0; i < len; i++) {
    if (arr[i] == ele) return i;
  };
  return -1;
}

int main() {
  int len;
  printf("Enter Length of the Arr:");
  scanf("%d", &len);
  printf("Enter Arr:");
  int arr[len];
  for (int i = 0; i < len; i++) scanf("%d", &arr[i]);
  int ele;
  printf("Enter Element to Search: ");
  scanf("%d", &ele);
  int pos = search(arr, ele, len);
  if (pos == -1) {
    printf("Element not found!");
  } else {
    printf("Element found at position %d", pos);
  }
}