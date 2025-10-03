#include <stdio.h>

int main() {
	int l, c, x[3][4];
	
	for (l = 0; l < 3; l++) {
		printf("\n\nElementos da linha %d", l);
		for (c = 0; c < 4; c++)
		{
			printf("\n%d", x[l,c]);
		}
	}
}