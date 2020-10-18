#include<stdio.h>

void draw(int n,int x) {
		for (int j = 1; j <= 2*x-1; j++) {
			if (j != x - n && j != x + n) {
				printf("  ");
			}
			if (j == x - n || j == x + n) {
				printf("* ");
			}
		}
		printf("\n");
}


int main(){
	int x;
	scanf("%d", &x);
	int n = 0;
	
	for (int i=1; i <= x; i++) {
		draw(n,x);
		n++;
	}
	
	int m = n-2;
	for (int i = 1; i <= x-1; i++) {
		draw(m, x);
		m--;
	}
	return 0;
}
