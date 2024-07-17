#include <stdio.h>

void show(char *ap_string){
    printf ("%s!!\n",ap_string);
    printf ("%c!!\n",*ap_string);

}

void showchange(const char *ap_string){
    printf ("%s!!\n",ap_string);
}
int main(void){
    char a[9] = "tipsoft";
    char *p;
    p = (char *)a;
    
    printf("%s\n",a);
    printf("%c\n",*p);
    printf("%s\n",p);
    
    show((char*)"tipsoft");
    showchange("tipsoft2!!");
}
