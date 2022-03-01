#include <stdio.h>
#include <stdlib.h>
void even_odd(int arr[], int arr2[], int arr3[], int n);
int main()
{
    int i, n, arr[100],arr2[100], arr3[100];
    
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    even_odd(arr,arr2,arr3,n);
    return 0;
}   
void even_odd(int arr[], int arr2[], int arr3[], int n)
{
    int i, j=0, k=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            arr2[j]=arr[i];
            j++;
        }
        else
        {
            arr3[k]=arr[i];
            k++;
        }
    }
    
    printf("Even numbers in the array are:\n");
    for(i=0;i<j;i++)
    {
        printf("%3d",arr2[i]);
    }
    
    printf("\n");
    
    printf("Odd numbers in the array are:\n");
    for(i=0;i<k;i++)
    {
        printf("%3d",arr3[i]);
    }
}
