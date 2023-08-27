#include<iostream>
using namespace std;

int main(){
    cout<<"=============================================================================================================================================\n";
    cout<<"\t\t\t\t\t\t\t\tCalculator\n";
    cout<<"=============================================================================================================================================\n";
    
    int n1,n2;
    cout<<"Enter 1st number: ";
    cin>>n1;
    cout<<"Enter 2st number: ";
    cin>>n2;
    cout << "Select an operation to be performed: \n";
    char choice;
    cout << "1. +\n";
    cout << "2. -\n";
    cout << "3. *\n";
    cout << "4. /\n";
    cin >> choice;
    cout << "=============================================================================================================================================\n";
    cout << "Result:\n";
    
    switch (choice) {
        case '+':
            cout << n1 << " + " << n2 << " = " << n1+n2 <<endl<<"\n";
            break;
        case '-':
            cout << n1 << " - " << n2 << " = " << n1 - n2 << endl<<"\n";
            break;
        case '*':
            cout << n1 << " * " << n2 << " = " << n1 * n2 <<endl<<"\n";
            break;
        case '/':
        if(n2!=0){
            cout << n1 << " / " << n2 << " = " << n1 / n2<<endl<<"\n";}
        else{
            cout << "Error: Division by zero is not allowed." << endl;
        }
            break;
        default:
            cout << "Invalid choice.\n"<<endl<<"\n";
    }
    return 0;
    
}