#include <stdio.h>

void nrzi(int bits[]){
	int i=0;
	for(;i<12;i++)//11010 
		{
			if(bits[i]==1)
			{
				printf("Nega");
				if(bits[i+1]==0)
				{
					printf(" no--");//no
					bits[i+1]=1;
				}
				else
				{
					printf(" inv--");//inv
					bits[i+1]=0;
				}	
				
			}
			if(bits[i]==0)
			{
				printf("pos");
				if(bits[i+1]==1)
				{
					printf(" inv--");//inv
					bits[i+1]=1;
				}
				else
				{
					printf(" no--");//no
					bits[i+1]=0;	
				}
			
			}
		}
}
void low(int bits[]){
	int i=0;
	for(;i<12;i++)//11010 
		{
			if(bits[i]==1)
			{	
				printf("NTP");
				if(bits[i+1]==0)
				{
					printf(" in--");//no
					bits[i+1]=1;
				}
				else
				{
					printf(" no--");//inv
					bits[i+1]=0;
				}	
				
			}
			if(bits[i]==0)
			{
				printf("PTN");
				if(bits[i+1]==1)
				{
					printf(" no--");//inv
					bits[i+1]=1;
				}
				else
				{
					printf(" in--");//no
					bits[i+1]=0;	
				}
			
			}
		}
}
void high(int bits[]){
	int i=0;
	for(;i<12;i++)//11010 
		{
			if(bits[i]==1)
			{
				printf("PTN");
				if(bits[i+1]==0)
				{
					printf(" in--");//no
					bits[i+1]=1;
				}
				else
				{
					printf(" no--");//inv
					bits[i+1]=0;
				}	
				
			}
			if(bits[i]==0)
			{
				printf("NTP");
				if(bits[i+1]==1)
				{
					printf(" no--");//inv
					bits[i+1]=1;
				}
				else
				{
					printf(" in--");//no
					bits[i+1]=0;	
				}
			
			}
		}
}
void man(int bits[]){
	int i=0;
		for(;i<12;i++)
		{
			if(bits[i]==1)
			{
				printf("NTP ");
			}
			if(bits[i]==0)
			{
				printf("PTN ");
			}
		}
}
int main(){
	int bits[100], i=0;
	
	//printf("Enter the number of bits: ");
	//scanf("%d",&n);
	
	for(i=0;i<12;i++){
		printf("Bit %d: ",i+1);
		scanf("%d",&bits[i]);
	}
	//printf("NRZI: ");
	nrzi(bits);
	//printf("\n\nMAN: ");
	//man(bits);
	//printf("\n\nLOW: ");
	//low(bits);
	//printf("\n\nHIGH: ");
	//high(bits);
	return 0;
}
