#pragma once

#include <iostream>

using namespace std;


class Neuron
{
protected:
	double value;
	int size;
	double *weights;
public:
	
	Neuron(int s=10 , int val=0 );
	Neuron(const Neuron &v);

	Neuron& operator = (const Neuron& v);
	~Neuron();
	int get_size() { return size; }
	double get_value() { return value; }
	double& operator[](int pos);


	friend istream& operator >> (istream &in, Neuron &v)
	{
		for (int i = 0; i < v.size; i++)
			in >> v.weights[i];
		return in;
	}
	friend ostream& operator<<(ostream &out, const Neuron &v)
	{
		out << v.value <<"<-value " ;
		for (int i = 0; i < v.size; i++)
			out << v.weights[i] << ' ';
		return out;
	}
};
