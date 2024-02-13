#include<stdio.h>
int search(int arr[],int n,int a)
{
    int mid = 0,l = 0;
    for(;l<=n-1;mid = (l+n-1)/2)
    {
        if(arr[mid] == a)
        {
            return mid;
        }
        else if(arr[mid] < a)
        {
            l = mid +1;
        }
        else
        {
            n = mid -1;
        }
    }
    return 1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,22,34,67,90,97};
    int n = sizeof(arr)/sizeof(arr[0]);
    int a = 1;

    int position = search(arr,n,a);

    if(position == 1)
    {
        printf("The element is not present.");
    }
    else
    {
        printf("The element is present at %d this position.",position+1);
    }
}