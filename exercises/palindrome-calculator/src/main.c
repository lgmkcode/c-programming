#include <stdio.h>

int main () {
	
	int n1, n2 = 0, tmp;
	printf("Enter a number: "); scanf("%d",&n1);
	int n0 = n1; 
	
	while(n1 != 0) {
		tmp = n1%10;
		n2 = n2*10 + tmp;
		n1 /= 10;
	}	
	
/*
	while(n1 != 0) {
		n2 = n2*10 + n1%10;
		n1 /= 10;
	}	
*/
	
	if(n0 == n2)
		printf("This number is palindromic and its value is: %d",n2);
	else
		printf("This number is not palindromic.");
			
	return 0;
}
