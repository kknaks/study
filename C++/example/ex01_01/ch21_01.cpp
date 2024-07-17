#include <iostream>
using namespace std;

#define Max_OP 4

class OpManager
{
private:
    char op_list[Max_OP] = {'+','-','*','/'};
public:
    char GetOpName(int a_idx){
        return op_list[a_idx];
    }
    
    int Add(int a, int b){
        return a+b;
    }
    int Sub(int a, int b){
        return a-b;
    }
    int Mul(int a, int b){
        return a*b;
    }
    int Div(int a, int b){
        return b? a/b: 0;
    }
};

int main(){
    OpManager op;
    int a = 7, b = 2;
    cout << a << "and" << b << "operate result"<<'\n';
    cout << op.GetOpName(0) << " : " ;
    cout << op.Add(a,b) << '\n';
    
    cout << op.GetOpName(1) << " : " ;
    cout << op.Sub(a,b) << '\n';
    
    cout << op.GetOpName(2) << " : " ;
    cout << op.Mul(a,b) << '\n';
    
    cout << op.GetOpName(3) << " : " ;
    cout << op.Div(a,b) << '\n';
    
    return 0;
}

