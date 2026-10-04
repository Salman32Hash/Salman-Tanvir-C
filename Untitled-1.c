#include<stdio.h>
int main (){
int arr[100]={10,20,30,40,50};
int n=5;
int value =60;
int pos=3;
int i;
for (i=n;i>pos;i--)
{
arr[i]=arr[i-1];
}

arr[pos]=value;
n++;
for (i=0;i<n+1;i++)
{printf("%d\n",arr[i]);}
}

