#include <stdio.h>

#include <math.h>
#include <time.h>
#include <stdlib.h>
extern double xor(double x, double y);
extern double not(double x, double y);
extern double or (double x, double y);
extern double and(double x, double y);
extern double nand(double x, double y);
extern double add(double x);
extern double add2(double x);
extern double proton(double x, double y, double z, int a);
extern double step(double x);
extern double data0(double x);
extern double data1(double x);
extern double data2(double x);
extern double inx(double x);
extern double iny(double x);
extern double inz(double x);
extern int *fx1(double *a, int n);
extern double weit(double x1, double x2, double x3, double w1, double w2, double w3);
extern double weit2(double x);
extern double weit1(double x);
extern double weit0(double x);
extern double seeta(double *x);
extern double data(double x);
extern double seeta1(double *x);
extern double seeta2(double(*x)[10]);
extern double ran(double x);
extern int ran1(int x);
extern int ran0(int x);

#define max 1000

void fx(int *a)
{
	*a = 10 * 10 * 5;

	return;
}
int *fx1(double *a, int n)
{
	int i;
	double *x = 0;
	for (i = 0; i < n; i++) {
		a[i] = seeta(a);

	}

	return 0;
}

double ran(double x)
{
	int i = 0;
	int j = 0;
	int k = 0;
	double w = 0;
	double e[100][100] = { 0 };

	srand((unsigned int)time(0));
	rand();
	rand();
	rand();
	rand();
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			e[i][j] = 0.1 + (double)rand() / (RAND_MAX);
			printf("[%7lf]", e[i][j]); k++;
			if (k % 10 == 0)printf("\n");


		}
	}

	w = 0.1 + (double)rand() / RAND_MAX;
	return w;
}

int ran1(int x)
{
	int i = 0;
	int j = 0;
	int k = 0;
	double w = 0;
	srand((unsigned int)time(0));
	rand();
	rand();
	rand();
	rand();


	w = 1 + (int)rand() *10.0 / (1.0 + RAND_MAX);
	return w;
}
int ran0(int x)
{
	int i = 0;
	int j = 0;
	int k = 0;
	double w = 0;
	int e[100][100];
	srand((unsigned int)time(0));
	rand();
	rand();
	rand();
	rand();
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			e[i][j] = rand() % 2;
			printf("[%d]", e[i][j]); k++;
			if (k % 10 == 0)printf("\n");


		}
	}

	w = rand() % 2;
	return w;
}
double xor(double x, double y)
{

	return nand(nand(nand(x, y), y), nand(x, nand(x, y)));
}
double not(double x, double y)
{

	return nand(nand(x, y), nand(x, y));


}

double or (double x, double y)
{
	if (1 < x) { x = 1; }
	if (1 < y) { y = 1; }
	if (x <= -1) { x = 0; }
	if (y <= -1) { y = 0; }
	double z = 0;
	z = (1)* x + (1)* y + 0;



	if (-1 >= z) { z = 0; }
	if (1 <= z) { z = 1; }

	return z;

}

double and(double x, double y)
{
	if (1 < x) { x = 1; }
	if (1 < y) { y = 1; }
	if (x <= -1) { x = 0; }
	if (y <= -1) { y = 0; }
	double z = 0;
	z = (2)* x + (2)* y + -3;



	if (-1 >= z) { z = 0; }
	if (1 <= z) { z = 1; }

	return z;

}


double nand(double x, double y)
{
	if (1 < x) { x = 1; }
	if (1 < y) { y = 1; }
	if (x <= -1) { x = 0; }
	if (y <= -1) { y = 0; }
	double z = 0;
	z = (-2)* x + (-2)* y + 3;



	if (-1 >= z) { z = 0; }
	if (1 <= z) { z = 1; }

	return z;

}


double add(double x)
{
	x += 0.01;

	return x;

}
double add2(double x)
{
	x -= 0.01;

	return x;

}
double step(double x)
{
	double s = 0;
	double s1 = 0;
	double s2 = 0;

	if (x > 0.9) { s = 1; }
	else
		s = 0;

	return s;



}






