#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAXSIZE 8
float a,b,h,x[20],y[20];
int n;
double H[MAXSIZE][MAXSIZE+2 ] = {{2, 1,1}, {6, 1, 4,1}, {8, 1, 3,3,1}, {90, 7,
32, 12,32,7}, {288, 19, 75, 50,50,75,19}, {840, 41, 216, 27, 272,27,216,41}, 
{17280, 751, 3577,1323, 2989,2989,1323,3577,751},{28350,989,5888,-928,10496,-928,5888,989}};
float f(float x)
{
	return sqrt(x);
}
 input()
{
    printf("Nhap a: ");
    scanf("%f",&a);
    printf("Nhap b: ");
    scanf("%f",&b);
    printf("Nhap n: ");
    scanf("%d",&n);
    while(n<4||n>8)
      {printf("Nhap lai n:");
      scanf("%d",&n);
      }
    h=(b-a)/n;
    printf("Gia tri y[i] tuong ung: ");
	for(int i=0;i<=n;i++)
	{
		x[i]=a+i*h;
		y[i]=f(x[i]);
		printf("\n%f",y[i]);

	}
 }  
double cau()
{
	double sum=0;
	for(int i=0;i<=n;i++)
	{ 
		double x = H[n-1][i+1]  ; 
		sum += x * y[i]; 
	}
	sum = (sum *(b-a))/ H[n-1][0] ;
	return sum;
} 
int main()
{
	input();
	double re = cau()   ;
	printf("\nKet qua tich phan:");
	printf("%f",re);
	return 0;
 } 
