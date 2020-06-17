#pragma once
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
template <class T>
class ArrayQueue
{
public:
	//pola
	T Storage[5];
	int First, Last;
	//konstruktor
	ArrayQueue() 
	{
		First = Last = -1; 

	}

	//metody:
	bool isEmpty()
	{
		if (First == -1) return true;
		else return false;
	}
	bool isFull()
	{
		if ((First == 0 && Last == 5 - 1) || Last == First - 1)
			return true;
		else
			return false;
	}
	void enqueue(T el);
	T dequeue();
};

template<class T>
inline void ArrayQueue<T>::enqueue(T el)
{
	if (!isFull())
	{
		if (Last == 5 - 1 || Last == -1)
		{
			Storage[0] = el;
			Last = 0;
			if (First == -1)
			{
				First = 0;
			}
		}
		else Storage[++Last] = el;
	}
	else {
		ofstream zapis("dane.txt");
		zapis.close();
		zapis.open("dane.txt", ios_base::app);
		zapis << Storage[First];
		zapis.close();
		std::cout << "Kolejka jest pe³na!" << std::endl;
		
	}
}

template<class T>
inline T ArrayQueue<T>::dequeue()
{
	T smth = 0;
	if (!isEmpty()) {
		if (First == Last + 1) {
			std::cout << "Kolejka opró¿niona";
		}
		else
		{
			smth = Storage[First];
			First++;
			if ((First == 0 && Last == 5 - 1) || Last == First - 1)
				First = Last = -1;
		}
	}
	else std::cout << "Kolejka jest pusta!" << std::endl;
	return smth;
}
