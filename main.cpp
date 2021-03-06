#ifdef linux				// Checking for Linux

	#include<math.h>
	#include"matrix.h"
	#include"nn.h"
	#include<string.h>

#endif

#ifdef WIN32				// Checking for Windows

	#include<math.h>
	#include"matrix.h"
	#include"nn.h"
	#include<string.h>
	#include<conio.h>

#endif



using namespace std;

int main() {
	srand(time(NULL));
	
	long double inputs[] = {1, 0};		// Input data
	long double targets[] = {1};		// Target Data
	
	NeuralNetwork nn(2, 28, 1);		// Making the Neural Network with 2 inputs nodes, 28 hidden nodes and 1 output node
	
	cout<<"Training..."<<endl;
	
	for (int i = 0; i < 10000; i++)
		nn.train(inputs, 2, targets, 1);	// Training the Neural Network with the test input data and the targets
		
	cout<<"Predicted Output: ";
	Matrix output = nn.predict(inputs, 2);			// Predicting the output of the Neural Network...
	output.print();
	return 0;
}
