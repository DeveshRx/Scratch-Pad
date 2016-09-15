// Devesh scratch pad.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "fstream.h"
#include "conio.h"
using namespace std;
class pad
{
public:
	char a[100000],b[100000];
	void scratch()
	{
		cout<<"____________________________________________\n\tDevesh scratch pad\n\tversion 1\n\t11/07/2011\nFile is saved in 'New scratch pad file.txt'\n____________________________________________\n";
		ofstream pad("new scratch pad file.txt",ios::app);
		pad<<"\n////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
		pad.close();
again:
		ofstream pa("new scratch pad file.txt",ios::app);
		std::cin>>a;

		pa<<a;
		pa<<"\n";
		pa.close();
		goto again;
	}
};
void main()
{
	pad d;
	d.scratch();
	
}