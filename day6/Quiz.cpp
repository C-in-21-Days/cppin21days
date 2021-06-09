//
// Created by Angela on 26.05.21.
//
#include "quiz.h"
//here is quiz.h
//
// Created by Angela on 29.05.21.
//
class Employe
{
private:
    int itsAge, itsSalary, itsYears;
public:
    int GetAge() const;
    void SetAge(int age);
    int GetSalary() const;
    void SetSalary(int salary);
    int GetYears() const;
    void SetYears(int yaers);
    float RoundedSalary();
};
//here starts quiz.cpp



#include <iostream>

int Employe::GetAge() const
{
    return itsAge;
}

void Employe::SetAge(int age)
{
    itsAge = age;
}

int Employe::GetSalary() const
{
    return itsSalary;
}

void Employe::SetSalary(int salary)
{
    itsSalary = salary;
}

int Employe::GetYears() const
{
    return itsYears;
}

void Employe::SetYears(int years)
{
    itsYears = years;
}

//task number 4 - round to the nearest
/*
float Employe::RoundedSalary()
{
    itsSalary/1000;
}
*/


int main()
{
    using namespace std;

    Employe Gosho,Pesho;
    Gosho.SetAge(25);
    Gosho.SetYears(2);
    Gosho.SetSalary(2000);
    cout<<"Gosho is "<<Gosho.GetAge()<<" years old"<<endl;
    cout<<"He works for "<<Gosho.GetYears()<<" years and his salary is "<<Gosho.GetSalary()<<" lv."<<endl;

    Pesho.SetAge(30);
    Pesho.SetYears(10);
    Pesho.SetSalary(5000);
    cout<<"Pesho is "<<Pesho.GetAge()<<" years old"<<endl;
    cout<<"He works for "<<Pesho.GetYears()<<" years and his salary is "<<Pesho.GetSalary()<<" lv."<<endl;

    return 0;
}

/* task 5 - changing the class, so you can create Employe
class Employee {
public:
    Employee(int age, int years, int salary); int GetAge() const;
    void SetAge(int age);
    int GetYearsOfService() const;
    void SetYearsOfService(int years); int GetSalary() const;
    void SetSalary(int salary);
private:
    int itsAge;
    int itsYearsOfService; int itsSalary;
};
 */
