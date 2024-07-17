#include <stdio.h>
#include <string.h>

class MyString
{
private:
    int m_len;
    char *mp_str;
public:
    MyString(){
        m_len = 0;
        mp_str = 0;
    }
    
    MyString(const char *ap_str){
        mp_str = NULL;
        CopyDynamicString(ap_str);
    }
    
    ~MyString(){
        CleanUp();
    }
    char *operator=(const char *ap_str){
        CopyDynamicString(ap_str);
        return mp_str;
    }
    
    char *operator+(const char *ap_str){
        AppendString(ap_str);
        return mp_str;
    }
    
    void CopyDynamicString(const char ap_str[]){
        if (ap_str != mp_str){
            CleanUp();
            m_len = (int)strlen(ap_str) + 1;
            mp_str = new char[m_len];
            if (mp_str != NULL) memcpy(mp_str,ap_str,m_len);
        }
    }
    
    void AppendString(const char *ap_str){
        int ap_len = (int)strlen(ap_str)+1;
        m_len--;
        int total_len = m_len + ap_len;
        char *p_str = new char[m_len];
        memcpy(p_str,mp_str,m_len);
        memcpy(p_str+m_len,ap_str,ap_len);
        
        delete mp_str;
        mp_str = p_str;
        m_len = total_len;
    }
    
    void CleanUp(){
        if (mp_str != NULL){
            delete[] mp_str;
            mp_str = NULL;
        }
    }
    
    void ShowStringInfo(){
        if (mp_str != NULL) printf("%s : %d\n",mp_str,m_len);
    }
};

int main(){
    MyString my_str;
    my_str = "hello ";
    my_str.ShowStringInfo();
    my_str.AppendString(" nak");
    my_str.ShowStringInfo();
    my_str = my_str + " nice meet you";
    my_str.ShowStringInfo();
}
