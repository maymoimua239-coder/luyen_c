#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Nhap so luong mau ban dau\n");
	scanf("%d", &n);
	
	int *dong_dien = calloc(n, sizeof(int));
	for (int i = 0; i < n ; i++){
		printf("%d ", dong_dien[i]);
	}
	printf("\n");
	
	printf("Ban muon do them bao nhieu mau nua\n");
	int m;
	scanf("%d", &m);
	
	dong_dien = realloc(dong_dien, (n+m)*sizeof(int));
	if (dong_dien == NULL){
		printf("Loi: Bo nho khong the cap phat\n");
		return 1;
	}
	
	printf("Nhap gia tri tu n den n+m\n");
	for (int j = n; j < n+m ; j++){
		scanf("%d", &dong_dien[j]);
	}
	
	for (int k = 0; k < n+m ; k++){
		printf("%d ", dong_dien[k]);
	}
	printf("\n");
	
	free(dong_dien);
	
	return 0;
}


