#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class MyString{
private:
    int m_len;
    char *mp_str;
public:
    void Init(){
        m_len = 0;
        mp_str = NULL;
    }
    
    void CopyDynamicString(char ap_str[]){
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
    char str[32];
    scanf("%s",str);
    
    MyString my_str;
    my_str.Init();
    my_str.CopyDynamicString(str);
    my_str.ShowString();
    my_str.CleanUp();
    return 0;
}
