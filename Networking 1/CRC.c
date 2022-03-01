#include <stdio.h>
#include <stdlib.h>

int senderSite(int dataword[]);
void receiverSite(int rem[],int dataword[]);

int main(){
	int dataword[10];
	int i;
	
	printf("Enter Datawords: ");
	for(i=0;i<4;i++){
		scanf("%d", &dataword[i]);
	}

	receiverSite(senderSite(dataword),dataword);	
	return 0;
}

int senderSite(int dataword[]){
	int i,j,k,a;
	int rem[3], q[4];
	int divisor[] = {1,0,1,1};
	
	for(i=4;i<7;i++){
		dataword[i] = 0;
	}
	
	for(i=0;i<7;i++){
		k=i;
		if(dataword[i]==1){
			for(j=0;j<4;j++){
				if(dataword[k]==divisor[j]){
					dataword[k] = 0;
					rem[j] = 0;
				}
				else{
					dataword[k] = 1;
					rem[j] = 1;	
				}
				k += 1;
			}
			q[i] = 1;
		}
		else{
			q[i] = 0;
		}
	}
	printf("Quotient: ");
	for(i=0;i<4;i++){
		printf("%d", q[i]);
	}
	printf("\nRemainder: ");
	for(i=0;i<3;i++){
		printf("%d", rem[i]);
	}
	
	return rem;
}

void receiverSite(int rem[], int dataword[]){
	int i,j=0,k,a;
	int r[3],quo[4];
	int divisor[] = {1,0,1,1};
	
	dataword[4] = rem[0];
	dataword[5] = rem[1];
	dataword[6] = rem[2];
	/*for(i=4;i<7;i++){
		dataword[i] = rem[i];
	}*/
	
	for(i=0;i<7;i++){
		k=i;
		if(dataword[i]==1){
			for(j=0;j<4;j++){
				if(dataword[k]==divisor[j]){
					dataword[k] = 0;
					r[j] = 0;
				}
				else{
					dataword[k] = 1;
					r[j] = 1;	
				}
				k += 1;
			}
			quo[i] = 0;
		}
		else{
			quo[i] = 0;
		}
	}
	printf("\nQuotient: ");
	for(i=0;i<4;i++){
		printf("%d", quo[i]);
	}
	printf("\nRemainder: ");
	for(i=0;i<3;i++){
		printf("%d", r[i]);
	}
}
