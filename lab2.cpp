// lab2.cpp: ���������� ����� ����� ��� ����������� ����������.
//


#include <iostream>




using namespace std;
string name;

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "������������ ������ �2"<< endl <<"����� ���������� ����������� ����� � ������� A[12], " << endl << "������� 15, �� �� ������� 30. ������� �� �� ����� ��������." << endl << endl;
	
	
	{int A[12] = {105}; // ��� ������
	
	int sum=0; // ������� ���-�� ������ (�.� 3� ������� ����)

		for(A[0]>104;A[0]<976;A[0]+=30){   //�������� ����� ����� *./ ������ ��� � ����� +30 � ��� ���� �� ������ �� 975
			cout << A[0] << " ";
		sum++;} // ������ ���, ����� ����������� ���� +1 � sum
		cout << endl << "���-�� ����������� �����:" << sum << endl;

			system("pause");
    return 0x1;
	
	}
	};



/////////   ��� ����������    \\\\\\\\\\\\\\\
��� ������� �������� ����������� ���������� �� ������ �������.
	//int n;
	//int sum=0; // ������� ���-�� ������ (�.� 3� ������� ����)
	//for(n>104;n<976;n+=30){   //�������� ����� ����� *./ ������ ��� � ����� +30 � ��� ���� �� ������ �� 975
	//		cout << n << " ";
	//	sum++;} // ������ ���, ����� ����������� ���� +1 � sum
	//	cout << endl << "���-�� ����������� �����:" << sum << endl;


//int n, *pn;
 //   pn=&n;