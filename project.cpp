// project.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
 int x[10];
 int n,i,j,temp;

 printf("input\n");

 for(i=0; i<=9; i++)
  scanf("%d",&x[i]);

 n=9;

 for(i=n-1; i>=0; i--){
  for(j=0; j<=i; j++){
   if(x[j] < x[j+1]){
    temp=x[j];
    x[j]=x[j+1];
    x[j+1]=temp;
   }
  }
 }

 printf("�������� \n");

 for(i=0; i<=9; i++){
 printf("%d\n",x[i]);
 }


 return 0;
}
