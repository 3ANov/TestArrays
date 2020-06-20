#include "header.h"



int main()
{

    int arraySize;
    cout << "Введите размер инициализирующего массива ";
    cin >> arraySize;
    vector<int> initArray = initializeArray(arraySize);

    heapArrayTest(initArray);
    heapArrayTest(initArray);


    return 0;
}
