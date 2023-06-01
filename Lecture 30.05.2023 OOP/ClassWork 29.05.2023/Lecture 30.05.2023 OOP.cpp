#include "Student.h"
int main()
{
	Student student;
	student.Print();
	Student student_2((char*)"Mihail", (char*)"Popov", 19);
	student_2.Print();
	Student student_3(student_2);
	student_3.Print();
	system("pause");
	system("cls");
	Student* students = new Student[5];
	students[0].SetStudent((char*)"Roman", (char*)"Dalin", 23);
	students[1].SetStudent((char*)"Nikita", (char*)"Losev", 47);
	students[2].SetStudent((char*)"Stanislav", (char*)"Gerasimov", 30);
	students[3].SetStudent((char*)"Vitaliy", (char*)"Malov", 25);
	students[4].SetStudent((char*)"Pavel", (char*)"Lobanov", 32);
	for (int i = 0; i < 5; ++i)
	{
		students[i].Print();
	}
	system("pause");
	system("cls");
	students->Sort_students_name(students, 5);
	cout << "\n==============SORT-NAME=============\n";
	for (int i = 0; i < 5; ++i)
	{
		students[i].Print();
	}
	system("pause");
	system("cls");
	students->Sort_students_avg_mark(students, 5);
	cout << "\n==============SORT-AVG_MARK=============\n";
	for (int i = 0; i < 5; ++i)
	{
		students[i].Print();
	}
	system("pause");

}