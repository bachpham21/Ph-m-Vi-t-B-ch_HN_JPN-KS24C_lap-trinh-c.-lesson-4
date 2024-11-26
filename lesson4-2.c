#include <stdio.h>
int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("So %d la so chan.\n", num);
    } else {
        printf("So %d la so le.\n", num);
    }
    return 0; 
}
