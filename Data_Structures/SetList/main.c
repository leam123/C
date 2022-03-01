#include <stdio.h>
#include <stdlib.h>
#include "set.h"

int main(){
	
	Set s1, s2;
	Set result;
	int elem, ans, res;
	
	s1 = initialize();
	
	do
    {
        printf("Enter a value for SET 1: ");
        scanf("%d", &elem);
        if(contain(s1,elem)!=0){
        	printf("\nExisting. Enter another value: ");
        	scanf("%d", &elem);
        	if(contain(s1,elem)!=0){
        	printf("\nExisting. Enter another value: ");
        	scanf("%d", &elem);
			}
		}
        s1 = add(s1,elem);
        printf("\nSET 1: ");
        display(s1);
       	
       	printf("\n");
        printf("\nDo you want to continue [1/0] ? ");
        scanf("%d", &ans);
        printf("\n");
    } while (ans==1);
    system("CLS");
    
    s2 = initialize();
    do
    {
        printf("Enter a value for SET 2: ");
        scanf("%d", &elem);
        if(contain(s2,elem)!=0){
        	printf("\nExisting. Enter another value: ");
        	scanf("%d", &elem);
        	if(contain(s2,elem)!=0){
        	printf("\nExisting. Enter another value: ");
        	scanf("%d", &elem);
			}
		}
        s2 = add(s2,elem);
        printf("\nSET 2: ");
        display(s2);
        
        printf("\n");
        printf("\nDo you want to continue [1/0] ? ");
        scanf("%d", &res);
        printf("\n");
    } while (res==1);
    system("CLS");
    
    printf("\nSET 1: ");
	display(s1);
    printf("\nSET 2: ");
    display(s2);
    printf("\n");
    
    result = initialize();
    printf("\nUNION: ");
    getUnion(result,s1,s2);
	printf("\nINTERSECTION: ");
    intersection(result,s1,s2);
    printf("\nDIFFERENCE");
	difference(result,s1,s2);
	printf("\nSYMMETRIC DIFFERENCE: ");
	symmetricdifference(result,s1,s2);
	
	if(subset(s1,s2)==1)
		printf("\nSet 1 is a Subset of Set 2");
	else
		printf("\nSet 1 is not a Subset of Set 2");
		
	if(disjoint(s1,s2)==0)
		printf("\nThe 2 Sets are disjoint");
	else
		printf("\nThe 2 Sets are not disjoint");
		
	if(equal(s1,s2)==1)
		printf("\nSets are equal");
	else
		printf("\nSets are not equal");
	
	return 0;
}
