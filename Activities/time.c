#include <stdio.h>
int main ()
{
	int time, h, m, s;
	
	printf("Enter time <seconds>: ");
	scanf("%d",&time);
	
	h=time/3600;
	m=(time/60)%60;
	s=time%60;
	
	printf("%d Time is %d hours, %d minutes and %d seconds", time, h, m, s);
	
	return 0;
}

