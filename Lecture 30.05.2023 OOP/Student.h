#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip> 
#include <Windows.h>
#define BUFFER_SIZE 256

using namespace std;

class Student
{
private:
	char* name, * family;
	int age;
	int mark[3];
	float avg_mark;
public:
	Student();
	Student(char* _name,
		char* _family,int _age);
	Student(const Student& obj);
	~Student();
	void Print();
	void CalculateAVG();
	void SetStudent(char* _name,
		char* _family, int _age);
	void Sort_students_name(Student* mas,int size);
	void Sort_students_avg_mark(Student* mas,int size);
	void copy_tmp(Student student);
	Student* input_mas_students(int size);
};

