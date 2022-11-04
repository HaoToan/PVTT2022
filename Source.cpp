#include <iostream>

using namespace std;
int cong(int a, int b){
return a+b;
};//SV A
int tru(int a, int b){
	return a-b;
}


int chia(int a, int b){
	return a / b;
}

int nhan(int a, int b){
	return a * b;
}

//Nguyen Thanh Vinh 
int demAm(int a[], int n){
	for(int i = 0;i < n; i++) {
		if(a[i] < 0)
			dem++;
	}
	return dem;
}

int main()
{	
	cout<<"NHToan";
	int a, b;
	cout << "CHUONG TRINH TINH TOAN CO BAN" << endl;
	//Cac ban code tai day
	int result = chia(a,b);
	cout << result <<endl;
	cout<<"Tong 2 so 3 va 5 la : " <<tong(3,5);
	cout << endl;
	cout <<"Het";
	system("pause");
	return 0;
}