#include <iostream>

using namespace std;
int cong(int a, int b){
return a+b;
};//SV A
int tru(int a, int b);//SV B
int nhan(int a, int b){
	return a * b;
}
int chia(int a, int b);//SV D
int main()
{
	int a, b;
	cout << "CHUONG TRINH TINH TOAN CO BAN" << endl;
	//Cac ban code tai day
	cout<<"Tong 2 so 3 va 5 la : " <<tong(3,5);
	cout << endl;
	system("pause");
	return 0;
}