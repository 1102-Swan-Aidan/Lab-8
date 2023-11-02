#include "fraction.h"

Fraction::Fraction(){
    numerator = 0;
    denominator = 0;
}
Fraction::Fraction(int n, int d){
    numerator =n;
    denominator = d;
}
Fraction::Fraction(const Fraction& rhs){
    numerator = rhs.numerator;
    denominator = rhs.denominator;
}

int Fraction::getNumerator(){
    return numerator;
}
int Fraction::getDenominator(){
    return denominator;
}

void Fraction::setNumerator(int n){
    numerator = n;
}
void Fraction::setDenominator(int d){
    denominator = d;
}
int Fraction::findGCF(){
    for(int i = numerator; i >1; i--){
        if(denominator % i == 0 && numerator % i == 0){
            return i;
        }
    }
    return 1;
}
void Fraction::operator+=(Fraction rhs){ //make sure sum is always on left of +=
    if(denominator== rhs.getDenominator() ){
        numerator += rhs.getNumerator();
    }
    else{
        Fraction tempCurrent(numerator, denominator);
        //different denominators; easiest solution is to multiply a by b's denom and vice versa
        //construct tempcurrent to make math easier
        tempCurrent.setNumerator(numerator * rhs.getDenominator());
        tempCurrent.setDenominator(denominator * rhs.getDenominator());
        rhs.setNumerator(rhs.getNumerator() * denominator);
        rhs.setDenominator(rhs.getDenominator() * denominator);

        //now they have the same denominator, so add numerators
        tempCurrent.setNumerator(rhs.getNumerator() + tempCurrent.getNumerator());
        //reduce
        int gcf = tempCurrent.findGCF();
        numerator = tempCurrent.getNumerator()/gcf;
        denominator = tempCurrent.getDenominator()/gcf;
    }
}

void Fraction::operator*=(Fraction rhs){//make sure product is always left of *=
    Fraction newFraction(numerator * rhs.getNumerator(),denominator* rhs.getDenominator());
    int gcf = newFraction.findGCF();
    numerator = newFraction.getNumerator() / gcf;
    denominator = newFraction.getDenominator() / gcf;
}