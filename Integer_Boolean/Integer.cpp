// Integer_Boolean.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

//task3
void amount_of_kilobaits()
{
    int amount;
    cout << "task3"<<endl;
    cout << "enter amount of Baits: ";
    cin >> amount;
    amount = amount / 1024;
    cout << "amount of KBaits: " << amount << endl;
    cin.get();
    cin.get();
  


}
//task8
void reverse_your_number()
{
    int number;
    cout << "task8" << endl;
    cout << "enter your number(2n): ";
    cin >> number;
    int part1 = (number / 10)-((number % 10)/10);
    int part2 = number % 10;
    part2 = part2 * 10;
    number = part2 + part1;
    cout << "your reversed number: " << number<<endl;
    cin.get();
    cin.get();
}
//task 14
void change_position_of_last_and_first_part_of_the_number()
{
    int number;
    cout << "task14" << endl;
    cout << "enter your number(3n): ";
    cin >> number;
    int part1 = number % 10;
    part1 = 100 * part1;
    int part2 = (number / 10) - ((number % 10) / 10);
    number = part1 + part2;
    cout << "your changed number: " << number << endl;
    cin.get();
    cin.get();
}
//task 17
void find_hundreads()
{
    int number;
    cout << "task17" << endl;
    cout << "enter your number(4n): ";
    cin >> number;
    number = (number % 1000) / 100;
    cout << "your hundreads: " << number << endl;
    cin.get();
    cin.get();

}
//task30
void find_century()
{
    int year;
    cout << "task30" << endl;
    cout << "enter your year: ";
    cin >> year;
    int century = (year / 100) + 1;
    cout << "your century: " << century << endl;
    cin.get();
    cin.get();

}
int main()
{
    amount_of_kilobaits();//task3
    reverse_your_number();//task8
    change_position_of_last_and_first_part_of_the_number();//task 14
    find_hundreads();//task 17
    find_century();//task30
    return 0;
}

