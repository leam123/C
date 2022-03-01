#include <stdio.h>
#include <stdlib.h>
void insert_element(int arr[], int n);
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
    
    insert_element(arr,n);
    return 0;
}
void insert_element(int arr[], int n)
{
    int i,index, num;
    printf("Enter value to be inserted: ");
    scanf("%d",&num);
    
    printf("Enter the index of the array: ");
    scanf("%d",&index);
    
    for(i=n; i>=index; i--)
    {
        arr[i]=arr[i - 1];
    }
    arr[index - 1]=num;
    n++;
    
    for(i=0;i<n;i++)
    {
        printf("%3d",arr[i]);
    }
}
/* to insert at the start/beginning 

void insert_element(int arr[], int n)
{
    int i,index, num;
    printf("Enter value to be inserted: ");
    scanf("%d",&num);
    
    for(i=n; i>=0; i--)
    {
        arr[i]=arr[i - 1];
    }
    arr[0]=num;
    n++;
    
    for(i=0;i<n;i++)
    {
        printf("%3d",arr[i]);
    }
}*/

/* to insert at the end/last

void insert_element(int arr[], int n)
{
    int i,index, num;
    printf("Enter value to be inserted: ");
    scanf("%d",&num);
    
    for(i=n + 1; i<=0; i--)
    {
        arr[i]=arr[i - 1];
    }
    arr[i - 1]=num;
    n++;
    
    for(i=0;i<n;i++)
    {
        printf("%3d",arr[i]);
    }
}*/
