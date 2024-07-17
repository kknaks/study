#include <stdio.h>

namespace Gil{
int g_data;
int CheckData(){
    if (g_data<0) g_data = 0;
    return g_data;
}
}

namespace Su {
int g_data ;
int CheckData(){
    if(g_data < 0) g_data = -g_data;
    return g_data;
}
}

using namespace Gil;
using namespace Su;
int main(){
    Gil::g_data = -5;
    Su::g_data = -5;
    printf("Gil : %d ,Su: %d\n",Gil::g_data,Su::g_data);
    printf("Gil : %d , Su: %d\n ",Gil::CheckData(),Su::CheckData());
    
    return 0;
}
