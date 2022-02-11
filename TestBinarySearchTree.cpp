#include <iostream>
#include <fstream>
#include "BinarySearchTree.h"
using namespace std;

    // Test program
int main( )
{
    BinarySearchTree<int> t;
    int i;
    string name;
    cout << "Type in the file name (without the .txt) that you want to work with: ";
    cin >> name;
    cin.clear();
    cin.ignore();
  ifstream  fin;
  fin.open(name+".txt");
	while (fin >> i){
	t.insert(i);
	}
	cout << "Enter the leaf you want to get: ";
	int input;
	cin >> input;
	
	while (t.contains(input)){
		cout << "Leaf: ";
		cout << input;
		cout << ' ';
		cout << "Ancestors: ";
		t.containsElement(input);
	cout << "\n";
		cout << "Enter the leaf you want to get: ";
		cin >> input;
	}
	cout << "Invalid Input"; 
	fin.close();
	return 0;

}
