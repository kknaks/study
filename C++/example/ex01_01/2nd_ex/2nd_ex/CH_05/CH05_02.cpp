#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *CopyDynamicString(char str[]){
    int len = (int)strlen(str)+1;
    char *p_str = (char*)malloc(len);
    if (p_str != NULL) memcpy(p_str,str,len);
    return p_str;
}

void FreeDynamicString(char *ap_str){
    if (ap_str != NULL) free(ap_str);
}

int main(){
    char str[32];
    scanf("%s",str);
    char *p_str = CopyDynamicString(str);
    if (p_str != NULL) {
        printf("%s\n",p_str);
    }
    FreeDynamicString(p_str);
    return 0;
}
