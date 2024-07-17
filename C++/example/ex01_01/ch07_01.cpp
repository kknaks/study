#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class MyString{
private:
    int m_len;
    char *mp_string;
    
public:
    MyString(){
        m_len = 0;
        mp_string = NULL;
    }
    
    MyString(const char* ap_str){
        mp_string = NULL;
        CopyDynamicString(ap_str);
    }
    ~MyString(){
        CleanUp();
    }
    
    int CopyDynamicString(const char ap_str[]){
        
        CleanUp();
        m_len = strlen(ap_str) + 1;
        mp_string = new char[m_len]; // new 로 전환 <- mp_string = (char *)malloc(m_len);
        if (mp_string != NULL) memcpy(mp_string,ap_str,m_len);
        return m_len;
    }
    
    void ShowStringInfo(){
        if (mp_string != NULL) printf("%s : %d\n",mp_string,m_len);
        else printf("none string!");
    }
    
    void CleanUp(){
        if(mp_string != NULL){
            delete[] mp_string; //delete로 전환 <-free(mp_string);
            mp_string = NULL;
        }
    }
};

int main(){
    char str[32];
    scanf("%s",str);
    MyString my_str(str);
    my_str.ShowStringInfo();
    
    MyString *p = new MyString;
    p->CopyDynamicString("hello world");
    p->ShowStringInfo();
    delete p;
    
    MyString *p_temp = new MyString("hello nak");
    p_temp->ShowStringInfo();
    delete p_temp;
    
    return 0;
}
