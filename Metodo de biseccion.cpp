#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define INTERVALO 10
void tabula (double a, double b);
double f(double x);
int main ()
{
	printf("Ingrese el intervalo inicial [a,b]\n");
	double a,b, tolerancia;
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	tabula(a,b);
printf("\n Escoja el intervalo adecuado\n");
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	double xr;
	if(f(a)*f(b)>0)
	{
		printf("No se puede aplicar el metodo de la bisección");
		printf("Porque f(%f) y f(%f)tienen el mismo signo",a,b);
 
	}
	else
	{
		printf("Ingrese la tolerancia\n");
		printf("Tolerancia= ");
		scanf("%lf",&tolerancia);
		printf("a\tb\t x\t\tf(a)\tf(b)\tf(x)\n");
		do
		{
			xr=(a+b)/2.0;
			printf("%f %f %f  %f  %f  %f\n",a,b,xr,f(a),f(b),f(xr));
		if(fabs(f(xr))<=tolerancia)
			{
				printf ("Para una tolerancia de:%f la raiz de f es :%10.9f ",tolerancia,xr);
				break;
			}	
			else
			{
				if(f(xr)*f(a)>0)
				{
					a=xr;
				}
				else if (f(xr)*f(b)>0)
				{
					b=xr;
				}
 
			}
 
		}while(1);
	}
	getchar();
	getchar();
	return 0;
 
}
 
void tabula (double a,double b)
{
	int  puntos= INTERVALO +1;
	double ancho=(b-a)/INTERVALO; 
	printf("\n \t  f \t f(x)\n");
	int i;
	for( i=0 ;i < puntos; i++)
	{
		printf("\t %f \t %f \n",a ,f(a));
		a=a+ancho;
	}
}
double f(double x)
{
	return  exp(-1*x)-cos(3*x)-0.5;
}
