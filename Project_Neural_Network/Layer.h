#pragma once
#include "Neuron.h"
class Layer
{
private:
	Neuron *arr;
	int size;
	int next_size;
	void init(int sz,int next_sz,double* val);
public:	
	Layer(int s, int ns, double* val);
	~Layer(void);
	Neuron& operator[](int pos);

	friend istream& operator >> (istream &in, Layer &v)
	{
		for (int i = 0; i < v.size; i++)
			in >> v.arr[i];
		return in;
	}
	friend ostream& operator<<(ostream &out, const Layer &v)
	{
		for (int i = 0; i < v.size; i++)
			out << v.arr[i] << endl;
		return out;
	}
};