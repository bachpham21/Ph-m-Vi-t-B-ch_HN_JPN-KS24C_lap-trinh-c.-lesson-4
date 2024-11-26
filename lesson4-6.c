#include <stdio.h>
float tinhTien(float soDien) {
    float tien = 0;
    if (soDien <= 50) {
        tien = soDien * 10000; 
    } else if (soDien <= 100) {
        tien = 50 * 10000 + (soDien - 50) * 15000; 
    } else if (soDien <= 150) {
        tien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000; 
    } else if (soDien <= 200) {
        tien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000; 
    } else {
        tien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDien - 200) * 30000; 
    }
    return tien;
}
int main() {
    float chiSoCu, chiSoMoi, soDienTieuThu, tienDien;
    printf("Nhap chi so cu (kWh): ");
    scanf("%f", &chiSoCu);
    printf("Nhap chi so moi (kWh): ");
    scanf("%f", &chiSoMoi);
    soDienTieuThu = chiSoMoi - chiSoCu;
    if (soDienTieuThu < 0) {
        printf("Chi so moi phai lon hon chi so cu!\n");
    } else {
        tienDien = tinhTien(soDienTieuThu);
        printf("So dien tieu thu trong thang: %.2f kWh\n", soDienTieuThu);
        printf("Tien dien phai tra: %.2f VND\n", tienDien);
    }
    return 0;
}
