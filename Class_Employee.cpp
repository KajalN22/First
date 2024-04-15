#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	private: int empid;
			string name;
	protected : double salary;
	
	public:
		Employee()
		{
			empid = 1;
			name = "Shyam";
			salary = 50000;
		}
		Employee(int empid,string name,double salary)
		{
			this->empid = empid;
			this->name = name;
			this->salary = salary;
			
		}
		
		void calSalary()
		{
			cout<<"Salary : "<<this->salary<<endl;
		}
		
		void display()
		{
			cout<<"Emp id :"<<empid<<endl;
			cout<<"Name : "<<name<<endl;
		}
					
};

class Manager:public Employee
{
	private: double incentive;
			string depName;
	
	public:
		Manager()
		{
			incentive = 5000;
			depName = "Management";
			}
		
		Manager(int empid,string name,double salary,double incentive,string depName):Employee(empid, name, salary)
		{
			this->incentive = incentive;
			this->depName = depName;
			}	
		
		void Manager_Task()
		{
			cout<<".......Manager Task......"<<endl;
		}
		
		void display()
		{
			Employee::display();
			cout<<"incentive :"<<incentive<<endl;
			cout<<"depName:"<<depName<<endl;
		}
		
		void calSalary()
		{
			
			cout<<"Manager Salary : "<<(this->salary + incentive)<<endl;
		}
};

class SalesPerson:public Employee
{
	private : int pa,fa,ta;
	
	public:
		SalesPerson(){
			pa = 100;
			fa = 200;
			ta = 300;
			
		}
		
		SalesPerson(int empid,string name,double salary,int pa, int fa, int ta):Employee(empid, name, salary)
		{
			this->pa=pa;
			this->fa=fa;
			this->ta = ta;
		}	
		void SalesPersonTarget(){
			cout<<"......Sales Target......"<<endl;
		}
		
		void display()
		{
			Employee::display();
			cout<<"Petrol Allowance :"<<pa<<endl;
			cout<<"Food Allowance :"<<fa<<endl;
			cout<<"Travel Allowance :"<<ta<<endl;
		}
		
		void calSalary(){
			cout<<"SalesPerson Salary : "<<(this->salary + pa+fa+ta);
		}
};

int main2()
{
	cout<<"\n ---------Employee---------"<<endl;
	Employee eobj1;
	eobj1.display();
	eobj1.calSalary();
	cout<<"\n -------------------"<<endl;
	Employee eobj2(10,"Harry",80000);
	eobj2.display();
	eobj2.calSalary();
cout<<"\n ---------Manager---------"<<endl;
	Manager mgr;
	mgr.Manager_Task();
	mgr.display();
	cout<<"\n -------------------"<<endl;
	Manager mgr1(101,"Karan",20000,5000,"Tax");
	mgr1.Manager_Task();
	mgr1.display();
cout<<"\n ---------SalesPerson----------"<<endl;
	SalesPerson sobj;
	sobj.display();
	sobj.calSalary();
	cout<<"\n -------------------"<<endl;
	SalesPerson sobj2(301,"Suresh",30000,110,220,330);
	sobj2.display();
	sobj2.calSalary();
}
