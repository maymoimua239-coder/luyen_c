#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Ban can do dien ap cho bao nhieu nut mach\n");
	scanf("%d", &n);
	int *dien_ap = malloc(n*sizeof(int));

	if (dien_ap == NULL){
		printf("Loi: Khong the cap phat bo nho!\n");
		return 1;
	}

	for (int i = 0; i < n; i++){
		scanf("%d", &dien_ap[i]);
	}

	for (int j = 0; j < n; j++){
		printf("%d ", dien_ap[j]);
	}
	printf("\n");
	free(dien_ap);
	return 0;
}

