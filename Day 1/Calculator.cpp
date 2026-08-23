#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,sum,sub,add,mul,div;
    cout<<"Enter the number given by the user:";
    cin>>a;

    cout<<"Enter the second number given by the user:";
    cin>>b;
    int ch;
    while (true)
    {
        cout<<"Enter the choice given by the user:"<<endl;
        cout<<"1.Addition"<<endl;
        cout<<"2.Subtraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"5.Exit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            sum=a+b;
            cout<<"the addition:"<<sum;
            break;
        case 2:
            sub=a-b;
            cout<<"the subtraction:"<<sub;
            break;
        case 3:
            mul=a*b;
            cout<<"the multiplication:"<<mul;
            break;
        case 4:
            if(b==0)
            {
                cout<<"Cannot divide by zero"; 
            }
            else
            {
                div=a/b;
                cout<<"the division:"<<div;
            }
            break;
        case 5:
            cout<<"Calculator is closed";
            return 0;
        default:
            cout<<"wrong input";
            break;
        }
    }
    return 0;
}