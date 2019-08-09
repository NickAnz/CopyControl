#pragma once


#include "List.h"
#include <stdexcept>

template <class T>
class Stack // LIFO
{
private:
	List<T> fElement;

public:
	bool isEmpty() const
	{
		return fElement.isEmpty(); //list is empty?
	}
	int size() const
	{
		return fElement.size()-1; // current size
	}
	void push(const T& aItem)
	{
		fElement.push_back(aItem); // push item onto list
	}
	void pop()
	{
		fElement.remove(fElement[size()]); // remove item from lsit
	}
	const T& top() const
	{
		return fElement[size()]; //note top of list

	}


};