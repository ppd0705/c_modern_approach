#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, check, odd, even;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    even = i2 + i4 + i6 + i8 + i10 + i12;
    odd = i1 + i3 + i5 + i7 + i9 + i11;

    check = 9 - (even * 3 + odd - 1) % 10;

    printf("Check digit: %d\n", check);
}