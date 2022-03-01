#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	//int n;
	char n[50];
	
	printf("Enter: ");
	scanf("%s", n);
	
	//printf("%s",bintohex(n));		
	//printf("%s",dectohex(n));	
	//printf("%d",octaltodec(n));	
	//octaltobin(n);	
	//printf("%s",octaltohex(n));
	//printf("%d",hextodec(n));
	//hextobin(n);
	
	return 0;
}

int bintohex(int n){
	int i=0, rem;
	int index=0;
	int number[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};
	char letter[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	char hex[50];
	
	while(n!=0){
		rem = n%10000;
		for(i=0;i<16;i++){
			if(number[i]==rem){
				hex[index] = letter[i];
				index++;
			}
		}
		n /= 10000;
	}
	return strrev(hex);
}

int dectobin(int n){
	int i=0;
	int rem[50];
	for(i=0;n>0;i++){
		rem[i] = n%2;
		n/=2;
	}
	
	for(i=i - 1; i>=0; i--){
		printf("%d",rem[i]);
	}
}

int dectohex(int n){
	int i=0, rem, index = 0;
	int dec[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	char letter[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	char hex[50];
	
	while(n!=0){
		rem = n%16;
		for(i=0;i<16;i++){
			if(rem == dec[i]){
				hex[index] = letter[i];
				index++;
			}
		}
		n /= 16;
	}
	
	return strrev(hex);
}

int octaltobin(int n){
	return dectobin(octaltodec(n));
}

int octaltodec(int n){
	int i=0, rem, deci = 0;
	while(n!=0){
		rem = n%10;
		deci += (rem*pow(8,i));
		n/=10;
		i++;
	}
	return deci;
}

int octaltohex(int n){
	return dectohex(octaltodec(n));	
}

int hextodec(char n[]){
	int i=0, rem, deci=0;
	
	int len = strlen(n);
	len--;
	for(i=0;n[i]!='\0';i++){
		if(n[i]>='0' && n[i]<='9'){
			rem = n[i] - 48;
		}else if(n[i]>='A' && n[i]<='F'){
			rem = n[i] - 65 + 10;
		}
		deci += (rem * pow(16,len));
		len--;
	}
	
	return deci;
}

int hextobin(char n[]){
	return dectobin(hextodec(n));
}

int hextooctal(char n[]){
}
