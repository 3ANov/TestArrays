#include "header.h"


vector<int> initializeArray(int arraySize){
    srand( time(0) );
    vector<int>  array(arraySize);
    for (int i=0; i < arraySize; i++) {
        array[i] = rand()% 10 +1;
    }

    return array;
}


void heapArrayTest(vector<int> &inp){
    int arraySize = inp.size();

    int *heapArray = new int[arraySize];

    cout << "Массив с использованием кучи \n";

    for (int i=0; i < arraySize; i++) {
        heapArray[i] = inp[i];
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

void stackArrayTest(vector<int> &inp){
    int arraySize = inp.size();
    int stackArray[arraySize];

    cout << "Массив с использованием стека \n";

    for(int i=0; i < arraySize; i++){
        stackArray[i] = inp[i];
        cout << stackArray[i] << '\n';
    }






}

void vectorArrayTest(vector<int> &inp){
    int arraySize = inp.size();
    vector<int> vectorArray(arraySize);

    cout << "Массив с использованием вектора \n";

    for(int i=0; i < arraySize; i++){
        vectorArray[i] = inp[i];
        cout << vectorArray[i] << '\n';
    }


}

void listArrayTest(vector<int> &inp){
    int arraySize = inp.size();
    vector<int> vectorArray(arraySize);

    cout << "Массив с использованием вектора \n";

    for(int i=0; i < arraySize; i++){
        vectorArray[i] = inp[i];
        cout << vectorArray[i] << '\n';
    }


}
