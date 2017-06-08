//Homework: Exercises 1.10.1, 1.10.2, 1.10.3
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

//------------------------------------------------------------------------
// EXERCISE 1.10.1 (problem1)
void problem1(){
	//getting age from user
	int age;
	cout << "What is your age? (integer years) : ";
    cin  >> age;

    //writing age to age.txt file
    ofstream agefile;
    agefile.open("age.txt");
    agefile << "Your age is: " << age << " years." << endl;
    agefile.close();
}

//------------------------------------------------------------------------



//------------------------------------------------------------------------
// EXERCISE 1.10.2 (problem2)
void problem2_1(){
	char a = 'a';
	char * p1 = &a;

	int int_array[] = {0,1,2,3,4,5,6,7,8,9};
	int * p2 = &int_array[0];

	//cout << *(++(++p2)) << endl;     // ... print to check my understanding

	char char_array[] = {'a','b','c'};
	char * p3 = new char[10];

	char ** p4 = &p1;

	//cout << **p4 << endl;    //... printing to check my understanding

	const int con_int = 1;
	const int * p5 = &con_int;
	int const * p6 = &con_int;
}

void problem2_2(){
	int stack_array[3] = {0,1,2};
    int * heap_array = new int[100];

    for(int i=0; i< 3;i++){
    	heap_array[i] = 2* i;
    	}

    delete[] heap_array;	

    }
//------------------------------------------------------------------------



//------------------------------------------------------------------------
// EXERCISE 1.10.3 (problem3)

void problem3(){

	ifstream mmFile("/Users/bkuum/UW_Madison/Research/summer_of_cpp/homework/sample_matrix_market.txt");

	bool   got_first_line = false;

	while(!got_first_line && !mmFile.eof()){
		string line = "";
		getline(mmFile,line);
		//cout << line;
		if(line[0] != '%'){
			int num_rows;
			int num_columns;
			int num_nonzeros;

			istringstream iss(line);

			iss >> num_rows;
			iss >> num_columns;
			iss >> num_nonzeros;

			cout << "The number of rows is: " << num_rows << endl;
			cout << "The number of columns is: " << num_columns << endl;
			cout << "The number of nonzero elements is: " << num_nonzeros << endl;

			got_first_line = true;

		}
	}
	
}

//------------------------------------------------------------------------



//------------------------------------------------------------------------
// main program

int main(){
	//problem1();
	//problem2_1();
	//problem2_2();
	problem3();
	return 0;
}