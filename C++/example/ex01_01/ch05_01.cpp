#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char a[20];
    scanf("%s",a);
    int len = strlen(a)+1;
    char *p_str = (char*)malloc(len);
    
    if(p_str != NULL){
        memcpy(p_str,a,len);
        printf("%s\n",p_str);
        free(p_str);
    }
    
    
    return 0;
}
