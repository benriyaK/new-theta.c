#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	int set = 0;
	int i, j, k = 0;

	int ax[101];
	int bx[101];
	int ac[330][5] = { 0 };
	int ai[101][101];
}*spc;
int main(void)
{
	
	int i, j, k = 0;
	int rnd[10];
	int bc[330][3] = { 0 };
		spc p = (spc)malloc(sizeof(spc));
		if (p) {

		for (i = 0; i < 10; i++) {
			rnd[i] = rand() % 2;
			printf("RND=%d", rnd[i]);
			printf("\n");
		}
		for (i = 0; i < 300; i++) {
			for (j = 0; j < 3; j++) {
				bc[i][j]=p->ac[i][j] = rand() % 2;
				printf("(struct) ac[%d][%d]=%d", i, j, p->ac[i][j]);
				printf("\n");

			}
		}
		free(p);
	}
	int pd = 0;
	scanf_s("%d", &pd);
}
