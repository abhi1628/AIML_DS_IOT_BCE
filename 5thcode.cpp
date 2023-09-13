// Program to find greater number
#include<iostream>
using namespace std;
int main(){
	int a, b;
	cout << "Enter 1st no.";
	cin >> a;
	cout << "Enter 2nd no.";
	cin >> b;
	if(a > b){
		cout << a << " is greater than " << b;
	}
	else{
		cout << b << " is greater than " << a;
	}
}
