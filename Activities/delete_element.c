#include <stdio.h>
#include <stdlib.h>
void delete_element(int arr[], int n);
int main()
{
    int i, n, arr[100], index, num;
    
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    delete_element(arr,n);
    return 0;
}
void delete_element(int arr[], int n)
{
    int i,index;
    printf("Enter the index to be deleted: ");
    scanf("%d",&index);
    
    for(i=index; i<n - 1; i++)
    {
        arr[i]=arr[i + 1];
    }
    n--;
    
    for(i=0;i<n;i++)
    {
        printf("%3d",arr[i]);
    }
}
/* to delete a specified number and not the index

void delete_element(int arr[], int n)
{
    int i,item;
    printf("Enter the item to be deleted: ");
    scanf("%d",&item);
    
    for(i=item - 1; i<n - 1; i++)
    {
        arr[i]=arr[i + 1];
    }
    n--;
}*/

/* to delete the first number

void delete_element(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        arr[i]=arr[i + 1];
    }
    n--;
}*/

/* to delete the last number

void delete_element(int arr[], int n)
{
    int i;
    for(i=0; i>n; i++)
    {
        arr[i]=arr[i + 1];
    }
    n--;
}*/
