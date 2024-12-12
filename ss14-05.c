#include <stdio.h>

int main() {
    char str[200];
    int wordCount = 0;

    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    // Bi?n ki?m tra tr?ng thái: Ðang ? kho?ng tr?ng hay không
    int isSpace = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            isSpace = 1; // Ðánh d?u ðang ? kho?ng tr?ng
        } else {
            if (isSpace) { // G?p k? t? ð?u tiên c?a m?t t? m?i
                wordCount++;
            }
            isSpace = 0; // Ðang ? trong t?
        }
    }

    printf("So tu co trong chuoi: %d\n", wordCount);

    return 0;
}



