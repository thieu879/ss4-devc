#include <stdio.h>
int main(){
	int ng, t, n;
	printf("nhap ngay thang nam:");
	scanf("%D %d %d", &ng, &t, &n);
	switch(t){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if(ng>0 && ng<=31) printf("Ngay %d thang %d nam % hop le", ng, t, n);
			else printf("ngay %d thang %d nam %d khong hop le", ng, t, n);
		break;
		case 4: case 6: case 9: case 11:
			if(ng>0 && ng<=30) printf("Ngay %d thang %d nam %d hop le", ng, t, n);
			else printf("ngay %d thang %d nam %d khong hop le", ng, t, n);
		break;
		case 2:
			if(ng>0 && ng<=28 || ng<=29) printf("ngay %d thang %d nam %d hop le", ng, t, n);
			else printf("ngay %d thang %d nam %d khong hop le", ng, t, n);
		break;
		default: printf("ngay %d thang %d nam %d khong hop le", ng, t, n); 
	} 
}
