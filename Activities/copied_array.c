#include <stdio.h>
#include <stdlib.h>
void copied_array(int arr[], int arr2[], int n);
int main()
{
    int i, n, arr[100], arr2[100];
    
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    copied_array(arr,arr2,n);
    return 0;
}
void copied_array(int arr[], int arr2[], int n)
{ 
    int i;
    printf("Inputted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%3d",arr[i]);
    }
    
    printf("\n");
    printf("Copied Array:\n");
    for(i=0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    
    for(i=0;i<n;i++)
    {
        printf("%3d",arr2[i]);
    }
}
