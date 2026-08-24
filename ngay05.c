#include <stdio.h>
void nap_dan(int *ptr_so_dan){
	*ptr_so_dan += 10;
	printf("So dan hien tai la: %d\n", *ptr_so_dan);
}
int main(){
	int bang_dan = 5;
	printf("So dan : %d\n", bang_dan);
	nap_dan(&bang_dan);
	printf("So dan : %d\n", bang_dan);
	return 0;
}

