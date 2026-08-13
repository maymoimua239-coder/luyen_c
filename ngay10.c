#include <stdio.h>
#include <stdlib.h>

int main(){
	int hang, cot;
	scanf("%d %d", &hang, &cot);

	int **ma_tran = malloc(hang*sizeof(int*));
	if(ma_tran == NULL){
		printf("Loi: Khong the cap phat bo nho\n");
		return 1;
	}
	
	for (int k = 0; k < hang; k++){
		ma_tran[k] = malloc(cot*sizeof(int));

		if (ma_tran[k] == NULL){
			printf("Loi: Khong the cap phat bo nho\n");
			return 1;
		}

	}

	for (int i = 0; i < hang; i++){
		for (int j = 0; j < cot; j++){
			ma_tran[i][j] = i*cot + j + 1;
		}
	}

	for (int i = 0; i < hang; i++){
		for (int j = 0; j < cot; j++){
			printf("%3d ", ma_tran[i][j]);
		}
		printf("\n");
	}


	for (int h = 0; h < hang; h++){
		free(ma_tran[h]);
	}

	free(ma_tran);
	return 0;
}


