#include <stdio.h>
int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("So %d la so duong.\n", num);
    } else if (num < 0) {
        printf("So %d la so am.\n", num);
    } else {
        printf("So %d la so 0.\n", num);
    }
    return 0; 
}
