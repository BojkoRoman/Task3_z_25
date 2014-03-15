/**
*@file Task3_z_25
*@brief Solution (C++ code) of Task3.25 GL 
* (��������� �������, ��� ����� � �������� ������� ���� � ��������� �������� ���.
* ������ � ��������� ����������� ������. �� ����� ���������� ������� ����������� ������ ������� � ��������� �������� ���.)
*Copyright 2014 by Roman Bojko
*/
#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	cout <<"�������� ��� ����� � �������� ������� ���� �i ��������� �������� ��i�"<<endl;
	for( int i = 0; i < 80; ++i)
	{
		cout <<"-";
	}
	int n = 0;
	do
	{
		cout << "\n������ �i���i��� ����i�: ";
		cin >> n;
	}
	while(n <= 0);
	if( n == 0 || n == 1){
		cout << "����i�� ��i� �����:" << endl;

	}else{
		cout << "����i�� ���i �����:" << endl;
	}


	cin.clear(); /**< �� ������� �������� ����, ���� � �������*/ 
	cin.sync(); /**< ��������� ���� �� ������� � ����� �������*/

	char **lines = new char*[n]; /**< �������� ����� ��� ������ ��������� �� n �����*/
	for(int i = 0; i < n; i++)
	{
		lines[i] = new char[256]; /**< �������� ����� ��� ������� ����� ������*/
		cin.getline( lines[i], 256 );
	}
	cout <<"-------------"<<endl;
	cout <<"��������� :"<<endl;
	
	for( int i = 0; i < n; i++ ) 
	{	

		_strrev(*lines);
		cout <<"-------------"<<endl;
		cout << lines[i] << endl;
		cout <<"-------------"<<endl;
		
		
	}
	
	for( int i = 0; i < n; i++ )
		delete[] lines[i]; /**< ��������� ����� �� ������� �����*/
	delete[] lines; /**< ��������� ����� �� ������ ���������*/


	system("pause");
	return 0;
}

