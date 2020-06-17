#include<iostream>
#include<fstream>
#include<string>
#include "ArrayQueue.h"
using namespace std;
int main()
{
	ArrayQueue<char> MojaKolejka;
	MojaKolejka.enqueue('a');
	MojaKolejka.enqueue('b');
	MojaKolejka.enqueue('c');
	MojaKolejka.enqueue('d');
	MojaKolejka.enqueue('e');
	MojaKolejka.enqueue('f');
	cout << MojaKolejka.dequeue() << endl;
	cout << MojaKolejka.dequeue() << endl;
	cout << MojaKolejka.dequeue() << endl;
	cout << MojaKolejka.dequeue() << endl;
	cout<<MojaKolejka.dequeue()<<endl;
	MojaKolejka.enqueue('f');
	MojaKolejka.enqueue('g');
	MojaKolejka.enqueue('g');
	MojaKolejka.enqueue('g');
	MojaKolejka.enqueue('g');
	MojaKolejka.enqueue('g');


	system("pause");
	return 0;
}