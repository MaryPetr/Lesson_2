#include<iostream>
#include <conio.h>
#include <vector>
using namespace std;
/*
Реализуйте шаблонную функцию Swap, которая принимает два указателя и обменивает местами значения, на которые указывают эти указатели.

*/
template<typename T>
void my_swap(T& a, T& b)
{
    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
}

/*
Реализуйте шаблонную функцию SortPointers, которая принимает вектор указателей и сортирует указатели по значениям, на которые они указывают.
template<typename T>
void SortPointers(const T* vec)
{
    sort(vec.begin(), vec.end());
}
*/



int main(){
    int iValue = 7;
    int dValue = 9;

    int* iPtr = &iValue;
    int* dPtr = &dValue;
    my_swap(iPtr, dPtr);
    cout << *iPtr << *dPtr << '\n';
  // vector<int> vec(iPtr, dPtr);

    return 0;
}