#include "header.h"


vector<int> initializeArray(int arraySize){
    vector<int> array(arraySize);
    for (int i=0; i < arraySize; i++) {
        array[i] = rand()% 10 +1;
    }

    return array;
}


void heapArrayTest(vector<int> &inp){
    int arraySize = inp.size();

    int *heapArray = new int[arraySize];


    for (int i=0; i < arraySize; i++) {
        heapArray[i] = inp[i];
    }

    for (int i=0; i < arraySize; i++) {
        cout << *(heapArray + i) << '\n';
    }


    /* тест ссылки
    for (int i=0; i < arraySize; i++) {
        inp[i] = 3;
    }
    */

    delete[] heapArray;       // память освобождается
    heapArray = nullptr;

}
