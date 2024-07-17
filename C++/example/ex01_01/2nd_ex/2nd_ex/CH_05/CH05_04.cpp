#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int CopyDynamicString(char **ap_str,char str[]){
    int len = (int)strlen(str)+1;
    *ap_str = (char*)malloc(len);
    if (*ap_str != NULL) memcpy(*ap_str,str,len);
    return len;
}
void FreeDynamicString(char *ap_str){
    if (ap_str != NULL) free(ap_str);
}

int main(){
    char str[32];
    scanf("%s",str);
    char *p_str;
    int len = CopyDynamicString(&p_str,str);
    if (p_str != NULL) {
        printf("%s : %d\n",p_str,len);
    }
    FreeDynamicString(p_str);
    return 0;
}
