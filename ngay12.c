#include <stdio.h>

typedef struct {
	double so_lon;
	int so_nguyen;
	char ki_tu;
} Goidulieu;

int main(){
	printf("Kich thuoc char: %zu bytes\n", sizeof(char));
	printf("Kich thuoc double: %zu bytes\n", sizeof(double));
	printf("Kich thuoc int: %zu bytes\n", sizeof(int));

	printf("Tong kich thuoc struct: %zu bytes\n", sizeof(Goidulieu));

	size_t tong_lt = sizeof(char) + sizeof(double) + sizeof(int);
	size_t tong_the = sizeof(Goidulieu);

	printf("So luong file rac: %zu bytes\n", tong_the - tong_lt);
	return 0;
}




