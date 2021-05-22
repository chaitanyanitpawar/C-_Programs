/*Assignment 2
Chaitanya Nitin Pawar
SE_B_48
Problem statement: Develop a program in c++ to create a database of student's information system containing the following information: Name, Roll no, class, division, date of birth, blood group, contact address, telephone number, driving license no. and other. Construct the database with suitable member functions. Make use of constructor, default constructor, copy constructor, destructor, static member function, friend class, this pointer, inline code and dynamic memory allocation operator new and delete as well as  exception handling
*/


#include <iostream>
#include <string>
using namespace std;
class student
{
private:
	string name, DoB, blood_grp, addr, year_class, mob;
	int  div;
	int *rollno;     //declaration of pointer

public:
	friend class faculty; //faculty class is friend of student class
	//default constructor
	student()
{  rollno = new int; //reserve single location for rollno
	  *rollno = div = -1;
name = blood_grp = DoB = addr = year_class = mob = "";
   }
	// destructor
	~student()
	{
		deleterollno; //deallocation of rollno
	}
	//function to add information in student database
	voidadd_data()
	{
		cout<< "\n Enter Student Information: ";
		cout<< "\n Enter Name: "<<endl;
		cin.ignore(); //to clear input buffer
		getline(cin,name);
		cout<< "Enter Roll_no:";
		cin>> *rollno;
		cout<< "Enter Year(SE/TE/BE):";
		cin>>year_class;
		cout<< "Enter Division (1/2/3/4/5):";
		cin>> div;
		cout<< "Enter DoB: ";
		cin>>DoB;
		cout<< "Enter Blood group: ";
		cin>>blood_grp;
		cout<< "Enter Mobile No :";
		cin>> mob;
		cout<< "Enter Address:";
		cin>>addr;
	}
	// function to display student information
	void display()
	     {
		cout<< "\n-----------------------------------------------";
			cout<< "\nName               :"<<name;
		cout<< "\nRoll_no            :"<<*rollno;
		cout<< "\nYear(SE/TE/BE)     :"<<year_class;
		cout<< "\nDiv(1/2/3/4/5)     :"<<div;
		cout<< "\nDoB                :"<<DoB;
		cout<< "\nBlood group        :"<<blood_grp;
		cout<< "\nMobile no          :"<<mob;
		cout<< "\nAddress            :"<<addr;
		cout<< "\n-----------------------------------------------";
	     }
	//static member function
	static void header()
	{
		cout<<"\n * * * Student Information System * * *";
	}
}; // student class ends here
//class faculty
class faculty
{
private:
	int id;
public:
	
	faculty()
    {
		id=000;
    }
	
	faculty(const faculty &f1)
	{
		id = f1.id;
	}
	
	voidf_display(student &obj,intf_d)
	{
		try
		{
			if (obj.div == f_d)
				obj.display();
			else
				throw ( obj.div);
		}
		catch (int x)
		{
			cout<< "\n Invalid Division/ You are not teaching to thid Division.....";
		}
	}
}; 
int main(){
	studentst[5];
	faculty f;
	intch=0,count=0;
	do
	{
			cout<< "\n * * * * Student Information System * * * * ";
		cout<< "\n * * * Menu * * *";
		cout<< "\n 1. Add Information ";
		cout<< "\n 2. Display Information";
		cout<< "\n 3. Faculty wise Information";
		cout<< "\n 4. Exit ";
		cout<< "\n Enter choice: ";
		cin>>ch;

		switch (ch)
		    {
			case 1:
			st[count].add_data();
			count++;
			break;

		case 2:
			for ( int j = 0; j<count; j++)
			{
				student::header(); 
				st[j].display();
			}
			break;

		case 3:
			intf_div;
			cout<< "\n Enter Division of Faculty: ";
			cin>>f_div;
			for(int j=0; j<count;j++)
			{
				cout<<"\n* * * Student Information System ( Faculty RAS) * * *";
				f.f_display(st[j],f_div);
			}
		break;

		case 4:
			exit(0); 

		    }
	} while ( ch != 4);

	return 0;
}

