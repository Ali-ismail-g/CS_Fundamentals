#include <iostream>

using namespace std;
class Employee{
private:
    string name;
    int salary;
    static int total_salaries;
    static int highest_salary;
    static string highest_salary_employee;
public:
    Employee(){}
    Employee(string n,int s){
        name = n;
        salary = s;
        total_salaries += salary;

        if(salary > highest_salary){
            highest_salary = salary;
            highest_salary_employee = name;
        }
    }
    void set_name(string n){
        name = n;
    }
    void set_salary(int s){
        salary = s;
        if(salary > highest_salary){
            highest_salary = salary;
            highest_salary_employee = name;
        }
    }
    string get_name(){
        return name;
    }
    int get_salary(){
        return salary;
    }
    static int get_total_salaries(){
        return total_salaries;
    }
    static int get_highest_salary(){
        return highest_salary;
    }
    static string get_highest_salary_employee(){
        return highest_salary_employee;
    }
};
int Employee::total_salaries = 0;
int Employee::highest_salary = 0;
string Employee::highest_salary_employee = "";

int main()
{
    Employee e1("ali",200);
    Employee e2("omar",250);
    Employee e3("zizo",400);
    Employee e4("mahdy",100);
    Employee e5("sa3eed",600);
    cout<<"total salaries of all employees: "<<Employee::get_total_salaries()<<endl;
    cout<<"the highest salary of all employees is: "<<Employee::get_highest_salary()<<endl;
    cout<<"the name of the employee with the highest salary: "<<Employee::get_highest_salary_employee()<<endl;
    return 0;
}
