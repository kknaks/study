#include <stdio.h>
//
////struct ValueList
////{
////    int a, b, c;
////
////    void MultipyValue(ValueList *p_value){
////        ModifyValue(p_value);
////        printf("%d * %d * %d = %d ",a,b,c,a*b*c);
////    }
////    void ModifyValue(ValueList *p_values){
////        
////        if(p_values->a < 0) p_values->a = -p_values->a;
////        if (p_values->b < 0) p_values->b = -p_values->b;
////        if (p_values->c < 0) p_values->c = -p_values->c;
////        
////    }
////};
////
////int main(){
////    ValueList temp;
////    temp = {1,2,3};
////    temp.MultipyValue(&temp);
////}
//
//struct ValueList
//{
//    int a, b, c;
//
//    void MultipyValue(){
//        ModifyValue(this);
//        printf("%d * %d * %d = %d ",a,b,c,a*b*c);
//    }
//    void ModifyValue(ValueList *p_values){
//        
//        if(this->a < 0) this->a = -this->a;
//        if (this->b < 0) this->b = -this->b;
//        if (this->c < 0) this->c = -this->c;
//        
//    }
//};
//
//int main(){
//    ValueList temp;
//    temp = {1,2,3};
//    temp.MultipyValue();
//}
struct ValueList
{
    int a, b, c;

    void MultipyValue(){
        ModifyValue();
        printf("%d * %d * %d = %d ",a,b,c,a*b*c);
    }
    void ModifyValue(){
        
        if (a < 0) a = -a;
        if (b < 0) b = -b;
        if (c < 0) c = -c;
        
    }
};

int main(){
    ValueList temp;
    temp = {1,2,3};
    temp.MultipyValue();
}
