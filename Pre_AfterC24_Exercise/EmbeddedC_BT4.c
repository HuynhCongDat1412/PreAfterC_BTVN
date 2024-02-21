#include <stdio.h>

int main() {
    int n;
    int is_nhapso = 1;
    int tong = 0;
    double giatritrungbinh;
    //--------------------- tìm n
    while (is_nhapso) {
        printf("Nhap do dai cua mang: ");
        scanf("%d", &n);
        if (n > 5) {
            is_nhapso = 0;
        }
        else {
            printf("Do dai cua mang khong hop le\n");
        }
    }

    int arr[n];

    // Nhập giá trị và in ra
    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri cua arr[%d]: ", i);
        scanf("%d", &arr[i]);
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // // In ra địa chỉ
    // for (int i = 0; i < n; i++) {
    //     void *ptr = &arr[i];
    //     printf("Dia chi cua arr[%d] = %d\n", i, ptr);
    // }
    for (int i = 0; i < n; i++) 
    {
        tong += arr[i];
    }
    if (tong == 0)
    {
        printf("Loi");
    }
    else
    {
        giatritrungbinh = (double) tong/3;
        printf("Gia tri trung binh: %.3lf",giatritrungbinh);
    }
    return 0;
}