#include <stdio.h>

// Hàm để xóa phần tử từ một mảng
void deleteElement(int arr[], int *n, int index) {
    int i;
    // Di chuyển tất cả các phần tử sau phần tử cần xóa lên trên
    for ( i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    // Giảm kích thước của mảng đi 1
    (*n)--;
}

int main() {
    int arr[100];
    int n;
    int i;
    // Nhập số lượng phần tử của mảng
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Hiển thị mảng trước khi xóa
    printf("Mang truoc khi xoa:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Nhập chỉ số của phần tử muốn xóa
    int index;
    printf("Nhap chi so cua phan tu muon xoa: ");
    scanf("%d", &index);

    // Kiểm tra xem chỉ số có hợp lệ không
    if (index < 0 || index >= n) {
        printf("Chi so khong hop le.\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }

    // Gọi hàm để xóa phần tử
    deleteElement(arr, &n, index);

    // Hiển thị mảng sau khi xóa
    printf("Mang sau khi xoa:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
