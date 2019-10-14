#include <iostream>
#include <conio.h>
using namespace std;

class functions{
public:
    void Body(){
        cout << " :: Welcome to CALCULATOR! ::" << endl;
    }
    int Addition(int x, int y){
        int ans = x + y;
        return ans;
    }
    int Subtraction(int x, int y){
        int ans = x - y;
        return ans;
    }
    int Multiplication(int x, int y){
        int ans = x * y;
        return ans;
    }
    int Division(int x, int y){
        int ans = x / y;
        return ans;
    }
};

int main(){
int func;
int x, y;
int t = 0;
functions key;
key.Body();
while(t == 0){
cout << "\n What function do you want to use? " << endl;
cout << "1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\nAnything else - Want to Exit\n\nInput: " << endl;
cin >> func;
cout << endl;

switch(func){

    case 1: 
	//Addition
        cout << "**ADDITION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " + " << y << " = ";
        cout << key.Addition(x, y);
        break;
    case 2: 
	//Subtraction
        cout << "**SUBTRACTION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " - " << y << " = ";
        cout << key.Subtraction(x, y);
        break;
    case 3: 
	//Multiplication
        cout << "**MULTIPLICATION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " x " << y << " = ";
        cout << key.Multiplication(x, y);
        break;
    case 4: 
	//Division
        cout << "**DIVISION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " / " << y << " = ";
        cout << key.Division(x, y);
        break;
    default:
	t=1;
        break;
}
}
}
