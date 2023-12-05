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

int res;

if(floorx + t >= max || floorx - t <= min)
{
res = max - min;
}else
{
    if(max - floorx <= floorx - min)
    {
        res = (max - floorx) + (max - min);
    }else
    {
        res + (floorx - min) + (max - min);   
    
    }
}
printf("%d",res);


    return 0;
}
