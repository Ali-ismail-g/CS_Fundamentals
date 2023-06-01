#include <iostream>

using namespace std;
class Employee{
private:
    string name;
    int emp_id;
    double salary;
public:
    Employee(){}
    Employee(string name,int id,double salary){
        this->name = name;
        this->emp_id = id;
        this->salary = salary;
    }
    virtual double get_total_salary()=0;
    virtual void print()=0;
};
class Sales:public Employee{
private:
    float gross_sales;
    float commission_rate;
public:
    Sales(){}
    Sales(float gross_sales,float commission_rate){
        this->gross_sales = gross_sales;
        this->commission_rate = commission_rate;
    }
    void set_gross_sales(float g){
        gross_sales = g;
    }
    void set_commission_rate(float c){
        commission_rate = c;
    }
    virtual double get_total_salary(){
        return commission_rate*gross_sales;
    }
    virtual void print(){
        cout<<"print fn from Sales"<<endl;
    }

};
class Engineer:public Employee{
private:
    string speciality;
    int experience;
    int over_time_hours;
    float over_time_rate;
public:
    Engineer(){}
    Engineer(string speciality,int experience,int over_time_hours,float over_time_rate){
        this->speciality = speciality;
        this->experience = experience;
        this->over_time_hours = over_time_hours;
        this->over_time_rate = over_time_rate;
    }
    void over_time_hours_fn(int over_time){
        over_time_hours = over_time;
    }
    void over_time_rate_fn(float over_time_rate){
        over_time_rate = over_time_rate;
    }
    virtual double get_total_salary(){
        return experience*(over_time_hours*over_time_rate);
    }
    virtual void print(){
        cout<<"print fn from Engineer"<<endl;
    }

};
int main()
{
    Sales s1(3000,300);
    cout<<"get salary of sales  "<<s1.get_total_salary()<<endl;
    Engineer eng("CS",2,4,5.5);
    cout<<"get salary of engineer  "<<eng.get_total_salary()<<endl;
    return 0;
}
