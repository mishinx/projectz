#include <iostream>
#include "func.h"
using namespace std;
int main()
{
	setlocale(LC_ALL,"Ukr"); 
	int a,b;
	cout<<"введіть два числа: \n";
	cin>>a>>b;

	cout<<"виберіть математичну операцію:\n"<<"1)додавання\n"<<"2)віднімання\n"<<"3)множення\n"<<"4)ділення\n"; 
	int selection;
	cin>>selection;
	switch(selection)
	{
	case 1:
		cout<<"результат додавання: "<<a+b;
	break;
	case 2:
		cout<<"результат віднімання: "<<a-b;
	case 3:
		cout<<"результат множення: "<<a*b;
	break;
	case 4:
		cout<<"результат ділення: "<<(double)a/b;
	break;
	break;
	default:
	cout<<"помилка пункт меню відсутній\n";
	}
	return 0;
}