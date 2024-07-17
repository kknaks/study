#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class MyString{
private:
    int m_len;
    char *mp_str;
public:
    MyString(){
        m_len = 0;
        mp_str = NULL;
    }
    
    MyString(const char *ap_str){
        mp_str = NULL;
        CopyDynamicString(ap_str);
    }
    
    ~MyString(){
        CleanUp();
    }
    
    void CopyDynamicString(const char ap_str[]){
        CleanUp();
        m_len = (int)strlen(ap_str) + 1;
        mp_str = (char*)malloc(m_len);
        if (mp_str != NULL) memcpy(mp_str,ap_str,m_len);
    }
    
    void ShowString(){
        printf("%s : %d\n",mp_str,m_len);
    }
    
    void CleanUp(){
        if (mp_str != NULL) {
            free(mp_str);
            mp_str = NULL;
        }
    }
};
    
int main(){
//    char str[32];
//    scanf("%s",str);
//    MyString my_str;
//    my_str.CopyDynamicString(str);
//    my_str.ShowString();
//    my_str.CleanUp();
    MyString temp("nananan");
    temp.ShowString();
    temp.CleanUp();
    return 0;
}
