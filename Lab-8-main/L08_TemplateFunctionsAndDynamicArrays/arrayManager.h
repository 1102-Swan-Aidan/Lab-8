#ifndef MODIFIEDCALCULATOR_H
#define MODIFIEDCALCULATOR_H
#include "fraction.h"
//#define MAX_ARR_SIZE 100

class ArrayManager{
    int* integers;
    float* floats;
    Fraction* fractions;
    int numInts, numFloats, numFractions;
    int maxNumInts, maxNumFloats, maxNumFractions;

    public:
        ArrayManager();
        //lines 15-18 are examples of additional function overloads
        //in the next lab, we'll look at how to condense 15-17 into 1 function
        ArrayManager(int*, int);
        ArrayManager(float*, int);
        ArrayManager(Fraction*, int);
        ArrayManager(int*, float*, Fraction*, int, int, int);
        ArrayManager(const ArrayManager&);

        int* getIntegers();
        float* getFloats();
        Fraction* getFractions();

        int getNumFloats();
        int getNumInts();
        int getNumFractions();

        int getMaxNumFloats();
        int getMaxNumInts();
        int getMaxNumFractions();


        void addToArr(int);
        void addToArr(float);
        void addToArr(Fraction);

        ~ArrayManager();
        ArrayManager& operator=(const ArrayManager&);
};

#endif