#include <iostream>
using namespace std;

#define Max_OP 4

class OpManager
{
private:
    char op_list[Max_OP] = {'+','-','*','/'};
    int (OpManager::*mp_func_list[Max_OP])(int,int);
    
public:
    OpManager(){
        mp_func_list[0] = &OpManager::Add;
        mp_func_list[1] = &OpManager::Sub;
        mp_func_list[2] = &OpManager::Mul;
        mp_func_list[3] = &OpManager::Div;
    }
    
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
    
    int ExecFunc(int a_idx, int a_num, int b_num){
        return (this->*mp_func_list[a_idx])(a_num,b_num);
    }
    int (OpManager::**GetFuncList())(int,int){
        return mp_func_list;
    }
};

int main(){
    OpManager op;
    int a = 7, b = 2;
    cout << a << "and" << b << "operate result"<<'\n';
    for (int i = 0; i < Max_OP; i++){
        cout << a << op.GetOpName(i) << b << "=" ;
        cout << op.ExecFunc(i, a, b) << '\n';
    }
    cout << "---" << endl;
    
    for (int i = 0; i < Max_OP; i++){
        cout << a << op.GetOpName(i) << b << "=" ;
        cout << (op.**(op.GetFuncList()+i))(a,b) << '\n';
    }
    
    return 0;
}

