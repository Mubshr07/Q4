#include "q4.h"
#include <iostream>
#include <iomanip>
using namespace std;

q4::q4()
{

}

q4::q4(int anum, int adenom){
    int * reduced = reducedForm(anum, adenom);
    numerator = reduced[0];
    denominator = reduced[1];
    delete reduced;                //delete the array that was on the heap (garbage collect)
}


int* q4::reducedForm(int num, int denom){
    //first get the GCD for a and b
     int a = num, b = denom, c;
     int* ans = new int[2];          //array created on heap
      while ( a != 0 ) {
         c = a; a = b%a;  b = c;
      }
      //then reduce
      ans[0]= num/b;    //reduced numerator
      ans[1]= denom/b;  //reduced denominator
      return ans;
}




q4 q4::add(const q4 & r2)//read as result = (this + arg)
{
    int numeratorr = (numerator * r2.denominator) + (r2.numerator * denominator);
    int denominatorr = denominator * r2.denominator;
    q4 sum(numeratorr, denominatorr);
    return sum;
}

q4 q4::sub(const q4 & r2) //read as result = (this - arg)
{
    int numeratorr = (numerator * r2.denominator) - (r2.numerator * denominator);
    int denominatorr = denominator * r2.denominator;
    q4 sum(numeratorr, denominatorr);
    return sum;

}
q4 q4::mult(const q4 & r2) //read as result = (this * arg)
{
    int numeratorr = (numerator * r2.numerator);
    int denominatorr = denominator * r2.denominator;
    q4 sum(numeratorr, denominatorr);
    return sum;
}

q4 q4::divide(const q4 & r2) //read as result  (this / arg)
{
    int numeratorr = numerator * r2.denominator;
    int denominatorr = denominator * r2.numerator;
    q4 sum(numeratorr, denominatorr);
    return sum;
}
void q4::print()
{
    cout<< numerator<<"/" << denominator << endl;
}

void q4::printFloat()
{
    double f = (double) numerator/denominator;
    cout<<std::fixed <<std::setprecision(3) << f << endl;
}
