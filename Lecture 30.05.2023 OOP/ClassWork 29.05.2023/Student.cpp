#include "Student.h"

Student::Student()
{
	name = new char[BUFFER_SIZE];
	family = new char[BUFFER_SIZE];
	name = (char*)"Ivan";
	family = (char*)"Petrov";
	age = 18 + rand() % (40 - 18);
	for (int i = 0; i < 3; ++i)
	{
		mark[i] = 1 + rand() % (12 - 1);
	}
	CalculateAVG();
}

Student::Student(char* _name, char* _family, int _age)
{
	name = _name;
	family = _family;
	age = _age;
	for (int i = 0; i < 3; ++i)
	{
		mark[i] = 1 + rand() % (12 - 1);
	}
	CalculateAVG();
}

Student::Student(Student& obj)
{
	name = obj.name;
	family = obj.family;
	age = obj.age;
	for (int i = 0; i < 3; ++i)
	{
		mark[i] = obj.mark[i];
	}
	avg_mark = obj.avg_mark;
}

void Student::Print()
{
	cout << "\tName : " << name << endl <<
		"\tFamily : " << family << endl <<
		"\tAge : " << age << endl <<
		"\tMarks : ";
	for (int i = 0; i < 3; ++i)
	{
		cout << mark[i] << ' ';
	}
	cout << endl << "\tAverage mark : " << setprecision(3) <<
		avg_mark << endl << "\n=============================\n";

}

void Student::CalculateAVG()
{
	float sum = 0;
	for (int i = 0; i < 3; ++i)
	{
		sum += mark[i];
	}
	avg_mark = sum / 3;
}

void Student::SetStudent(char* _name, char* _family, int _age)
{
	name = _name;
	family = _family;
	age = _age;
	for (int i = 0; i < 3; ++i)
	{
		mark[i] = 1 + rand() % (12 - 1);
	}
	CalculateAVG();
}

void Student::Sort_students_avg_mark(Student* mas, int size)
{
	if (!mas)
	{
		cout << "Error\n";
		exit(0);
	}
	else
	{
		for (int i = 0; i < size; ++i) {
			bool flag = false;
			for (int j = 0; j < size - i - 1; ++j) {
				if (mas[j].avg_mark > mas[j + 1].avg_mark) {
					Student tmp = mas[j + 1];
					mas[j + 1] = mas[j];
					mas[j] = tmp;
					flag = true;
				}
			}
			if (flag == false) break;
		}
	}
}

void Student::Sort_students_name(Student* mas, int size)
{
	if (!mas)
	{
		cout << "Error\n";
		exit(0);
	}
	else
	{
		for (int i = 0; i < size; i++) {
			for (int j = size - 1; j > i; j--) {
				if (strcmp(mas[j - 1].name, mas[j].name) > 0) {
					Student tmp = mas[j - 1];
					mas[j - 1] = mas[j];
					mas[j] = tmp;
				}
			}
		}
	}
}
