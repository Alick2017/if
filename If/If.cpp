// If.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>;
//using namespace std;

int main(){
    int a,b,c,d,max;
   std::cout<<"请输入三个数字：";
   std::cin>>a>>b>>c;
    max=(d=a>=b?a:b)>=c?d:c;
   std::cout<<"最大值为："<<max<<std::endl;
    return 0;
}

