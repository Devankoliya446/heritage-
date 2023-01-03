#include<iostream>
using namespace std;


class A{
	
	public:
		
		int id;
		char name[100];
		char role[100];
		char salary[100];
		char experience[100];
		char comp_name[100];
		char address[100];
		char email[100];
		int contact;
		
	public:

		void Read() {
			
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
			
			cout<<"Enter your comp name : ";
		    cin>>comp_name;
		    
		    cout<<"Enter your address : ";
		    cin>>address;
		    
		    cout<<"Enter your Email : ";
			cin>>email;
			
			cout<<"Enter your contact : ";
			cin>>contact;
		}
};
class B{
	
	public:
	
     	void Print1() {
		   	 

	}	
};
 
class C : public A , public B {
	
	public:
		 
	    void Print2() {
		
	    	cout<<"Enter id : "<<id<<endl;
		    cout<<"Enter Name : "<<name<<endl;
		    cout<<"Enter role : "<<role<<endl;
		    cout<<"Enter salary : "<<salary<<endl;
		    cout<<"Enter experience : "<<experience<<endl;
	 	    cout<<"Enter comp name : "<<comp_name<<endl;
		    cout<<"Enter address : "<<address<<endl;
		    cout<<"Enter email : "<<email<<endl;
		    cout<<"Enter contact : "<<contact<<endl;

	}		
};
main() {
	C obj;
	
	obj.Read();
	obj.Print2();

}
