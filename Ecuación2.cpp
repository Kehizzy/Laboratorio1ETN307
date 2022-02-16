#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main ()
{
	float a,b,c;
	float d;
	float x1,x2;
	float xreal, ximaginaria;
	cout<<"Para obtener las soluciones de tu ecuacion de segundo grado, por favor llena los siguientes valores."<<endl;
	cout<<"Introduce el coeficiente de 2do grado:  ";
	cin>>a;
	cout<<"Introduce el coeficiente de 1er grado:  ";
	cin>>b;
	cout<<"Introduce el termino independiente: ";
	cin>>c;
	
	if(a==0)
	{
		cout<<"Su ecuacion no es de segundo grado, es lineal y su solucion es: "<<endl;
		x1=-c/b;
		cout<<"x1 = "<<x1<<endl;
	}
	else
	{
		d=(b*b)-(4*a*c);
		
		if(d>0)
		{
			x1=(-b+sqrt(d))/(2*a);
		    x2=(-b-sqrt(d))/(2*a);
		    cout<<"Las soluciones de la ecuacion son:"<<endl;
		    cout<<"x1 = "<<x1<<endl;
		    cout<<"x2 = "<<x2<<endl;
		}
		else
		{
			if(d==0)
			{
				x1=-b/(2*a);
				cout<<"Ambas soluciones son iguales: "<<endl;
				cout<<"x1 = x2 = "<<x1<<endl;
			}
			else
			{
				xreal=-b/(2*a);
				ximaginaria=sqrt(-d)/(2*a);
				cout<<"Las soluciones son imaginarias: "<<endl;
				cout<<"x1 = "<<xreal<<"+"<<ximaginaria<<"i"<<endl;
				cout<<"x1 = "<<xreal<<"-"<<ximaginaria<<"i"<<endl;
			}
		}
	}
	
	system ("pause");
	return 0;
	
}
