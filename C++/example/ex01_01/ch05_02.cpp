#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *CopyDynamicString(char a_str[], int *p_len){
    *p_len = strlen(a_str)+1;
    char *p_str = (char*)malloc(*p_len);
    if(p_str != NULL) memcpy(p_str,a_str,*p_len);
    return p_str;
}

void FreeDynamicString(char *ap_str){
    if (NULL != ap_str) free(ap_str);
}

int main(){
    char a[20];
    int len = 0;
    scanf("%s",a);
    char *p_str = CopyDynamicString(a,&len);
    if (NULL != p_str) printf("%s ,%d\n",p_str,--len);
    FreeDynamicString(p_str);
    return 0;
}
