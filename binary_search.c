#include<stdio.h>
int binary_search(int a[],int n,int key)
{
    int s=0;
    int end=n;
    while(s<=end)
    {
        int mid=(s+end)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n,a[n];
    printf("Enter the number of element:");
    scanf("%d",&n);
    printf("Enter the element:");
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&a[i]);  
    }
    int key;
    printf("Enter the key to be search:");
    scanf("%d",&key);
printf("Binary search is %d %d %d",a,n,key);
return 0;
}
