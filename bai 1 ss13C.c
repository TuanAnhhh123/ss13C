#include<stdio.h>
#include<string.h>

int main() {
    char inputString[100];

    do {
        printf("MENU\n");
        printf("1. Nhap vao chuoi ki tu\n");
        printf("2. In ra do dai chuoi và noi dung chuoi vua nhap\n");
        printf("3. In ra chuoi dao nguoc\n");
        printf("4. In ra so luong chu cai trong chuoi\n");
        printf("5. In ra so luong chu so trong chuoi\n");
        printf("6. In ra so luong ki tu dac biet trong chuoi\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap chuoi ki tu: ");
                scanf("%s", inputString);
                break;
            case 2:
                printf("Do dai chuoi: %lu\n", strlen(inputString));
                printf("Noi dung chuoi: %s\n", inputString);
                break;
            case 3:
                printf("Chuoi dao nguoc: ");
                for (int i = strlen(inputString) - 1; i >= 0; i--) {
                    printf("%c", inputString[i]);
                }
                printf("\n");
                break;
            case 4:
                {
                    int count = 0;
                    for (int i = 0; i < strlen(inputString); i++) {
                        if ((inputString[i] >= 'a' && inputString[i] <= 'z') || (inputString[i] >= 'A' && inputString[i] <= 'Z')) {
                            count++;
                        }
                    }
                    printf("So luong chu cai trong chuoi: %d\n", count);
                }
                break;
            case 5:
                {
                    int count = 0;
                    for (int i = 0; i < strlen(inputString); i++) {
                        if (inputString[i] >= '0' && inputString[i] <= '9') {
                            count++;
                        }
                    }
                    printf("So luong chu so trong chuoi: %d\n", count);
                }
                break;
            case 6:
                {
                    int count = 0;
                    for (int i = 0; i < strlen(inputString); i++) {
                        if (!((inputString[i] >= 'a' && inputString[i] <= 'z') || (inputString[i] >= 'A' && inputString[i] <= 'Z') || (inputString[i] >= '0' && inputString[i] <= '9'))) {
                            count++;
                        }
                    }
                    printf("So luong ki tu dac biet trong chuoi: %d\n", count);
                }
                break;
            case 7:
                printf("Thoat chuong trinh\n");
                return 0;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (1);

    return 0;
}
