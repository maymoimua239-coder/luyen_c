#include <stdio.h>
#include <string.h>

typedef struct {
	char ten[50];
	int tuoi;
	float gpa;
} Sinhvien;

int main(){
	Sinhvien sv1;
	printf("Nhap du lieu ten, tuoi, gpa cua sinh vien\n");

	printf("Ten: \n");
	scanf(" %[^\n]s", sv1.ten);

	printf("Tuoi: \n");
	scanf("%d", &sv1.tuoi);

	printf("GPA: \n");
	scanf("%f", &sv1.gpa);

	printf("\n---THONG TIN SINH VIEN---\n");
	printf("Ten: %s\nTuoi: %d\nGPA: %.2f\n", sv1.ten, sv1.tuoi, sv1.gpa);

	return 0;
}
