#pragma once

#include "List.h"
#include <stdexcept>

template<class T>
class Queue
{
private:
	List<T> fElements; //FILO

public:
	bool isEmpty() const
	{
		return fElements.isEmpty();
	}

	int size() const
	{
		return fElements.size()-1;
	}

	void enqueue(const T& aElement)
	{
		fElements.push_front(aElement);// pushes into the list
	}

	void dequeue()
	{
		fElements.remove(fElements[size()]); 
	}

	const T& top() const
	{
		return fElements[size()]; //note top of list 
	}

};