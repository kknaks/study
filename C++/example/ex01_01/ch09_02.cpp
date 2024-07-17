#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class MyString{
private:
    int m_len;
    char* mp_str;
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
    
    int CopyDynamicString(const char a_str[]){
        if (a_str != mp_str){
            CleanUp();
            m_len = (int)strlen(a_str)+1;
            mp_str = new char[m_len];
            if (mp_str != NULL) memcpy(mp_str,a_str,m_len);
        }
        return m_len;
    }
    
    void AppendString(const char *ap_str){
        int len = (int)strlen(ap_str), total_len = m_len + len;
        char *p_str = new char[total_len];
        m_len--;
        memcpy(p_str,mp_str,m_len);
        memcpy(p_str + m_len,ap_str,len+1);
        delete[] mp_str;
        mp_str = p_str;
        m_len = total_len;
    }
    
    int ToInteger(){
        if(mp_str != NULL) return atoi(mp_str);
        return 0;
    }
    
    int ToDouble(){
        if(mp_str != NULL) return atof(mp_str);
        return 0;
    }
    
    void ShowDynamicString(){
        if (mp_str != NULL) printf("%s : %d \n",mp_str,m_len);
    }
    
    void CleanUp(){
        if (mp_str != NULL){
            delete[] mp_str;
            *mp_str = NULL;
        }
    }
    
    char *operator= (const char *ap_str){
//        if (mp_str != NULL){
//            mp_str = NULL;
            CopyDynamicString(ap_str);
  //      }
        return mp_str;
    }
    
    char *operator+ (const char *ap_str){
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
//    char str[32] = "hello, world!!";
//    MyString my_str(str);
//    my_str.ShowDynamicString();
//    
//    char op[32] = "hello, cpp!!";
//    MyString my_str2(op);
//    my_str2.operator=(op);
//    my_str2.ShowDynamicString();
//    
//    char test[32] = "hi~~";
//    MyString temp(test);
//    //temp.operator+("naknak");
//    temp = temp + "naknak";
//    temp.ShowDynamicString();
//    
    
    MyString my_str;
    my_str = "412";
    my_str.ShowDynamicString();
    int num = my_str;
    printf("%d",num);
    return 0;
}
