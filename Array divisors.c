#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N ;
scanf ("%d",&N);
   int  ar[N];
int count2=0,count3=0;
for (int i =0;i<N;i++){
scanf ("%d",&ar[i]);
if (ar[i]%2==0){
    count2++;
}
else if ( ar[i]%3==0){
    count3++;
}

}
printf("%d %d\n",count2,count3);
    return 0;
}