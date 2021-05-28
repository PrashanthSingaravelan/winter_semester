#include<stdio.h>
#include<wchar.h>

int main() {
    wchar_t src[30]    = L"Seattle";
    wchar_t dest[30] = L"Texas";
    wchar_t * ptr;

    printf("Before copying ");
    printf("\nSource string : \%ls\n",src);
    printf("Destination string : \%ls\n",dest);

    printf("\nLength of the source string : %i\n",wcslen(src));
    printf("Length of the source string : %i\n",wcslen(dest));

    printf("\nProcess of copying ......\n");
    ptr = wcscpy(dest,src);

    printf("\nAfter copying ");
    printf("\nSource string : \%ls\n",src);
    printf("Destination string : \%ls\n",dest);

    printf("\nLength of the source string : %i\n",wcslen(src));
    printf("Length of the source string : %i\n",wcslen(dest));

    return 0;
}
