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
        if(mp_str != NULL) memcpy(mp_str,ap_str,m_len);
    }
    
    void AppendString(const char ap_str[]){
        int len = (int)strlen(ap_str), total_len;
        total_len = m_len + len;
        m_len--;
        char *p_str = new char[total_len];
        if (p_str != NULL){
            memcpy(p_str,mp_str,m_len);
            memcpy(p_str+m_len,ap_str,len+1);
        }
        delete[] mp_str;
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
        if (mp_str != NULL) printf("%s : %d'\n",mp_str,m_len);
    }
    
    int ToInteger(){
        if (mp_str != NULL) return atoi(mp_str);
        return 0;
    }
    
    double ToDouble(){
        if (mp_str != NULL) return atof(mp_str);
        return 0;
    }
    
    char *operator=(const char *ap_str){
        CopyDynamicString(ap_str);
        return mp_str;
    }
    
    char *operator+(const char *ap_str){
        AppendString(ap_str);
        return mp_str;
    }
    
    operator int(){
        return ToInteger();
    }
    
    operator double(){
        return ToDouble();
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
    
    MyString my_num;
    my_num = "412";
    int num1 = my_num;
    
    my_num = "3.14";
    double num2 = my_num;
    printf("Integer : %d , Double : %g \n",num1,num2);
}
