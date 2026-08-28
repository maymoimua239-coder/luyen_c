#include <stdio.h>
#include <string.h>

void in_thong_tin(char *ho_ten, float diem_gpa){
	printf("Xin chao, toi la %s. GPA cua toi la %.2f\n", ho_ten, diem_gpa);
}

typedef struct {
	char ten[50];
	float gpa;

	void (*tu_gioi_thieu)(char*, float);
} ThuctheSinhvien;

int main(){
	ThuctheSinhvien sv_phong;

	strcpy(sv_phong.ten, "Nguyen Huu Phong");

	sv_phong.gpa = 3.0;

	sv_phong.tu_gioi_thieu = in_thong_tin;

	sv_phong.tu_gioi_thieu(sv_phong.ten, sv_phong.gpa);

	return 0;
}