double proton(double x, double y, double z, int a)
{
	double a1 = 0;
	double a2 = 0;
	double a3 = 0;
	double w1 = 0;
	double w2 = 0;
	double w3 = 0;
	double b = 0;
	double rnd[13] = { 0 };
	double rnd1[100] = { 0 };
	double rnd2[100] = { 0 };
	double rnd3[100] = { 0 };
	double mem[1000] = { 0 };
	double blk = 1.0;
	double mem1[100] = { 0 };
	double mem2[100] = { 0 };
	double f = 0;
	double set = 0;//制御変数
	double set1 = 0;//制御変数
	double set2 = 0;//制御変数
	double data = 0;
	int i, j, k = 0;

	data = x + y + z;
	srand((unsigned int)time(0));
	for (i = 0; i < 10; i++) {
		rand();
		rand();
		rand();
		rand();
		rnd[i] = (double)rand() / RAND_MAX;

	}

	a1 = rnd[0];
	a2 = rnd[1];
	a3 = rnd[2];

	set = weit(x, y, z, a1, a2, a3);


	if (set < blk) { set = (blk - set); }
	else { set = (set - blk); }
	//if (set1 < blk) { set1 = (blk - set1); }
	//else { set1 = (set1 - blk); }
	//if (set2 < blk) { set2 = (blk - set2); }
	//else { set2 = (set2 - blk); }

	while (a1 <= set) { a1 = add(a1); }
	while (a1 >= set) { a1 = add2(a1); }
	//while (a2 <= set1) { a2=add(a2); } 
	//while (a2 >= set1) { a2=add2(a2); } 
	//while (a3 <= set2) { a3=add(a3); } 
	//while (a3 >= set2) { a3=add2(a3); } 
	f = a1 + a2 + a3;


	printf("a1=%lf\n", a1);
	printf("a2=%lf\n", a2);
	printf("a3=%lf\n", a3);
	printf("xyz=%lf\n", data);
	printf("f=%lf\n", f);
	if (step(f) == 1) { f = 1; }
	else { f = 0; }



	return f;
}

double data0(double x)
{
	double w = 0;

	w = 3;


	return w;
}
double data1(double x)
{
	double w = 0;
	w = -2;


	return w;
}
double data2(double x)
{
	double w = 0;
	w = -2;


	return w;
}
double inx(double x)
{
	double w = 0;




	return x;
}

double iny(double x)
{
	double w = 0;




	return x;
}
double inz(double x)
{
	double w = 0;




	return x;
}
double weit0(double x)
{
	double w = 0;
	w = data0(x);

	//while (x >= w) { x = add2(x); }
	//while (x <= w) { x = add(x); }


	return w;





}
double weit1(double x)
{
	double w = 0;
	w = data1(x);
	while (x >= w) { x = add2(x); }
	while (x <= w) { x = add(x); }


	return x;
}
double weit2(double x)
{
	double w = 0;
	w = data2(x);
	while (x >= w) { x = add2(x); }
	while (x <= w) { x = add(x); }


	return x;
}
double seeta(double *x)
{
	int i = 0;
	int j = 0;
	int k = 0;
	double w = 0;
	double  rnd[100][100] = { 0 };

	srand((unsigned int)time(0));
	rand();
	rand();
	rand();
	rand();
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			rnd[i][j] = (double)rand() / RAND_MAX;
			printf("[%7lf]", rnd[i][j]); k++;
			if (k % 10 == 0)printf("\n");


		}

	}



	return  rnd[9][9];
}
double seeta1(double *x)
{
	int i = 0;
	int j = 0;
	int k = 0;
	double w = 0;


	srand((unsigned int)time(0));
	rand();
	rand();
	rand();
	rand();
	for (i = 0; i < 1000; i++) {

		x[i] = (double)rand() / RAND_MAX;
		printf("[%7lf]", x[i]); k++;
		if (k % 10 == 0)printf("\n");




	}



	return  0;


}
double seeta2(double(*x)[10])
{
	int i = 0;
	int j = 0;
	int k = 0;
	double w = 0;
	srand((unsigned int)time(0));
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			x[i][j] = (double)rand() / RAND_MAX;
			printf("[%7lf]", x[i][j]); k++;
			if (k % 10 == 0)printf("\n");


		}

	}
	return  0;
}
double data(double x)
{
	double w = 0;
	double e = 0;

	e = data0(x) - x;

	return e;
}
double weit(double x1, double x2, double x3, double w1, double w2, double w3)
{
	double w = 0;
	double e = 0;
	w = -1 + (x1 * w1) + (x2 * w2) + (x3 * w3);





	w = -1 + weit0(w1) * inx(x1) + weit1(w2) * iny(x2) + weit2(w3) * inz(x3);


	return w;





}

