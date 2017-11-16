#include "Neuron.h"


Neuron::Neuron(int s, int val)
{
	value= val;
	size = s;
	weights = new double[size];
	for (int i = 0; i<size; i++)
	{
		weights[i] = 1+i;
	}
}

Neuron::Neuron(const Neuron &v)
{
	size = v.size;
	value = v.value;
	weights = new double[size];
	for (int i = 0; i<size; i++)
	{
		weights[i] = v.weights[i];
	}
}
Neuron& Neuron:: operator = (const Neuron& v)
{
	if (this != &v)
	{
		if (size != v.size)
		{
			delete[] weights;
			weights = new double[v.size];
			value = v.value;
		}
		size = v.size;
		value = v.value;
		for (int i = 0; i < size; i++)
			weights[i] = v.weights[i];
	}
	return *this;
}
Neuron::~Neuron()
{
	delete[]weights;
}

double& Neuron::operator[](int pos)
{
	return weights[pos];
}


