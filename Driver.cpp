// Complete the program given by writing the definition of the 'addSize' function
// (it is being called in line  25)
// Also, add code, starting at line 29, to fill in the extra space created in the array
//  before it is displayed at the end

#include<iostream>

using namespace std;

//function prototype goes here
int *addSize (int arrPtr[],int &size);


int main()
{
	int SIZE = 10, currentSize;
	int *arrPtr = new int[SIZE];

	for (int i = 0; i < SIZE; i++)   //putting values in the array
		arrPtr[i] = i;

	currentSize = SIZE;			//why is this here, what is it for?? (might be useful later)

	//What does the function call in the next line tell you about the function??
	arrPtr = addSize(arrPtr, SIZE);   	//the array is now bigger, with the original elements in it. SIZE now has the new size


	//ADD VALUES TO THE ARRAY TO FILL IN THE EXTRA SPACE CREATED

	for (int i = currentSize; i < SIZE; i++)   //putting values in the array
			arrPtr[i] = i;


	cout << "The new array is: ";
	// This just displays the array
	for (int i = 0; i < SIZE; i++){
		cout<<arrPtr[i];
		
	}
		
		
		
	return 0;
}

//function definition goes here
 int *addSize (int arrPtr[],int &size){
 	int *Size;
 	Size= &size;
 	
 		
 	int *NewArr = new int[size*2];
 	
     
     for (int i = 0; i < size; i++) //putting values in the array
			NewArr[i] = arrPtr[i]; 
     	
  
   size = size*2;
   *Size = size ;
  
    return NewArr;
    
 }