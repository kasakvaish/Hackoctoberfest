#include<stdio.h>
#include<stdio.h>
int main()
{
int a[]={10,20,4};
int i;
int lar=a[0];
for(i=0;i<3;i++)
{
if(a[i]>lar){

lar=a[i];
}

}
printf("%d is the largest element in the array",lar);
return 0;
}
