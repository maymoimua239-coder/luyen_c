#include <stdio.h>
void nap_dan(int so_dan){
	so_dan += 10;
	printf("So dan hien tai la: %d\n", so_dan);
	printf("-->Dia chi bo nho la: %p\n", &so_dan);
}
int main(){
	int bang_dan = 5;
	printf("so dan: %d\n", bang_dan);
	printf("-->Dia chi bo nho la: %p\n", &bang_dan);
	nap_dan(bang_dan);
	printf("so dan: %d\n", bang_dan);
	return 0;
}


