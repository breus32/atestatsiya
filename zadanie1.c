#include <stdio.h>
#include <math.h>

int main() {
	
	int x, y, rasstoyanie;
	
	printf ("Vvedite x: ");
	scanf ("%d", &x);
	
	printf ("Vvedite y: ");
	scanf ("%d", &y);
	
	rasstoyanie = sqrt(pow(( -35 - x), 2) + pow(( 40 - y), 2));
	
	printf ("Rastoyanie ravno %d", rasstoyanie);
	
	return 0;
	
	
}
