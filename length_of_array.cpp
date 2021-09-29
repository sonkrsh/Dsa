#include <iostream>
using namespace std;

int main()
{
    string check = "sourav";
    int arr[] = {1, 1, 1, 4, 6, 2};
    //&arr --->>>points at the same memory address as arr
    //&arr+1 --->> Points after the end of the array
    //*(&arr + 1) ====>>Dereferencing to *(&a + 1) gives the address after the end of the last element.
    //*(arr+1)-arr -> subtract and Find The Length
    //int size = *(&arr + 1) - arr;
    cout << (char *)(&check + 1) - (char *)&check << endl;
    //cout << &check << endl;
    //cout << "Number of elements in arr[] is " << size;
    return 0;
}