#include <iostream>
#include <list>
#include <vector>

using namespace std;

void main()
{
	cout << "Hello world" << endl << endl;

	//List test

	cout << "List test:" << endl << endl;

	list<int> list_test1;
	list<int> list_test2;

	for (int i = 0; i < 10; i++)
	{
		list_test1.push_back(i);
		list_test2.push_front(i);
	}

	list<int>::iterator it1 = list_test1.begin();
	list<int>::iterator it2 = list_test2.begin();

	cout << "list test 1:" << endl << endl;
	for (; it1 != list_test1.end(); ++it1)
	{
		cout << *it1 << " ";
	}

	cout << endl << endl;

	cout << "list test 2:" << endl << endl;
	for (; it2 != list_test2.end(); ++it2)
	{
		cout << *it2 << " ";
	}

	cout << endl << endl;


	list_test1.clear();
	list_test2.clear();

	//Vector test

	vector<int> vector_test1;
	//vector<int> vector_test2;

	for (int i = 0; i < 10; i++)
	{
		vector_test1.push_back(i);
		//There's no push_front
	}

	cout << "vector test:" << endl << endl;

	for (int j = 0; j < vector_test1.size(); j++)
	{
		cout << vector_test1[j] << " ";
	}

	cout << endl << endl;

	cout << "inverse" << endl << endl;

	for (int j = vector_test1.size() - 1; j >= 0; j--)
	{
		cout << vector_test1[j] << " ";
	}

	//vector_test1.insert(vector_test1[5], 100);

	getchar();
}