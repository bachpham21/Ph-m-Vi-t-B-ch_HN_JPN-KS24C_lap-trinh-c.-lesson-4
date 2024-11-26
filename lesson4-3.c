#include <stdio.h>
int main() {
    int num; 
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0) {
        printf("So %d chia het cho ca 3 va 5.\n", num);
    } else if (num % 3 == 0) {
        printf("So %d chia het cho 3.\n", num);
    } else if (num % 5 == 0) {
        printf("So %d chia het cho 5.\n", num);
    } else {
        printf("So %d khong chia het cho 3, 5 hay ca 3 va 5.\n", num);
    }
    return 0; 
}
