#include "StackV.h"

int StackV::size()
{
	return data.size();
}

void StackV::push(int x)
{
	data.push_back(x);
}

void StackV::pop()
{
	data.pop_back();
}

void StackV::top()
{
	return data[data.size()-1];
}

void StackV::clear()
{
	data.clear();
}
