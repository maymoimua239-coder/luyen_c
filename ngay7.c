#include <stdio.h>
#include <stdlib.h>

void phan_tich_dien_ap(int *mang_dien_ap, int so_luong, int *ptr_max, int *ptr_min, float *ptr_avg){
	*ptr_max = mang_dien_ap[0];
	*ptr_min = mang_dien_ap[0];
	int tong = mang_dien_ap[0];
	for (int i = 1; i < so_luong; i++){
		if (mang_dien_ap[i] > *ptr_max){
		       *ptr_max = mang_dien_ap[i];
		}
		if (mang_dien_ap[i] < *ptr_min){
			*ptr_min = mang_dien_ap[i];
		}
		tong += mang_dien_ap[i];

	}
	*ptr_avg = (float)tong/so_luong;
}

int main(){
	int n;
	printf("nhap so luong cam bien\n");
	scanf("%d", &n);

	int *mang = malloc(n * sizeof(int));
	if (mang == NULL){
		printf("Loi: Khong cap phat bo nho\n");
		return 1;
	}

	printf("Nhap gia tri dien ap cho tung cam bien\n");
	for (int i = 0; i < n; i++){
		scanf("%d", &mang[i]);
	}

	int min, max;
	float avg;

	phan_tich_dien_ap(mang, n, &max, &min, &avg);

	printf("Gia tri lon nhat la: %d\n", max);
	printf("Gia tri nho nhat la: %d\n", min);
	printf("Gia tri trung binh la: %.2f\n", avg);

	free(mang);
	return 0;
}




	
			       
		
