#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int fact(int a)
{
	int F=1;
	for (int i=1; i<=a; i++)
	{
		F=F*i;
	}
	return F;
}
int main()
{
	int n;
	float an;
    cout<<"Este programa esta destinado a hacer una estimacion del seno de un angulo en radianes"<<endl;
    cout<<" y sabiendo cuantos terminos usar en la Serie de Maclaurin: "<<endl;
    cout<<"Por favor ingresa el valor del angulo en radianes: ";
    cin>>an;
    cout<<"Ahora ingresa el número de terminos para desarrollar la serie: ";
    cin>>n;
    float seno=0;
    for ( int k=0; k<n ; k++)
	{
       seno=seno+pow(-1, k)*pow(an, 2*k+1)/fact(2*k+1);
    }
    cout<<"El valor de sin("<<an<<") es igual a "<<seno<<endl;
   
   _getch();
}