int ari(char(*x)[100], int y)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int e[100][100] = { 0 };



	srand((unsigned int)time(0));
	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {
			e[i][j] = 1 + (int)rand() *99.0 / (1.0 + RAND_MAX);
			if (e[i][j] == 13) { x[i][j] = '*'; }
			printf("%3d", e[i][j]); k++;
			if (k % 100 == 0)printf("\n");


		}

	}
	return  0;

}
char memo(char *x, int y)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int ret = 0;
	char *p;
	char buf[1024];
	char name[] = { "memox.txt" };
	double(*pp)[100];
	double w = 0;
	double e[100][100];
	pp = e;

	FILE *fp;
	errno_t err;
	err = fopen_s(&fp, name, "a");

	if (err != 0) {
		exit(1); printf("%s オープンに失敗しました。\n", name);



	}
	
	
	for (i = 0; i < 1024; i++) {

		srand((unsigned int)time(0));
		buf[i] = x[i] = ran1(1);


		printf("%d", buf[i]); k++;
		if (k % 100 == 0)printf("\n");

		fscanf_s(fp, "%d", &buf[i], 1024);
		fprintf_s(fp, "%d", buf[i], 1024);

	}
	
	
	

	
	
	
	
	fclose(fp);
	

	return 0;
}
int enkaku(int(*x)[8], int(*y)[100],int z)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int *p=0;
	int e[100][100] = { 0 };
	int f[] = { 0 };

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			x[i][j];
			if (x[i][j] > 0) {
				e[i][j] = x[i][j]; f[j] = e[i][j]; x[i][j] = -1;
			}

		}

	}

	return 0;

}

int hake(int *(x)[3],*char str,int time）{
int ax[8][3];
int i,j,k,l=0;

for(i=0; i<8; i++;){
 for(j=0; j<3;　j++;){


ax[i][j]=x[i][j];



}
 }

return xor(time,1);

}


int main(void) {


　　　　　
	char *d;
	char art[2046] = { 0 };
	char ar[100][100] = { 0 };
	char(*pt)[100];
	int e[100][100] = { 0 };
	int (*pc)[100];
	int ax[8][8] = { 0 };
	double (*p)[10];
	double(*pp)[100];
	double rnd0[10][10] = { 0 };
	double rnd[3] = { 0 };
	double rnd1[1000] = { 0 };
	double rnd2[1000] = { 0 };
	double rnd3[100][100] = { 0 };
	double a1 = 0;
	double a2 = 0;
	double a3 = 0;
	double x = 3;
	p = rnd0;
	pp = rnd3;
	pt = ar;
	pc = e;
	d = art;
	int a = 0;
	int i, j, k = 0;
	int m = 0;











	fx(&a); printf("a=%d\n", a);
	for (i = 0; i < 1000; i++) {
		printf("[%d] %8lf", i, rnd2[i]); k++;
		if (k % 10 == 0)printf("\n");

	}
	printf("\n");
	fx1(rnd1, 1); printf("a=%lf\n", rnd1[0]);
	printf("\n");
	seeta1(rnd2); for (i = 0; i < 1000; i++) {
		printf("[%d] %8lf", i, rnd2[i]); k++;
		if (k % 10 == 0)printf("\n");
	}
	printf("seeta2 %8lf", rnd0[9][9]); printf("\n");
	seeta2(p); printf("rnd0[9][9] %8lf", rnd0[9][9]);
	printf("\n");
	rand();
	rand();
	rand();
	rand();
	for (i = 0; i < 3; i++) { rnd[i] = (double)rand() / RAND_MAX; }
	printf("proton =%lf\n", proton(rnd[0], rnd[1], rnd[2], a));
	printf("\n");



	printf("add =%lf\n", add(x));
	printf("add2 =%lf\n", add2(x));

	while (x >= 1) { x = add2(x); }
	while (x <= 1) { x = add(x); }
	printf("add =%lf\n", add(x));
	printf("add2 =%lf\n", add2(x));
	printf("weit =%lf\n", weit(weit0((double)rand() / RAND_MAX), weit1((double)rand() / RAND_MAX), weit2((double)rand() / RAND_MAX), inx((double)rand() / RAND_MAX), iny((double)rand() / RAND_MAX), inz((double)rand() / RAND_MAX)));
	printf("weit0 =%lf\n", inx(x));
	printf("seeta =%lf\n", seeta(&x));
	printf("rnd0[3][3] =%lf\n", &rnd0[3][3]);
	printf("data =%lf\n", data(x));
	printf("rnd =%lf\n", (double)rand() / RAND_MAX);
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			p[i][j] = 0.1 + (double)rand()*1.0 / (0.1 + RAND_MAX);
			printf("[%7lf]", p[i][j]); k++;
			if (k % 10 == 0)printf("\n");


		}

	}
	printf("seeta2 %8lf", rnd0[9][9]);
	printf("\n");
	ari(pt, 0);
	printf("\n");
	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {

			printf("%c", pt[i][j]); k++;
			if (k % 100 == 0)printf("\n");


		}

	}
	printf("ran0=%d\n", ran0(1));
	printf("ran=%lf\n", ran(1));

	int pc;
	scanf_s("%d", &pc);
}

