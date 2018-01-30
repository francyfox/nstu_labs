// lab3.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
#include <math.h>
#include <io.h>


using namespace std;


int main()
{

setlocale(LC_ALL, "RUS");


cout << "Лабораторная работа №3"<< endl;
cout << "Дан массив a из n действительных чисел. " << endl;
cout << "Используя указатели, вычислить:" << endl;
cout << "    n-1" << endl;
cout << "   2(sum ai)^2" << endl;
cout << "    i=0" << endl;

int n;
//int *ptrn = &n;



cout << "Введите число n:";
cin >> n;



   cout << "\n";
n--;
	cout << "sum = ";
 int sum=0;
 int i;
   for (i = 0; i <=n; i++)
    {
 
	   sum+=i;
        cout << i << " + ";
		
       
    }
 double answ = (2*(i))*(2*(i));
     cout << "0 = " << sum;
   cout << "\n";

cout << "Ответ: "<< answ << endl;

    system("pause"); // - это пауза 



	return 0x1;
}

