#include <stdio.h>
#include <stdlib.h>

void cap_phat_bo_nho(int **ptr_cap2, int so_luong){
	*ptr_cap2 = malloc(so_luong*sizeof(int));
	if (*ptr_cap2 == NULL){
		printf("Loi: Khong the cap phat bo nho\n");
		
	}
}

int main(){
	int *mang = NULL;
	cap_phat_bo_nho(&mang, 5);

	for (int i = 0; i < 5 ; i++){
		mang[i] = i*10;
	}

	for (int j = 0; j < 5 ; j++){
		printf("%d ", mang[j]);
	}
	printf("\n");

	free(mang);
	return 0;
}
