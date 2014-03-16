/**
*@file Task3_z_25
*@brief Solution (C++ code) of Task3.25 GL 
* (Розробити функцію, яка формує з заданого речення нове з інверсним порядком слів.
* Ввести з клавіатури послідовність речень. На основі розробленої функції надруку¬вати введені речення зі зворотним порядком слів.)
*Copyright 2014 by Roman Bojko
*/
#include <iostream>
using namespace std;
void reverse(char* sentence);
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	cout <<"Програма яка формує з заданого речення нове з інверсним порядком слів"<<endl;
	for(int i = 0; i < 70; ++i)
	{
		cout <<"-";
	}
	cout<<endl;
	int n = 0;
	do
	{
		cout << "Введіть кількість рядків: ";
		cin >> n;
	}
	while(n <= 0);
	if( n == 0 || n == 1)
	{
		cout << "Введіть свій рядок:" << endl;

	}else
	{
		cout << "Введіть ваші рядки:" << endl;
	}
	cin.clear(); 
	cin.sync();

	char* sentence = new char[256];
	
	for(int i = 0; i < n; i++)
	{
        cin.getline(sentence, 256);
		cout <<"-------------"<<endl;
		cout <<"Результат :"<<endl;
		reverse(sentence);
		cout <<"-------------"<<endl;
		cout <<"Введіть наступний рядок"<<endl;
		
	}

	    
	

	system("pause");
    delete[] sentence; 
}
void reverse(char* sentence)
{
    int index = strlen(sentence) - 1,hold,last = '\0';
    while (index >= 0)
    {
		while (index>=0 && sentence[index] != ' ')
        index--;

		hold = index - 1;

		index++;
		while (sentence[index] != last)
		{
			cout << sentence[index]; 
            index++;
        }

		last = ' '; 
        index = hold; 
        
		if(index >= 0)
		{
			cout<<" ";
		}
	}
	cout<<endl;
}
