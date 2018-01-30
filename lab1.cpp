// lab1.cpp: определ€ет точку входа дл€ консольного приложени€.
//


#include <iostream>
#include <Windows.h> // локализаци€ (ввод и вывод данных на русском)

using namespace std;



int main()

{
setlocale(LC_ALL, "Russian");

	double x, y;
	cout << endl << "________________________________________________________________________________" << endl;
	cout << "b = 1 + |y - x| + (y - x)^2 + |y - x|^3" << endl;
	cout << "                 ----------   ---------" << endl;
	cout << "                     2            3    " << endl;
	cout << "________________________________________________________________________________" << endl;
	



	cout << "¬ведите x:";
	cin >> x;
	cout << "¬ведите y:";
	cin >> y;
	double answ = 1+ abs (y-x) + pow ((y-x),2)/2 + pow ((y-x),3)/3;
	cout << "ќтвет:" << answ << endl;
	
	cin.get();
	system ("pause");
	return 0x1;
}

