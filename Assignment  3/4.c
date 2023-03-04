#include <stdio.h>
void reverse(int *arr, int len) {
  for (int i = 0; i < len / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[len - i - 1];
    arr[len - i - 1] = temp;
  }
}
int main() {
  int len;
  printf("Enter Length of the Arr:");
  scanf("%d", &len);
  printf("Enter Arr:");
  int arr[len];
  for (int i = 0; i < len; i++) scanf("%d", &arr[i]);
  reverse(arr, len);
  printf("Reversed Arr: ");
  for (int i = 0; i < len; i++) printf("%d ", arr[i]);
  return 0;
}