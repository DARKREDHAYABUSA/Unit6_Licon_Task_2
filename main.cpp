#include <iostream>
#include "accounts.h"
using namespace std;

void printArray(int[], int);
void sortArrDesc(int[], int);

int main() 
{
//Bubble Sort ASC method per Task 2 of Unit 6 Assigment
cout << "\nStart: " << cpuTime() << endl;
//call the sort function
printArray(accountBalances, maxAccounts);
sortArrDesc(accountBalances, maxAccounts);
cout << "\nEnd: " << cpuTime() << endl;
  return 0;
}

void printArray(int arrayVals[], int size)
{
cout << "\nPrinted Values in Array: " << endl;
for(int i = 0; i < size; i++)
{
  cout << arrayVals[i] << ",";

    }
  }

void sortArrDesc(int arrayVals[], int size)
{
  int temp = 0; //needed for swap process
  for(int left = 0; left < size; left++) //number on left
{
  //the number on the right
  for(int right = left+1; right < size; right++)
 {
  //the swap magic happens here
  //Bubble sort: compare the left num to the right num
  //swap, if neccessary
  if(arrayVals[left] < arrayVals[right])
{
    temp = arrayVals[left];
    arrayVals[left] = arrayVals[right];
    arrayVals[right] = temp;
    }
  }
}
  //call the printArray function here
  printArray(arrayVals, size);
}