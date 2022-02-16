#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<vector>
#include<cctype>
#include<cstring>
#include<utility>
#include<cstdlib>
#include<iomanip>
#include<iostream>
#include<algorithm>
using namespace std;
double a,b,c,d;

int main()
{
	cout<<"Para obtener las soluciones de tu ecuacion de tercer grado, por favor llena los siguientes valores."<<endl;
	cout<<"Introduce el coeficiente de 3er grado:  ";
	cin>>a;
	cout<<"Introduce el coeficiente de 2do grado:  ";
	cin>>b;
	cout<<"Introduce el coeficiente de 1er grado:  ";
	cin>>c;
	cout<<"Introduce el termino independiente: ";
	cin>>d;
    double x1,x2,x3;
    double A=b*b-3*a*c;
    double B=b*c-9*a*d;
    double C=c*c-3*b*d;
    double del=B*B-4*A*C;

    if(A==B&&A==0)
    {
        x1=x2=x3=-b/(3*a);
    }
	else
	{ if(del==0)
	  {
        x1=-b/a+B/A;
        x2=x3=(-B/A)/2;
      }
	  else 
	  {   if(del<0)
	    {
        double T=(2*A*b-3*a*B)/(2*A*sqrt(A));
        double xtt=acos(T);
        double xt=xtt/3;
        x1=(-b-2*sqrt(A)*cos(xt))/(3*a);
        x2=(-b+sqrt(A)*(cos(xt)+sqrt(3)*sin(xt)))/(3*a);
        x3=(-b+sqrt(A)*(cos(xt)-sqrt(3)*sin(xt)))/(3*a);
        }
	   }
	}
	cout<<"Las soluciones son: "<<endl;
    cout<<"x1 = "<<x1<<endl;
	cout<<"x2 = "<<x2<<endl;
	cout<<"x3 = "<<x3<<endl;
    system ("pause");
	return 0;
}
