#include<stdio.h>
int main ()
{
int books [3];
int max, min,i ;
for (int i=0;i<3;i++)
{
    printf ("Books Borrowed on day %d : ", i+1);
    scanf ("%d",&books[i]);
    
}
max=min=books[0];

for (i=1;i<3;i++)

{
    if (books[i]>max)
    max=books[i];
    if (books[i]<min)
    min=books[i];
}
printf("Maximum Books Borrowed : %d\n",max);
printf ("Minimum Books Borrowed : %d\n",min);

    return 0;
}