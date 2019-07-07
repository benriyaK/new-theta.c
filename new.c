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
#define max 1000

void fx(int *a)
{ *a = 10*10*5; 

return;
}
int *fx1(double *a,int n)
{
	int i;
	double *x = 0;
	for (i = 0; i < n; i++) {
		  a[i] =seeta(x);
		  
	}
	 
	return 0;
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
	x +=0.01;
	
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

	if (x >0.9) { s = 1; }
	else
		s = 0;

	return s;



}






double proton(double x, double y, double z,int a)
{
	double a1 = 0;
	double a2 = 0;
	double a3 = 0;
	double w1 = 0;
	double w2 = 0;
	double w3 = 0;
	double b = 0;
	double rnd[13] = { 0 };
	double rnd1[100] = {0};
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
	int i,j,k = 0;
	
	data = x + y + z;
	srand((unsigned int)time(0));
	for (i = 0; i < 10; i++) {
		rand();
		rand();
		rand();
		rand();
		rnd[i] =(double)rand() / RAND_MAX;
		
	}

	a1 = rnd[0];
	a2 = rnd[1];
	a3 = rnd[2];
	
	set = weit( x,y,z,a1,a2,a3);
	
	
	if (set < blk) { set=(blk - set); }
	else{ set = (set - blk); }
	//if (set1 < blk) { set1 = (blk - set1); }
	//else { set1 = (set1 - blk); }
	//if (set2 < blk) { set2 = (blk - set2); }
	//else { set2 = (set2 - blk); }
	
	while (a1 <= set) { a1=add(a1); } 
	while (a1 >= set) { a1=add2(a1); } 
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
	if (step(f)==1) {f = 1; }else { f = 0; }
	  
	
	  
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
double weit0( double x)
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
	while (x <=w) { x = add(x); }


	return x;
}
double weit2(double x)
{
	double w = 0;
	w = data2(x);
	while (x >=w) { x = add2(x); }
	while (x <=w) { x = add(x); }


	return x;
}
double seeta(double *x)
{
	int i = 0;
	int j = 0;
	int k = 0;
	double w = 0;
	double  rnd[100][100] = { 0 };
	rand();
	rand();
	rand();
	rand();
	for (i = 0; i < 10; i++) {
		for ( j = 0; j < 10; j++) { rnd[i][j] = (double)rand() / RAND_MAX;
		printf("[%7lf]", rnd[i][j]); k++;
		if (k % 10 == 0)printf("\n");
		
		}
		
	}
	
	return (double)rand() / RAND_MAX;
}
double data(double x)
{
	double w = 0;
	double e = 0;

	e=data0(x)-x;

	return e;
}
double weit(double x1, double x2, double x3, double w1, double w2, double w3)
{
	double w = 0;
	double e = 0;
	w = -1+(x1 * w1) + (x2 * w2 )+( x3 * w3);


	
	

	w = -1+ weit0(w1) * inx(x1) + weit1(w2) * iny(x2) + weit2(w3) * inz(x3);


	return w;





}

int main(void) {

	double *p;
	double rnd0[10][10] = { 0 };
	double rnd[3] = { 0 };
	double rnd1[1000] = { 0 };
	double a1 = 0;
	double a2 = 0;
	double a3 = 0;
	double x = 3;
	
	int a = 0;
	int i, j, k = 0;


	fx(&a); printf("a=%d\n", a);
	fx1(&rnd1[0],365); printf("a=%lf\n", rnd1[0]);
	printf("\n");
	rand();
	rand();
	rand();
	rand();
	for (i=0; i<3; i++){ rnd[i] = (double)rand() / RAND_MAX; }
	printf("proton =%lf\n", proton(rnd[0], rnd[1], rnd[2],a)); 
	printf("\n");
	
	

	printf("add =%lf\n",add(x));
	printf("add2 =%lf\n", add2(x));
	
	while (x >= 1)  {  x = add2(x); } 
	while (x <= 1) { x = add(x); }
		printf("add =%lf\n", add(x));
		printf("add2 =%lf\n", add2(x));
		printf("weit =%lf\n", weit(weit0((double)rand() / RAND_MAX), weit1((double)rand() / RAND_MAX),weit2((double)rand() / RAND_MAX),inx((double)rand() / RAND_MAX),iny((double)rand() / RAND_MAX),inz((double)rand() / RAND_MAX)));
		printf("weit0 =%lf\n", inx(x));
		printf("seeta =%lf\n", seeta(&x));
		printf("rnd0[][] =%lf\n", rnd0[3][3]);
		printf("data =%lf\n", data(x));
		printf("rnd =%lf\n", (double)rand() / RAND_MAX);
		
	int pc;
	scanf_s("%d", &pc);
}
