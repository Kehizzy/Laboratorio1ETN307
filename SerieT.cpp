#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
 int main()
{
    int n;
    double x;
    double serie(double ,int );
    cout<<"Este programa esta destinado a hacer una estimacion del numero de Euler "<<endl;
    cout<<"elevado a un número 'x' sabiendo que cantidad de terminos de la Serie de Taylor usar: "<<endl;
    cout<<"Ingresa el valor del exponente 'x': ";
    cin>>x;
    cout<<"Ingresa el número de terminos a usar: ";
    cin>>n;
    cout<<"El resultado de e^"<<x<<" es: "<<serie(x, n);
    return 0;
}
double serie(double z, int a)
 {
     double T=1, frac;
     int i;
     frac=z;
     T+=frac;
     i=2;
     if (a==1)
         {
             T=1;
             return T;
         }
     while (i<=a)
        {
             frac=frac*z/i++;
             T+=frac;
        }
 return T;
}
