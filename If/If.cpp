// If.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>;
//using namespace std;

int main(){
    int a,b,c,d,max;
   std::cout<<"�������������֣�";
   std::cin>>a>>b>>c;
    max=(d=a>=b?a:b)>=c?d:c;
   std::cout<<"���ֵΪ��"<<max<<std::endl;
    return 0;
}

