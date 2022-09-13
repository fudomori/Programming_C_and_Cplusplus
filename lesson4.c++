#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	double a, b, c; //коэффициенты квадратного уравнения
	
	cout <<"Введите три коэффициента уравнения (a b c):" <<endl;
	
	cin  >>a >>b >>c;
	
	cout <<"Уравнение имеет вид: " <<a <<"*x*x + " <<b<<"*x + " <<c <<" = 0" <<endl;
	
	double D = b*b - 4*a*c; //Вычисляем дискриминант
	
	if (a==0) //Это вообще не квадратное уравнение
	{
		cout <<"Данное уравнение не является квадратным! "<<endl;
	}
	else if (D>0) //Если дискриминант больше нуля, то есть два различных вещественных корня 
	{
		double x1 = (-b+sqrt(D)) / (2*a);
		double x2 = (-b-sqrt(D)) / (2*a);
		cout <<"Уравнение имеет два различных вещественных корня: " <<endl;
		cout <<"x1= " <<x1 <<"  x2= " <<x2 <<endl;
	}
	else if (D==0)
	{
		double x12 = -b/(2*a);
		cout <<"Уравнение имеет один вещественный корень: " <<endl;
		cout <<"x12= " <<x12 <<endl;
	}
	else
	{
		cout <<"У уравнения нет вещественных решений!" <<endl;
	}
	
	return 0;
}
