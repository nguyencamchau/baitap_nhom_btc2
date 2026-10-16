#include <stdio.h>

#define MAX 100 // Định nghĩa số lượng phần tử tối đa của mảng

// 1. Hàm nhập dãy số nguyên
void nhapDaySo(int a[], int n) {
    printf("Nhap day so nguyen:\n");

    for (int i = 0; i < n; i++) {
        printf("Nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

// 2. Hàm xuất dãy số nguyên
void xuatDaySo(int a[], int n) ;

// 3. Hàm sắp xếp dãy số tăng dần (Bubble Sort)
void sapXepTangDan(int a[], int n) ;

// 4. Hàm tìm kiếm số x trong mảng (Trả về vị trí đầu tiên tìm thấy, hoặc -1 nếu không thấy)
int timKiemX(int a[], int n, int x) ;

int main() {
    int a[MAX]; // Khai báo mảng số nguyên có tối đa 100 phần tử
    int n, x;

    // Nhập số lượng phần tử thực tế của dãy số
    do {
        printf("Nhập số lượng phần tử của dãy (0 < n <= %d): ", MAX);
        scanf("%d", &n);
        if (n <= 0 || n > MAX) {
            printf("Số lượng phần tử không hợp lệ! Vui lòng nhập lại.\n");
        }
    } while (n <= 0 || n > MAX);

    // Gọi hàm nhập dãy số
    nhapDaySo(a, n);

    // Gọi hàm xuất dãy số vừa nhập
    printf("\nDãy số vừa nhập là: ");
    xuatDaySo(a, n);

    // Gọi hàm tìm kiếm số x
    printf("\nNhập số nguyên x cần tìm: ");
    scanf("%d", &x);
    int viTri = timKiemX(a, n, x);
    if (viTri != -1) {
        printf("Tìm thấy %d tại vị trí chỉ số (index) %d (phần tử thứ %d).\n", x, viTri, viTri + 1);
    } else {
        printf("Không tìm thấy số %d trong dãy.\n", x);
    }

    // Gọi hàm sắp xếp và xuất lại dãy số đã sắp xếp
    sapXepTangDan(a, n);
    printf("\nDãy số sau khi sắp xếp tăng dần là: ");
    xuatDaySo(a, n);

    return 0;
}
