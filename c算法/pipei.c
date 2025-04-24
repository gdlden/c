#include<stdio.h>
int strStr(char* haystack, char* needle) {
    for (int i=0; haystack[i] != '\0'; i++) {
        if(haystack[i]==needle[0]) {
            for (int j=0; needle[j] != '\0'; j++) {
                if(haystack[i+j]==needle[j]) {
                    if(needle[j+1] =='\0') {
                        return i;
                    }
                } else {
                    break;
                }
            }
        }
    }
    return -1;
}
int main() {
    char c1[] = {"hello\0"};
    char c2[] = {"ll\0"};
    int res = strStr(c1,c2);
    printf("%d==============================",res);
}