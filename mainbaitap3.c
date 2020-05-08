#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r;
	float chuvi;
	float dientich;
	
	printf("nhap ban kinh hinh tron: ");
	scanf ("%f",&r);
	
	chuvi= r*2*3.14;
	printf("chu vi hinh tron voi ban kinh %f la %f \n", r ,chuvi);
	
	dientich= r*r*3.14;
	printf ("dien tich hinh tron voi ban kinh %f la %f", r ,dientich);
	return 0;
}
