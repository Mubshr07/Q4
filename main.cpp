#include <iostream>
#include <q4.h>
#include <conio.h>
#include <stdlib.h>
#include <limits>
using namespace std;

int main()
{
    char repeatAnswer = 'n';
    int numerator = 0;
    int donumerator = 0;
    int numerator2 = 0;
    int donumerator2 = 0;
    do{
        cout <<"\t\tWelcome to Q4 Solution" << endl;
        cout<<"\n\t We are going to ask you to enter two numerator and two denomirator \n\n \t\t Press y for yes :\t";

        while(!(cin >> repeatAnswer)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            while (cin.get() != '\n'){    continue; }
            cout << "\n\tInvalid input.  Try again: ";
        }



        if(repeatAnswer == 'y' || repeatAnswer == 'Y')
        {
            cout<<"\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" ;
            cout<<"\t Type First Numerator here : \t";
            while(!(cin >> numerator)){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (cin.get() != '\n'){    continue; }
                cout << "\n\tInvalid input.  Try again: ";
            }
            cout<<"\t Type First Donumerator here : \t";
            while(!(cin >> donumerator)){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (cin.get() != '\n'){    continue; }
                cout << "\n\tInvalid input.  Try again: ";
            }

            cout << "\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n" <<endl;

            cout<<"\t Type Second Numerator here : \t";
            while(!(cin >> numerator2)){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (cin.get() != '\n'){    continue; }
                cout << "\n\tInvalid input.  Try again: ";
            }
            cout<<"\t Type Second Donumerator here : \t";
            while(!(cin >> donumerator2)){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (cin.get() != '\n'){    continue; }
                cout << "\n\tInvalid input.  Try again: ";
            }

            cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" ;

            q4 q4_object1(numerator,donumerator);
            cout<<"\n\n\nPrint First Fractional Number";
            cout<<"\n\t in Fraction Form \t: \t";
            q4_object1.print();
            cout<<"\t in Floating Point Form : \t";
            q4_object1.printFloat();
            cout << "==========================================================" <<endl;

            q4 q4_object2(numerator2,donumerator2);
            cout<<"Print second Fractional Number";
            cout<<"\n\t in Fraction Form \t: \t";
            q4_object2.print();
            cout<<"\t in Floating Point Form : \t";
            q4_object2.printFloat();
            cout<< "==========================================================" <<endl<<endl<<endl<<endl;

            cout <<"The addition of these two fractions is: " ;
            cout<<"\n\t in Fraction Form \t: \t";
            q4 ans = q4_object1.add(q4_object2);
            ans.print();
            cout<<"\t in Floating Point Form : \t";
            ans.printFloat();
            cout << "=============================" <<endl;

            cout <<"The subtraction of these two fractions is: ";
            cout<<"\n\t in Fraction Form \t: \t";
            ans = q4_object1.sub(q4_object2);
            ans.print();
            cout<<"\t in Floating Point Form : \t";
            ans.printFloat();
            cout << "==========================================================" <<endl;

            cout <<"The multiplication of these two fractions is: ";
            cout<<"\n\t in Fraction Form \t: \t";
            ans = q4_object1.mult(q4_object2);
            ans.print();
            cout<<"\t in Floating Point Form : \t";
            ans.printFloat();
            cout << "=========================================================="<<endl;

            cout <<"The division of these two fractions is: ";
            ans = q4_object1.divide(q4_object2);
            cout<<"\n\t in Fraction Form\t : \t";
            ans.print();
            cout<<"\t in Floating Point Form : \t";
            ans.printFloat();
            cout << "==========================================================" <<endl<<endl<<endl;

            system("pause");

        }
        else {
            system("cls");
            cout<<"\nThis program is not designed to handle \'NO\'";
        }

        cout<<"\n\n Do you want to Re-Start this Activity??\n\t Press y for Yes or any key for program termination :\t";
        cin>>repeatAnswer;
        if(repeatAnswer == 'y')
        {
            system("cls");
        }
    }while(repeatAnswer == 'y' || repeatAnswer == 'Y');

    return 0;
}
