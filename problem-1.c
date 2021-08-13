#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n];
int mn=1000001,id,i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(abs(a[i])<mn)
{
mn=abs(a[i]);
id=i;
}}
int start=id-1,end=id+1;
int op[n];
int k=1;
op[0]=a[id];
while(start>=0&&end<=n-1)
{
if(abs(a[start])==abs(a[end]))
{
op[k++]=a[start];
op[k++]=a[end];
start--;
end++;

}
else
if(abs(a[start])>abs(a[end]))
{
op[k++]=a[end];
end++;
}
else
if(a[start]<abs(a[end]))
{
op[k++]=a[start];
start--;
}}

while(start>=0)
{
op[k++]=a[start];
start--;
}
while(end<=n-1)
{

    op[k++]=a[end];
    end++;
}
for(i=0;i<n;i++)
{
printf(" %d ",op[i]);
}

}
