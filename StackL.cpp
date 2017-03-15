#include "StackL.h"

int Stack::size()
{
	return data.size();
}

void Stack::push(int k)
{
	data.insert(k, data.size()+1);
}

void Stack::pop()
{
	data.remove(data.size());
}

int Stack::top()
{
	data.getAt(data.size());
}

void Stack::clear()
{
	data.clear();
}
