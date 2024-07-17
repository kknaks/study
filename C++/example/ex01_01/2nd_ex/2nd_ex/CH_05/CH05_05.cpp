#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct MyString{
    int len;
    char *p_str;
};

int CopyDynamicString(MyString *ap_my_str,char str[]){
    ap_my_str->len = (int)strlen(str)+1;
    ap_my_str->p_str = (char*)malloc(ap_my_str->len);
    if (ap_my_str->p_str != NULL) memcpy(ap_my_str->p_str,str,ap_my_str->len);
    return ap_my_str->len;
}
void FreeDynamicString(char *ap_str){
    if (ap_str != NULL) free(ap_str);
}

int main(){
    char str[32];
    scanf("%s",str);
    
    MyString my_str;
    my_str = {0,NULL};
    
    int len = CopyDynamicString(&my_str,str);
    
    if (my_str.p_str != NULL) {
        printf("%s : %d\n",my_str.p_str,my_str.len);
    }
    FreeDynamicString(my_str.p_str);
    return 0;
}
