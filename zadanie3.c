#include <stdio.h>
#include <stdlib.h>

int main()
{
 	double vklad, vidsotok, x; 
 	int rik = 0;
 	
 	printf("Suma vkladu: ");
 	scanf("%lf", &vklad);
 	printf("Vidsotok: ");
 	scanf("%lf", &vidsotok);
	
	x = vklad * 2;
	
	while(vklad < x) {
		
		rik++;
		vklad = vklad + ((vklad / 100) * vidsotok);
}
	
	printf("\nKilkist rokiv: %d", rik);
	printf("\nVklad raven = %lf", vklad);
	return 0;
} 
