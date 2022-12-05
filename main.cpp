#include "header.h"

static int matrixSize = 4;


void transp(int matrix[][4]);
void transp(int* matrixLines);
void transp(int** matrix);

int main(){


//    int arraySize;
//    cout << "Введите размер инициализирующего массива ";
//    cin >> arraySize;
//    vector<int> initArray = initializeArray(arraySize);

//    heapArrayTest(initArray);

//    stackArrayTest(initArray);
//    vectorArrayTest(initArray);

//    //heapArrayTest(initArray);

////    vector<vector<int>> matrix(5, vector <int> (5) );;
////    for (int i = 0; i < matrix.size(); i++){
////        for(int j = 0; j < matrix[i].size(); j++){
////            cout << matrix[i][j] <<' ';
////        }
////        cout<<'\n';
////    }
///


    srand( time(0) );
    
    


    int stackMatrix[matrixSize][matrixSize];

    cout << "Вывод матрицы из стека \n";
    for(int i=0; i < matrixSize; i++){
        for (int j=0; j < matrixSize; j++) {
            stackMatrix[i][j] = rand()% 10 +1;
            cout.width(2);
            cout << stackMatrix[i][j] << ' ';
        }
        cout << '\n';
    }

    cout << '\n';

    cout << "Вывод адресов из стека \n";
    for(int i=0; i < matrixSize; i++){
        for (int j=0; j < matrixSize; j++) {
            cout.width(10);
            cout << &(*(*(stackMatrix + i) +j)) << '\n';
        }
    }

    cout << '\n';




    int** heapMatrix = new int*[matrixSize];

    cout << "Вывод матрицы из кучи \n";
    // создание указателей подмассивов
    // сделал это сразу в цикле
    // но можно делать и отдельно

//    for(int i=0; i < 4; i++){
//        *(heapMatrix + i) = new int[4];
//    }

    for(int i=0; i < matrixSize; i++){
        *(heapMatrix + i) = new int[matrixSize]; //см комментарии выше
        for (int j=0; j < matrixSize ; j++) {
            // один из вариантов обращения к элементам
            // но вообще можно и heapMatrix[i][j]
            *(*(heapMatrix + i) +j) = stackMatrix[i][j];
            cout.width(2);
            cout << *(*(heapMatrix + i) +j) << ' ';
            //cout << heapMatrix[i][j] << ' ';
        }
        cout << '\n';
    }

    cout << '\n';

    cout << "Вывод адресов из кучи \n";
    for(int i=0; i < matrixSize; i++){
        for (int j=0; j < matrixSize; j++) {
            cout.width(10);
            cout << &(*(*(heapMatrix + i) +j)) << '\n';
        }
    }

    cout << '\n';
    cout << "Вывод исходной матрицы \n";

    for(int i=0; i < matrixSize; i++){
        for (int j=0; j < matrixSize ; j++) {
            cout.width(2);
            cout << *(*(heapMatrix + i) +j) << ' ';
        }
        cout << '\n';
    }



    transp(heapMatrix);
    transp(*stackMatrix);


    cout << "Вывод транспонированной матрицы(куча)\n";

    for(int i=0; i < matrixSize; i++){
        for (int j=0; j < matrixSize ; j++) {
            cout.width(2);
            cout << *(*(heapMatrix + i) +j) << ' ';
        }
        cout << '\n';
    }
    cout << "Вывод транспонированной матрицы(стек) \n";

    for(int i=0; i < matrixSize; i++){
        for (int j=0; j < matrixSize ; j++) {
            cout.width(2);
            cout << *(*(stackMatrix + i) +j) << ' ';
        }
        cout << '\n';
    }


    // память освобождается
    for(int i=0; i < matrixSize; i++){
        delete[] *(heapMatrix + i);
        *(heapMatrix + i) = nullptr;
    }

    delete [] heapMatrix;
    heapMatrix = nullptr;


    return 0;
}

void transp(int **matrix){
    for(int i=0; i < matrixSize; i++){
        for (int j=0; j < matrixSize; j++) {
            if(i < j){
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    //return matrix;
}


void transp(int *matrixLines){
    for(int i=0; i < matrixSize; i++){
        for(int j=0; j < matrixSize; j++){
            if(i < j){
                std::swap(*(matrixLines +i*matrixSize +j), *(matrixLines +j*matrixSize + i));
            }
        }
    }
}

