/**
*@file Task3_z_25
*@brief Solution (C++ code) of Task3.25 GL 
* (Розробити функцію, яка формує з заданого речення нове з інверсним порядком слів.
* Ввести з клавіатури послідовність речень. На основі розробленої функції надруку¬вати введені речення зі зворотним порядком слів.)
*Copyright 2014 by Roman Bojko
*/
#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	cout <<"Програма яка формує з заданого речення нове зi зворотним порядком слiв"<<endl;
	for( int i = 0; i < 80; ++i)
	{
		cout <<"-";
	}
	int n = 0;
	do
	{
		cout << "\nВведіть кiлькiсть рядкiв: ";
		cin >> n;
	}
	while(n <= 0);
	if( n == 0 || n == 1){
		cout << "Введiть свiй рядок:" << endl;

	}else{
		cout << "Введiть вашi рядки:" << endl;
	}


	cin.clear(); /**< Ця функція відновлює потік, якщо є помилка*/ 
	cin.sync(); /**< Очищається потік від наявних у ньому символів*/

	char **lines = new char*[n]; /**< Виділення пам’яті для масиву вказівників на n рядків*/
	for(int i = 0; i < n; i++)
	{
		lines[i] = new char[256]; /**< Виділення пам’яті для кожного рядка масиву*/
		cin.getline( lines[i], 256 );
	}
	cout <<"-------------"<<endl;
	cout <<"Результат :"<<endl;
	
	for( int i = 0; i < n; i++ ) 
	{	

		_strrev(*lines);
		cout <<"-------------"<<endl;
		cout << lines[i] << endl;
		cout <<"-------------"<<endl;
		
		
	}
	
	for( int i = 0; i < n; i++ )
		delete[] lines[i]; /**< Звільнення пам’яті від кожного рядка*/
	delete[] lines; /**< Звільнення пам’яті від масиву вказівників*/


	system("pause");
	return 0;
}

