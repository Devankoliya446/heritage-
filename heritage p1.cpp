#include<iostream>

using namespace std;

class Mother{
	
	public:
	
	   void fun1(){
	   	
	   	cout<<"Hello beta"<<endl; 
	   }
};

class Daughter : public Mother{
	
	public:
		
	    void fun2(){
	    	
 	    	cout<<"Hello mummy"<<endl;
	    }
			
};

main(){
	
	Daughter obj;
	
	obj.fun2();
	
} 
