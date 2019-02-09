#include<stdio.h>

int main()
{

int i,num,n,comp=1,new,count=0;

scanf("%d",&n);

num=8*sizeof(int);
for(i=0;i<num;i++)
{
 new=comp & n;
 if(new==1)
    count++;
 n=n >> 1; 
}

printf("%d",count);

}
