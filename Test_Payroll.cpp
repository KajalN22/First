//test_payroll

#include<iostream>
#include<string>
using namespace std;

class Employee{
	int empid;
	string name;
	protected: double salary;
	
	public: Employee(int eid,string nm,double s){
	     empid=eid;
		 name=nm;
		 salary=s;	
	
	}
	void calSal(){
		cout<<"Salary= "<<salary<<endl;
	}
	void display(){
		cout<<"Employee id: "<<empid<<endl<<"name: "<<name<<endl;
	}
	
};

class Manager:public Employee{
	string deptName;
	double incentive;
	public: Manager(int empid, string name,double salary,string deptName,double incentive):Employee(empid,name,salary)
	{
		this->deptName=deptName;
	    this->incentive= incentive;
	}
	void managerTask(){
		cout<<"Manager specific task"<<endl;
	}
	
	void calSal(){
		cout<<"Salary="<<(salary+incentive)<<endl;
	}
	
	void display(){
		//Employee::display();
		cout<<"Dept.Name: "<<deptName<<endl<<"Incentive"<<incentive<<endl;
	}
};

int main()
{
	Employee emp(01,"ABC",50000);
	emp.display();
	emp.calSal();
	
	Manager mgr(02,"XYZ",80000,"finance",10000);
	mgr.display();
	mgr.managerTask();
	mgr.calSal();
	return 0;
}
