// Boolean.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
//task8
void checking_number_not_div_2()
{
	int numberA;
	int numberB;
	cout << "task8"<<endl;
	cout << "enter your numberA: ";
	cin >> numberA;
	cout << "enter your numberB: ";
	cin >> numberB;
	if ((numberA % 2!=0) && (numberB % 2!=0)) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	cin.get();
	cin.get();
	
}
//task15
void checking_3_nubers_for_2_pozitive()
{
	int A;
	int B;
	int C;
	cout << "task15" << endl;
	cout << "enter your number A: ";
	cin >> A;
	cout << "enter your number B: ";
	cin >> B;
	cout << "enter your number C: ";
	cin >> C;
	if ((A > 0 && B > 0 && C < 0) || (A < 0 && B > 0 && C < 0) || (A < 0 && B > 0 && C > 0)) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	cin.get();
	cin.get();
	
}
//task22
void checking_progression_3n()
{
	int num;
	cout << "task15" << endl;
	cout << "enter your number(3n): ";
	cin >> num;
	int a=	num / 100;
	int c = num % 10;
	int b = ( num % 100)/10;
	cout << a << " " << b << " " << c << endl;
	if (((b == a - 1) && (c == b - 1)) || ((a == b - 1)&& (b == c - 1))) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	cin.get();
	cin.get();

}
//task30
void chech_right_triangle()
{

	int A;
	int B;
	int C;
	cout << "task30" << endl;
	cout << "enter your side1: ";
	cin >> A;
	cout << "enter your side2: ";
	cin >> B;
	cout << "enter your side3: ";
	cin >> C;
	if ((A ==B)&&(B==C)&&(C==A)) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	cin.get();
	cin.get();
}
//task33
void check_triangle()
{
	int A;
	int B;
	int C;
	cout << "task30" << endl;
	cout << "enter your side1: ";
	cin >> A;
	cout << "enter your side2: ";
	cin >> B;
	cout << "enter your side3: ";
	cin >> C;
	if ((A <(C+ B)) && (B <(A+ C)) && (C< (B+A))) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	cin.get();
	cin.get();
}

int main()
{
	checking_number_not_div_2();//task8
	checking_3_nubers_for_2_pozitive();//task15
	checking_progression_3n();//task22
	chech_right_triangle();//task30
	check_triangle();//task33

	return 0;
}


