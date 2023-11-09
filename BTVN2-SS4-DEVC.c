#include <stdio.h>
int main(){
	int a, b , c;
	printf("nhap 3 canh:");
	scanf("%d %d %d", &a , &b, &c);
	if ( a*a==b*b+c*c || b*b==c*c+a*a|| c*c==a*a+b*b) printf ("tam giac vuong");
	else if (a==b&&b==c) printf ("tam giac deu ");
	else if (a==b!=c || b==c!=a || a==c!=b) printf("tam giac can ");
	else if (a*a==b*b+c*c || b*b==c*c+a*a|| c*c==a*a+b*b && a==b!=c || b==c!=a || a==c!=b) printf ("tam giac vuong can");
	else if (a+b>c || a+c>b ||b+c>a) printf("tam giac thuong");
	else printf("khong la tam giac"); 
}

