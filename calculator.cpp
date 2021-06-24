#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int option()
{
    int option;
    cout<<endl<<"Choose from the option below:"<<endl;
    cout<<"1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for square root\n6 for factorial\n7 for exponential\n8 to quit the caculator\n"<<endl<<endl;
    cout<<"Enter your option: ";
    cin>>option;
    return option;
}

int main()
{
    int op;
    float a,b;
    int c;
    
      calc:   
      cout << endl << "CALCULATOR" << endl << endl <<"-------------------" <<endl;
      op = option();
      do
      {  
    switch (op) {
    
        case 1:
        {   
            cout << "Enter two numbers: ";
            cin >> a >> b ;
            cout << a << " + " << b << " = " << a+b <<endl;
            goto calc;
            break;
        } 
        case 2:
        {
            cout << "Enter two numbers: ";
            cin >> a >> b ;
            cout << a << " - " << b << " = " << a-b <<endl;
            goto calc;
            break;
        }
        case 3:
        {
            cout << "Enter two numbers: ";
            cin >> a >> b ;
            cout << a << " x " << b << " = " << a*b <<endl;
            goto calc;
            break;
        } 
        case 4:
        {
            cout << "Enter two numbers: ";
            cin >> a >> b ;
            cout << a << " / " << b << " = " << a/b <<endl;
            goto calc;
            break;
        }
        case 5:
        {
            cout << "Enter a number: ";
            cin >> a ;
            cout << "sqrt(" << a << ")" << " = " << sqrt(a) <<endl;
            goto calc;
            break;
        }
        case 6:
        {
            int fact=1;
            cout << "Enter a whole number: ";
            cin >> c;
            for(int i=c;i>0;i--)
            {
                fact = fact*i;
            }
            cout << c << "! = " << fact << endl; 
            goto calc;
            break;
        }
        case 7:
        {
            cout << "Enter a number: ";
            cin >> a;
            cout << "e^" << a << " = " << double(exp(a)) <<endl;
            goto calc;
            break;
        }
        case 8:
        {
             cout << "You have left the calculator!" <<endl;  
             break;
        }
        default:
        {
            cout << "Error!Choose from the options." <<endl;
            goto calc;
            break;
        }
    }
    cout << "-----------------------" <<endl;
    } 
    while(op!=8);
    return 0; 
}