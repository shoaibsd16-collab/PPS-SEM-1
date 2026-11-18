
#include<stdio.h>
void main()
{
    int A[100],n,key,i;

    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the element to search");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(A[i]==key)
        {
            printf("Element found at position %d",i+1);

        }
    }
    printf("Element not found");
}

