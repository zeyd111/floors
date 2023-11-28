#include <stdio.h>
#include <math.h>

int main()
{

int n,t;

int Arr[20];

int pos;

int max,min,floorx;

scanf("%d %d",&n,&t);

for(int i = 0;i < n;i++)
{
scanf("%d",&Arr[i]);

}

scanf("%d",&pos);

min = Arr[0];

max = Arr[n-1];

floorx = Arr[pos-1];


    return 0;
}
