int cbinsearch(int *arr, int size, int value)
{
int l = 0;
int r = size - 1;
int n = 0;
int i = 0;

while(l<=r)
{
int m = (l + r)/2;
if (value > arr[m]) l = m;
if (value < arr[m]) r = m;
if (value == arr[m])
{
n = m;
i++;
break;
}
}
while(value == arr[n])
{
m++;
if (value == arr[m]) i++;
}
while(value == arr[n])
{
m--;
if (value == arr[m]) i++;
}
return i;
}
