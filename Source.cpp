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
<<<<<<< HEAD

//Nguyen Thanh Vinh 
int demAm(int a[], int n){
	for(int i = 0;i < n; i++) {
		if(a[i] < 0)
			dem++;
	}
	return dem;
}

=======
void ktAmDuong(int a){
	if(a>0)
		cout<<a<<" Đây là số dương"<<endl;
	if(a<0)
		cout<<a<<" Đây là số âm"<<endl;
	else
		cout<<a<<" Số không âm không dương =]]";
}
>>>>>>> KTAmDuong
int main()
{
	cout<< "Ngoc Phu";
	int a, b;
	cout << "CHUONG TRINH TINH TOAN CO BAN" << endl;
	//Cac ban code tai day
	int result = chia(a,b);
	cout << result <<endl;
	cout<<"Tong 2 so 3 va 5 la : " <<tong(3,5);
	cout << endl;
	cout <<"Het";S
	system("pause");
	ktAmDuong(6);
	ktAmDuong(-2);
	ktAmDuong(0);
	return 0;
}