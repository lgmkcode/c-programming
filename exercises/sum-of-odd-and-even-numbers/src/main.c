#include <stdio.h>
#define SIZE 8


int main (int argc, char *argv[]) { 

int a[SIZE], i, t =0, c=0;

for (i=0;i<SIZE; i++) 
	scanf("%d",&a[i]);
printf("girilen sayilar: ");
for (i=0;i<SIZE; i++)
	printf("%d ",a[i]);
printf("\n");
for(i=0;i<SIZE;i++){
	if(a[i] % 2)
		t +=a[i];
	else
		c +=a[i];
}
printf("teklerin toplami:%d\nciftlerin toplami:%d",t,c);

	return 0;
}
