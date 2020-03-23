#include <iostream>
#include "Perceptron.h"
#include "Matrix.h"
#include "NeuralNetwork.h"
#include "olcConsoleGameEngine.h"
#include <vector>

// Uploaded by panchis7u7 ~ Sebastian Madrigal

int main()
{
	NeuralNetwork* nn = new NeuralNetwork(2, 2, 2);
	std::vector<float> entradas = {1, 0};
	std::vector<float>* salida = nn->feedForward(&entradas);
	for (size_t i = 0; i < salida->size(); i++)
	{
		std::cout << salida->at(i) << std::endl;
	}
	delete(nn);
	return 0;
}   