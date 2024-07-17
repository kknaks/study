#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class Mystring{
private:
    int m_len;
    char *mp_str;

public:
    //생성자 호출
    Mystring()
    {
        m_len = 0;
        mp_str = NULL;
    }
    
    Mystring(char *ap_str){
        mp_str = NULL;
        CopyDynamicString(ap_str);
    }
    //파괴자 호출
    ~Mystring(){
        CleanUp();
    }
    
    int CopyDynamicString(char ap_str[]){
        CleanUp();
        m_len = strlen(ap_str)+1;
        mp_str = (char *)malloc(m_len);
        if (mp_str != NULL) memcpy(mp_str,ap_str,m_len);
        return m_len;
    }
    void ShowStringInfo(){
        if (mp_str != NULL) printf("%s : %d\n",mp_str,m_len);
        else printf("Non String ! ");
    }
    
    void CleanUp(){
        if (mp_str != NULL){
            free(mp_str);
            mp_str = NULL;
        }
    }
};

int main(){
    char str[32];
    scanf("%s",str);
    
    Mystring my_str;
    my_str.CopyDynamicString(str);
    my_str.ShowStringInfo();
    
    Mystring temp("hel loworld");
    temp.ShowStringInfo();
    
    return 0;
}
