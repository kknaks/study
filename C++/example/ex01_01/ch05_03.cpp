#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int CopyDynamicString(char **ap_dest_str, char ap_str[]){
    int len = strlen(ap_str)+1;
    *ap_dest_str = (char *)malloc(len);
    if (*ap_dest_str != NULL) memcpy(*ap_dest_str,ap_str,len);
    return len;
}
void FreeDynamicString(char *ap_dest_str){
    if(ap_dest_str != NULL) free(ap_dest_str);
}

int main(){
    char str[30];
    scanf("%s",str);
    
    char *p = NULL;
    int len = CopyDynamicString(&p,str);
    printf("%s : %d\n",p,len-1);
    FreeDynamicString(p);
    return 0;
}
