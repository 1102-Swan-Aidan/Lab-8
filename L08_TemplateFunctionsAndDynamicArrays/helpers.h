#ifndef HELPERS_H
#define HELPERS_H
#include "fraction.h"
template<class T>
T add(T* a, int num){
    T sum = a[0];
    for(int i = 1; i < num; i++){
        sum += a[i];
    }
    return sum;
}
template<class T>
T multiply(T* a, int num){
T product = a[0];
    for(int i = 1; i < num; i++){
        product *= a[i];
    }
    return product;
}
#endif