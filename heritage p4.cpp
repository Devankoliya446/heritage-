#include <iostream>

using namespace std;

class Number{
	
        private:

             int a;

        public:

    void getnumber(void){
    	
        cout << "Enter number : ";
        cin >> a;

    }
           

      int returnnumber(void){
      	
           return a;
      }
};

class Square : public Number {
	
        public:
        	
            int getSquare(void){
            	
        int a, sqr;
        a= returnnumber();
        sqr = a * a;
        return sqr;
    }
};

class Cube : public Number {
	
        public:
        	
    int getCube(void){
    	
        int a, cube;
        a = returnnumber();
        cube = a * a * a;
        return cube;
    }
};

main(){
	
    Square objS;
    Cube objC;
    int sqr, cube;

    objS.getnumber();
    sqr = objS.getSquare();
    cout <<"Square of "<<objS.returnnumber()<<" is : "<<sqr<<endl;

    objC.getnumber();
    cube = objC.getCube();
    cout<<"Cube"<<cube<<endl;

}
