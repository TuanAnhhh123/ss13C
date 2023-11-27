#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, cout, len;
    int count[100] = {0};
    printf("Nhap vao mot chuoi: ");
    scanf("%s",&str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] == ' ') {
            continue;
        }
        cout = 1;
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                cout++;
                count[j] = 1;
            }
        }
        if (count[i] == 0) {
            printf("%c: %d\n", str[i], cout);
        }
    }
    return 0;
}
