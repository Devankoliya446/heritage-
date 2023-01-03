#include<iostream>
using namespace std;


class A{
	public:
		
		int id;
		char name[100];
		char role[100];
		int salary;
		char experience[100];
		char  comp_name[100];
		char address[100];
		char email[100];
		int contact;
		
		void setter1() {
			
			cout<<"Enter your id : ";
			cin>>id;
			
			cout<<"Enter your Name : ";
			cin>>name;
			
			cout<<"Enter your Role : ";
			cin>>role;
			
			cout<<"Enter your salary : ";
			cin>>salary;
			
			cout<<"Enter your Experience : ";
			cin>>experience;
			
			cout<<"Enter your comp_name : ";
	 		cin>>comp_name;
	 		
			cout<<"Enter your address : ";
			cin>>address;
			
			cout<<"Enter  your Email : ";
			cin>>email;
			
			cout<<"Enter your contact: ";
			cin>>contact;
		}
};
class B : public A {
	
	public:
		
		void getter1() {
			
			cout<<endl;
			cout<<"id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"role : "<<role<<endl;
			cout<<"salary : "<<salary<<endl;
		 	cout<<"experience : "<<experience<<endl;
	 		cout<<"name : "<<comp_name<<endl;
			cout<<"address : "<<address<<endl;
			cout<<"Email : "<<email<<endl;
			cout<<"contact : "<<contact<<endl;
		}
};
main() {
	
	B i;
	
	i.setter1();
	i.getter1();
}	
