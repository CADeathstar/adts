#include "StackV.h"

int Stack::size()
{
	return data.size();
}

void Stack::push(int x)
{
	data.push_back(x);
}

void Stack::pop()
{
	data.pop_back();
}

int Stack::top()
{
	return data[data.size()-1];
}

void Stack::clear()
{
	data.clear();
}
