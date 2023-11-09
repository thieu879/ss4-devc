#include <stdio.h>
int main(){
	int a, b, c, d;
	char e;
	printf ("Nhap cac so:");
	scanf ("%d %d %d", &a, &b, &c);
	fflush(stdin);
	printf ("Chon cach sap xep cua day ( - la giam ):");
	scanf ("%c" , &e);
	int max = a, min = b;
	if ( max < b) max = b;
	if ( max < c) max = c;
	if ( min > a) min = a;
	if ( min > c) min = c;
	if (a>min && a<max) d = a; 
	if (b>min && b<max) d = b; 
	if (c>min && c<max) d = c; 
	switch (e) {
	case '-' :
	  	printf ( " %d, %d, %d", max, d, min );
	break;
	}
}
