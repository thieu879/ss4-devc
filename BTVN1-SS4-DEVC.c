#include <stdio.h>
int main(){
	int a;
	printf("Nhap vao so nguyen:");
	scanf("%d", &a);
	if(a%3==0 && a%5==0) printf("%d la so chia het cho 3 va 5", a); 
} 
