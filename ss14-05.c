#include <stdio.h>

int main() {
    char str[200];
    int wordCount = 0;

    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    // Bi?n ki?m tra tr?ng th�i: �ang ? kho?ng tr?ng hay kh�ng
    int isSpace = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            isSpace = 1; // ��nh d?u �ang ? kho?ng tr?ng
        } else {
            if (isSpace) { // G?p k? t? �?u ti�n c?a m?t t? m?i
                wordCount++;
            }
            isSpace = 0; // �ang ? trong t?
        }
    }

    printf("So tu co trong chuoi: %d\n", wordCount);

    return 0;
}



