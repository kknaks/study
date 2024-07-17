#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class MyString
{
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
        m_len = (int)strlen(ap_str) + 1;
        mp_str = new char[m_len];
        if (mp_str != NULL) memcpy(mp_str,ap_str,m_len);
    }
    
    void ShowString(){
        if (mp_str != NULL) printf("%s : %d\n",mp_str,m_len);
    }
    
    void CleanUp(){
        if (mp_str !=NULL){
            delete[] mp_str;
            mp_str = NULL;
        }
    }
};

int main(){
    MyString my_str;
    my_str.CopyDynamicString("hello nak");
    my_str.ShowString();
    
    MyString my_temp("nice to meet you");
    my_temp.ShowString();
    
    MyString *p_str;
    p_str = new MyString;
    p_str -> CopyDynamicString("me too!!");
    p_str -> ShowString();
    delete p_str;
    
    MyString *p_temp = new MyString("how about u");
    p_temp -> ShowString();
    delete p_temp;

}
