#include "Layer.h"
#include "Neuron.h"

void Layer::init(int sz,int next_sz, double* val)
{
	arr = new Neuron[size];
		for (int i = 0; i < sz; i++)
		{
			Neuron tmp(next_sz, val[i]);
			arr[i] = tmp;
		}
}

Layer::Layer(int s,int ns,double* val) 
{
	size = s;
	init(s,ns,val);
}

Layer::~Layer()
{
	delete[] arr;
}

Neuron& Layer::operator[](int pos)
{
	return arr[pos];
}
