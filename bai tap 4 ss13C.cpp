#include<stdio.h>
#include<string.h>

void inChuoiDaiNhat(char* str) {
    int size = strlen(str);
    int i, j, k;
    int maxDoDai = 0;
    int doDaiHienTai;
    int viTriBatDau = 0;
    for (i = 0; i < size; i++) {
        int appeared[256] = { 0 };
        doDaiHienTai = 0;
        for (j = i; j < size; j++) {
            if (appeared[str[j]] == 0) {
                appeared[str[j]] = 1;
                doDaiHienTai++;
            }
            else {
                break;
            }
        }
        if (doDaiHienTai > maxDoDai) {
            maxDoDai = doDaiHienTai;
            viTriBatDau = i;
        }
    }
    printf("Chuoi phan biet co do dai lon nhat la %d: ", maxDoDai);
    for (k = viTriBatDau; k < viTriBatDau + maxDoDai; k++) {
        printf("%c", str[k]);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    inChuoiDaiNhat(str);
    return 0;
}
