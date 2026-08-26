#include <stdio.h>
#include <stdlib.h>

typedef struct {
	float gpa;
	int tuoi;
	char ten[50];
} Sinhvien;

int main(){
	printf("Nhap so luong sinh vien.\n");
	int n;
	scanf("%d", &n);

	Sinhvien *danh_sach = malloc(n * sizeof(Sinhvien));

	if (danh_sach == NULL){
		printf("Khong the cap phat bo nho\n");
		return 1;
	}

	for (int i = 0; i < n ; i++){
		printf("Nhap ten sinh vien %d\n", i+1);
		scanf(" %[^\n]", danh_sach[i].ten);

		printf("Nhap tuoi cua sinh vien %d\n", i+1);
		scanf("%d", &danh_sach[i].tuoi);

		printf("Nhap gpa cua sinh vien %d\n", i+1);
		scanf("%f", &danh_sach[i].gpa);
	}
	printf("\n\n");
	for (int j = 0; j < n ; j++){
		printf("--- THONG TIN SINH VIEN %d ---\n", j+1);
		printf("Ten: %s\nTuoi: %d\nGPA: %.2f\n", danh_sach[j].ten, danh_sach[j].tuoi, danh_sach[j].gpa);
	}
	free(danh_sach);
	return 0;
}







