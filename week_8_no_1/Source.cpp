#include<stdio.h>

void draw(int n,int x) {
		for (int j = 1; j <= x; j++) {
			if (j != ((x + 1) / 2) - n && j != ((x + 1) / 2) + n) {
				printf("  ");
			}
			if (j == ((x + 1) / 2) - n || j == ((x + 1) / 2) + n) {
				printf("* ");
			}
		}
		printf("\n");
}


int main(){
	int x;
	scanf("%d", &x);
	int n = 0;
	
	for (int i=1; i <= (x + 1) / 2; i++) {
		draw(n,x);
		n++;
	}
	
	int m = n-2;
	for (int i = 1; i <= ((x + 1) / 2)-1; i++) {
		draw(m, x);
		m--;
	}
	return 0;
}
