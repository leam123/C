#include <stdio.h>
#include <stdlib.h>
#include "set.h"

Set initialize(){
	Set head;
	head = malloc(sizeof(Node));
	head->next=NULL;
	return head->next;
}
void display(Set s){
	while(s!=NULL){
		printf(" %d ",s->data); 
		s = s->next;
	}
}
Set add(Set s, int elem){
	
	Set head = s;
	nodeptr p, newNode;
        
	newNode = malloc(sizeof(Node));
    newNode->data = elem;
    
        if (head == NULL)
        {
        	newNode->next=head;
            head = newNode;
        }
        else
        {
        	p = head;
        	while(p->next!=NULL){
        		p = p->next;
			}
			newNode->next =p->next;
			p->next = newNode;
        }
        
    return head;
}
int contain(Set s, int elem){
	nodeptr p = s;
	while(p != NULL){
		if(elem == p->data){
			return 1;
		}
		p = p->next;
	}
	return 0;
}
void getUnion(Set result, Set s1, Set s2){
	nodeptr temp1 = s1;
	nodeptr temp2 = s2; 
	
	while(temp1!=NULL){
		result = add(result,temp1->data);
		temp1 = temp1->next;
	}
	while(temp2!=NULL){
		if(contain(result,temp2->data)!=0){
			temp2 = temp2->next;
		}
		else{
			result = add(result,temp2->data);
			temp2 = temp2->next;
		}
	}
	
	while(result!=NULL){
		printf(" %d ",result->data); 
		result = result->next;
	}
	
}
void intersection(Set result, Set s1, Set s2){
	nodeptr temp1 = s1;
	nodeptr temp2 = s2; 
	
	while(temp1!=NULL){
		if(contain(temp2,temp1->data)!=0){
			result = add(result,temp1->data);
		}
		temp1 = temp1->next;
	}
	
	while(result!=NULL){
		printf(" %d ",result->data); 
		result = result->next;
	}
	
}
void difference(Set result, Set s1, Set s2){
	nodeptr temp1 = s1;
	nodeptr temp2 = s2; 
	
	while(temp1!=NULL){
		if(contain(temp2,temp1->data)==0){
			result = add(result,temp1->data);		
		}
		temp1 = temp1->next;
	}
	while(result!=NULL){
		printf(" %d ",result->data); 
		result = result->next;
	}
}
void symmetricdifference(Set result, Set s1, Set s2){
	nodeptr temp1 = s1;
	nodeptr temp2 = s2; 
	
	
	while(temp1!=NULL){
		if(contain(temp2,temp1->data)!=0){
			temp1 = temp1->next;
		}
		else{
			result = add(result,temp1->data);
			temp1 = temp1->next;
		}
	}
	while(temp2!=NULL){
		if(contain(temp1,temp2->data)!=0){
			temp2 = temp2->next;
		}
		else{
			result = add(result,temp2->data);
			temp2 = temp2->next;
		}
	}
	
	while(result!=NULL){
		printf(" %d ",result->data); 
		result = result->next;
	}
}
int subset(Set s1, Set s2){
	nodeptr temp1 = s1;
	nodeptr temp2 = s2;
	int flag=1;
	while(temp1!=NULL){
		if(contain(temp2,temp1->data)==0){
			flag=0;
			break;
		}
		temp1 = temp1->next;
	}
	return flag;
}
int disjoint(Set s1, Set s2){
	nodeptr temp1 = s1;
	nodeptr temp2 = s2;
	int flag=1;
	
	while(temp2!=NULL){
		if(contain(temp1,temp2->data)==0){
			flag=0;
			break;
		}
		temp2 = temp2->next;
	}
	return flag;
}
int equal(Set s1, Set s2){
	nodeptr temp1 = s1;
	nodeptr temp2 = s2;
	int flag=1;
	
	while(temp2!=NULL){
		if(contain(temp1,temp2->data)==0){
			flag=0;
			break;
		}
		temp2 = temp2->next;
	}
	return flag;
}
