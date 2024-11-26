#include <stdio.h>
int main() {
    int month; 
    int days;  
    printf("Nhap vao so thang (1-12): ");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31; 
        printf("Thang %d co 31 ngay.\n", month);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30; 
        printf("Thang %d co 30 ngay.\n", month);
    } else if (month == 2) {
        days = 28;
        printf("Thang 2 co 28 ngay.\n");
    } else {
       
        printf("Thang %d khong hop le.\n", month);
    }
    return 0;
}
