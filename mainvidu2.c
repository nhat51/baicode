#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char abc;
	printf ("nhap du lieu kieu char: ");
	scanf ("%c",&abc);

	
	int xyz;	
    printf ("nhap kieu du kieu int: ");
    fflush(stdin);
	scanf ("%d",&xyz);
	
	float lenght;
	printf ("nhap kieu du lieu float: \n");
	fflush(stdin);
	scanf ("%f",&lenght);
	
 
 	double area;
    printf("nhap kieu du lieu double: \n");
	fflush(stdin);
	scanf("%lf",&area);
	
	long literys;
	 printf ("nhap kieu du kieu long: \n");
	fflush(stdin);
	scanf ("%li",&literys);
	
	short arm;
	printf ("nhap kieu du lieu short: ");
	fflush(stdin);
	scanf("%hd",&arm);

	return 0;
}
