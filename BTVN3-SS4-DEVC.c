#include <stdio.h>
int main(){
	int a, b, c;
	printf("Nhap vao so moi va so cu:");
	scanf("%d %d", &a, &b);
	c = a - b;
	if(0<=c<50) printf("gia tien la: %d", c * 10000);
	else if(50<=c<100) printf("gia tien la: %d", c * 15000);
	else if(100<=c<150) printf("gia tien la: %d", c * 20000);
	else if(150<=c<200) printf("gia tien la: %d", c * 25000);
	else printf("gia tien la: %d", c * 30000); 
} 
