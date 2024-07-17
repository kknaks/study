#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *CopyDynamicString(char str[],int *ap_len){
    *ap_len = (int)strlen(str)+1;
    char *p_str = (char*)malloc(*ap_len);
    if (p_str != NULL) memcpy(p_str,str,*ap_len);
    return p_str;
}

void FreeDynamicString(char *ap_str){
    if (ap_str != NULL) free(ap_str);
}

int main(){
    char str[32];
    scanf("%s",str);
    int len = 0;
    char *p_str = CopyDynamicString(str,&len);
    if (p_str != NULL) {
        printf("%s : %d\n",p_str,len);
    }
    FreeDynamicString(p_str);
    return 0;
}
