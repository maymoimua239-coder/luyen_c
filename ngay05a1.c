#include <stdio.h>
void hoan_doi(int *ptr_a, int *ptr_b){
	int temp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = temp;
}
int main(){
	int a = 10, b = 99;
	hoan_doi(&a, &b);
	printf("gia tri cua a la: %d\n", a);
	printf("gia tri cua b la: %d\n", b);
	return 0;
}
