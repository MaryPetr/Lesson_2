#include<iostream>
#include <conio.h>
#include <vector>
using namespace std;
/*
���������� ��������� ������� Swap, ������� ��������� ��� ��������� � ���������� ������� ��������, �� ������� ��������� ��� ���������.

*/
template<typename T>
void my_swap(T& a, T& b)
{
    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
}

/*
���������� ��������� ������� SortPointers, ������� ��������� ������ ���������� � ��������� ��������� �� ���������, �� ������� ��� ���������.
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