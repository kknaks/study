#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[32];
    scanf("%s",str);
    int len = (int)strlen(str)+1;
    char *p = (char*)malloc(len);
    if (p != NULL) {
        memcpy(p,str,len);
        printf("%s\n",p);
        free(p);
    }
    return 0;
}
