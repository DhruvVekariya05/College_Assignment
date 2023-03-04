#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    if(num1 > num2) printf("%d is greater than %d", num1, num2);
    else printf("%d is greater than %d", num2, num1);
    return 0;
}