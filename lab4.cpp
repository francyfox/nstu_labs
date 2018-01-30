// lab4.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
#include <string> 
#include <math.h>    // матан
#include <iomanip>

using namespace std;


// i - столбик | j - строка
int i, j;

//ответ с умножением (T{элемент} < 0)
int line1 = 1;
int line2 = 1;
int line3 = 1;

const unsigned int DIM1 = 3;
const unsigned int DIM2 = 4;
//	{1, 2, 3, 4},
//{5, 6, 7, 8},
//{9, 10, 11, 12}
int T[DIM1][DIM2]={
{8, -2, 4, 7},
{6, 1, 5, -3},
{9, 6, -3, 2}
};

int main()
{//
	setlocale(LC_ALL, "RUS");
		 for (int i = 0; i < DIM1; i++) {

        for (int j = 0; j < DIM2; j++) {
		
            cout << setw(4) << T[i][j];
		
		                               }

        cout << endl;
                                    } 
		 cout << endl;

		 i=0;
	for (int j = 0; j < DIM2; j++) {
			 if (T[i][j] < 0)
				 break;
					  line1 *= T[i][j];
			   cout << setw(4) << T[i][j];
			  
			   
		}
		       cout << endl;
			   ////////////
			   	       i=1;
	for (int j = 0; j < DIM2; j++) {
			 if (T[i][j] < 0)
				 break;
			 	 
					  line2 *= T[i][j];
			   cout << setw(4) << T[i][j];
			  
			   
		}
		       cout << endl;
			   ////////////
			   	       i=2;
	for (int j = 0; j < DIM2; j++) {
			 if (T[i][j] < 0)
				 break;
			  if (T[i][j] > 1){
				  line3 *= T[i][j];}
			   cout << setw(4) << T[i][j];
			  
			   
		}
		       cout << endl;
			   ////////////


		 

		cout << "Ответ 1 строки: " << line1 <<endl; // 8,30,54
		cout << "Ответ 2 строки: " << line2 <<endl;
		cout << "Ответ 3 строки: " << line3 <<endl;

     system ("pause");
	return 0x1;
}//