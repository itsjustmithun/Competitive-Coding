/* C Program to check if two arrays are equal or not */
#include<stdio.h>

int sort(int arr[], int n)
{
int i,j;
for (i = 0; i < n-1; i++)
{
for (j = 0; j < n-i-1; j++)
{
if (arr[j] > arr[j+1])
{
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
}

int arrays_equal(int arr1[], int arr2[], int n, int m)
{
sort(arr1,n);
sort(arr2,m);
int i;
for(i = 0; i < n; i++)
{
if(arr1[i] != arr2[i])
{
return 0;
}
}
}

int main()
{
int n, m;
scanf(“%d”,&n);
scanf(“%d”,&m);
int arr1[n];
int arr2[m];
int i;
for(i = 0; i < n; i++)
{
scanf(“%d”,&arr1[i]);
}
for(i = 0; i < m; i++)
{
scanf(“%d”,&arr2[i]);
}
if(arrays_equal(arr1, arr2, n, m) == 0)
{
printf(“Not same”);
}
else
printf(“Same”);

return 0;
}

// Solution to the problem statement, using C pointers
#include<stdio.h>
#include<stdlib.h>
int same(int size1, int*array1, int size2, int*array2);
int main()
{

int *a,*b,n,p,i,c=0,d=0,e,f;
scanf(“%d%d”,&n,&p);
a=(int*)malloc(n*sizeof(int));
b=(int*)malloc(n*sizeof(int));
for(i=1;i<=n;i++)
{
scanf(“%d”,&a[i]);
}
for(i=1;i<=p;i++)
{
scanf(“%d”,&b[i]);
}
for(i=1;i<=n;i++)
{
c=c+i;
c=e;
}
for(i=1;i<=p;i++)
{
d=d+i;
d=f;
}
if (e==f)
{
printf(“Same”);
}
else
{
printf(“Not Same”);
}
return 0;
}
