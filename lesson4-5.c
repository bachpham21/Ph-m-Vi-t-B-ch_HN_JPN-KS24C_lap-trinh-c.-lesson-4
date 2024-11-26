#include <stdio.h>
int main() {
    int num1, num2, num3; 
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    printf("Nhap so thu ba: ");
    scanf("%d", &num3);
    if ((num3 > num2 && num3 < num1) || (num3 < num2 && num3 > num1)) {
        printf("So thu ba %d nam trong khoang giua so thu hai %d va so thu nhat %d.\n", num3, num2, num1);
    } else {
        printf("So thu ba %d KHONG nam trong khoang giua so thu hai %d va so thu nhat %d.\n", num3, num2, num1);
    }
    return 0;
}
