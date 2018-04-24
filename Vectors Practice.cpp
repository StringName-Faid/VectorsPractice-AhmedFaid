#include <iostream>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

vector<int> numList;

int NumGenerator(int max, int min){
     int n = (max - min + 1);
     int random = rand()%n + 1;

     return random;
}

void arrayFiller(int max, int min, vector<int> &numList){

    numList.resize(NumGenerator(max, min));

    for (int i = 0; i < numList.size(); i++){

        numList [i] = NumGenerator(max, min);
    }


}

void arrayFiller2(int max, int min, vector<int> &numList){

    while (NumGenerator(max, min)%50 != 0){
        numList.push_back (NumGenerator(max, min));
    }
}

void printArray (const vector<int> &numList){

    for (int i = 0; i < numList.size(); i++){
        cout << numList [i] << endl;

    }
}

int main(){

    srand(time(NULL));
    vector<int> numList;
    vector<int> numList2;
    int max;
    int min;

    cout << "Enter Minimum value: ";
    cin >> min;

    cout << "Enter Maximum value: ";
    cin >> max;

    cout << endl << endl << "first array values" << endl;

    arrayFiller(max, min, numList);
    printArray (numList);

    cout << endl << endl << "Array 2 values: " << endl;

    arrayFiller2 (max, min, numList2);
    printArray (numList2);

    return 0;

}





