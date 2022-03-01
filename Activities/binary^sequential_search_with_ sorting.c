#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
void binary_search(int arr[], int *n, int *num);
//void sequential_search(int arr[], int *n, int *num);
void insertion_sort(int arr[], int *n);
void selection_sort(int arr[], int *n);
void bubble_sort(int arr[], int *n);
int main()
{
    int arr[MAXSIZE]={0}, i, n, num=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be search: ");
    scanf("%d",&num);
    //sequential_search(arr,&n,&num);
    insertion_sort(arr,&n);
	selection_sort(arr,&n);
	bubble_sort(arr,&n);
    binary_search(arr,&n,&num);
    return 0;
}

/*void sequential_search(int arr[], int *n, int *num)
{
    int i;
    for(i=0;i<(*n);i++)
    {
        if(arr[i]==(*num))
        {
            printf("%d is found in the array at index %d\n",(*num),i);
            break;
        }
    }
    
    if(i==(*n))
    {
        printf("%d is not found in the array",(*num));
    }
}*/

void insertion_sort(int arr[], int *n)
{
    int i, j, temp;
    
    //Assume that the first array arr[0] is already sorted so start at arr[1], i=1 going to n-1...
    for(i=1;i<(*n);i++)
    {
        temp=arr[i];
        j= i - 1;
        
        while(arr[j]>temp && j>=0)   // for descending order : arr[j] < temp
        {
            arr[j + 1]=arr[j];
            j= j - 1;
        }
        arr[j + 1]=temp;
    }
    
    printf("Sorted array\n");
    for(i=0;i<(*n);i++)
    {
        printf("%3d\n",arr[i]);
    }
}

void selection_sort(int arr[], int *n)
{
    int i, j, temp;
    
    for(i=0;i<(*n);i++)
    {
        for(j=i + 1;j<(*n);j++)
        {
        	if(arr[i]>arr[j])        // for descending order : arr[i] < arr[j]
        	{
        		temp=arr[i];
        		arr[i]=arr[j];
        		arr[j]=temp;
        	}
    	}
    }
    
    printf("Sorted array\n");
    for(i=0;i<(*n);i++)
    {
        printf("%3d\n",arr[i]);
    }
}

void bubble_sort(int arr[], int *n)
{
    int i, j, temp;
    
    for(i=0;i<(*n) - 1;i++)
    {
        for(j=0;j<(*n) - 1; j++)
        {
        	if(arr[j]>arr[j + 1])     // for descending order : arr[j] < arr[j + 1]
        	{
        		temp=arr[j];
        		arr[j]=arr[j + 1];
        		arr[j + 1]=temp;
        	}	
    	}
    }
    
    printf("Sorted array\n");
    for(i=0;i<(*n);i++)
    {
        printf("%3d\n",arr[i]);
    }
}

void binary_search(int arr[], int *n, int *num)
{
    int first=0;
    int last= (*n) - 1;
    int middle=(first + last)/2;
    
    while(first<=last)
    {
        if((*num)>arr[middle])
        {
            first=middle + 1;
        }
        else if(arr[middle]==(*num))
        {
            printf("\n%d is located in the index %d",(*num),middle);
            break;
        }
        else 
        {
            last=middle - 1;
        }
        middle= (first + last)/2;
    }
    if(first>last)
    {
        printf("\n%d is not in the array\n",(*num));
    }

}
