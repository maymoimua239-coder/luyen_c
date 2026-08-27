#include <stdio.h>

int cong(int a, int b) { return a+b; }
int tru(int a, int b) { return a-b; }
int nhan(int a, int b) { return a*b; }

int main(){
	printf("Nhap 2 so x va y\n");
	int x, y;

	scanf("%d %d", &x,&y);

	int (*thuc_thi)(int, int) = NULL;

	printf("Nhap phep tinh 1 == +, 2 == -, 3 == *\n");
	int n;
	scanf("%d", &n);
	switch (n){
		case 1:
			thuc_thi = cong;
			break;
		case 2:
			thuc_thi = tru;
			break;
		case 3:
			thuc_thi = nhan;
			break;
		default:
			printf("Loi: Phep tinh khong hop le!\n");
	}

	if (thuc_thi != NULL){
		int ket_qua = thuc_thi(x, y);
		printf("Ket qua la: %d\n", ket_qua);
	}

	return 0;
}
