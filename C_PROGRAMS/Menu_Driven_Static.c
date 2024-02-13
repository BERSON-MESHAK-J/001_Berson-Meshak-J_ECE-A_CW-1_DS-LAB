#include<stdio.h>
void search(int arr[],int *ptr_n)
{
    int a,flag = 0;
    printf("enter the number you want to search : ");
    scanf("%d",&a);
    for(int i = 0;i<*ptr_n;i++)
    {
        if(arr[i] == a){
        flag = 1;
        break;
        }
    }
    if(flag == 1)
    printf("the element is present.");
    else
    printf("the element is not present.");
}
void reverse(int arr[],int *ptr_n)
{
    for(int i = *ptr_n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
void update(int arr[],int *ptr_n)
{
     for(int i =0;i<*ptr_n;i++)
           {
                if(i%2 == 0)
                {
                    arr[i] *= 2;
                }
                else
                {
                    arr[i] += 5;
                }
           }
           for(int i = 0;i<*ptr_n;i++)
           {
                printf("%d ",arr[i]);
           }
}
void insertion(int arr[],int *ptr_n)
{
    int k;  
    printf("enter the position at which you want to enter a number : ");
    scanf(" %d",&k);
    for(int i = *ptr_n; i >= k; i--)
    {
        arr[i] = arr[i-1];
    }
    printf("enter the element you want to enter ");
    scanf("%d",&arr[k-1]);
    (*ptr_n)++;
    for(int i = 0;i<*ptr_n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void delete(int arr[],int *ptr_n)
{
    int l;
    printf("enter the position at which you want to delete the element : ");
    scanf("%d",&l);
    for(int i = l-1;i<*ptr_n;i++)
    {
        arr[i] = arr[i+1];
    }
    (*ptr_n)--;
    for(int i = 0;i<*ptr_n-1;i++)
    {
        printf("%d ",arr[i]);
    }

}
int main()
{
    int n,m;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n],brr[n];
    for(int i =0;i<n;i++)
    {
        printf("enter the %d element of array : ",i+1);
        scanf(" %d",&arr[i]);
        brr[i] = arr[i];
    }
    do
    {  
      printf("\nmenu\n");
      printf("1.search\n");
      printf("2.string reversal\n");
      printf("3.update\n");
      printf("4.insertion\n");
      printf("5.deletion\n");
      printf("0.exit\n");
      printf("enter your option : ");
      scanf("%d",&m);

      switch(m)
      {
        case 1:search(arr,&n);
               break;
        case 2:reverse(arr,&n);
               break;
        case 3:for(int i=0;i<n;i++)
               {
                    arr[i] = brr[i];
               }   
              update(arr,&n);
              break;
        case 4:for(int i=0;i<n;i++)
                {
                    arr[i] = brr[i];
                }   
               insertion(arr,&n);
               break;
        case 5:for(int i=0;i<n;i++)
                {
                    arr[i] = brr[i];
                }   
               delete(arr,&n);
               break;
        default:printf("wrong number,run the program again");
                break;
       }  
    } while (m!=0);
    return 0;
}
