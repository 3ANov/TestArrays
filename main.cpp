#include "header.h"



int main(){

    int arraySize;
    cout << "Введите размер инициализирующего массива ";
    cin >> arraySize;
    vector<int> initArray = initializeArray(arraySize);

    heapArrayTest(initArray);

    stackArrayTest(initArray);
    vectorArrayTest(initArray);

    //heapArrayTest(initArray);

//    vector<vector<int>> matrix(5, vector <int> (5) );;
//    for (int i = 0; i < matrix.size(); i++){
//        for(int j = 0; j < matrix[i].size(); j++){
//            cout << matrix[i][j] <<' ';
//        }
//        cout<<'\n';
//    }



    return 0;
}

