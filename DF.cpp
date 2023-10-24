#include <iostream>

using namespace std;

 struct student
{
	double correct_answers;
	double Number_of_students;
};
void students(double correct_answers, double Number_of_students , int x2 = 2 )
{
	double Multiplied1 = correct_answers * x2;
	double Multiplied2 = Number_of_students * x2;
	double Multiplied3 = Multiplied1 / Multiplied2;
	cout << "[>] Difficulty factor = " << Multiplied3 << endl;
}
int main()
{ // Abdualziz || twitter : @j60_ 
	cout << "[-] Difficulty factor calculator program [-]" << endl;
	struct student info;
	cout << "[+] Enter the number of students who answered correctly : ";
	cin >> info.correct_answers;
	cout << "[+] Enter the total number of students : ";
	cin >> info.Number_of_students;
	students(info.correct_answers, info.Number_of_students, 2);
	
	return 0;
}