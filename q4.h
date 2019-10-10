#ifndef Q4_H
#define Q4_H


class q4
{
private:
    int numerator = 0;
    int denominator = 0;

public:
    q4();
    q4 (int =0, int=0);
    int * reducedForm(int num, int denom);

    q4 add(const q4 &);     //read as result = ("this"+  arg)
    q4 sub(const q4 &);     //read as result = ("this" -  arg)
    q4 mult(const q4 &);    //read as result = ("this" *  arg)
    q4 divide(const q4 &);  //read as result  ("this" /  arg)

    void print();
    void printFloat();
};

#endif // Q4_H
