#include <stdio.h>
#include <string.h>

typedef struct {
	char ten[50];
	float gpa;
} ThuctheSinhvien;

int main(){
	ThuctheSinhvien sv_phong;

	strcpy(sv_phong.ten, "Nguyen Huu Phong");

	sv_phong.gpa = 3.0;

	FILE *file_sv = fopen("danh_sach.txt", "a");

	if (file_sv == NULL) return 1;

	fprintf(file_sv, "Sinh vien: %s\nGPA: %.2f\n", sv_phong.ten, sv_phong.gpa);

	fclose(file_sv);

	printf("Da luu du lieu thanh cong vao danh_sach.txt\n");
	return 0;
}	
