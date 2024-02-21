#include <stdio.h>

int main() {
    int n;
    int is_nhapso = 1;

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

   
    int max = arr[0];
    int min = arr[0];
        for (int i=0; i<n;i++) 
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
            if (min > arr[i])
            {
                min = arr[i];
            }
        }
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri be nhat: %d\n", min);
        return 0;
}