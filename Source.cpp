// lab 8a

#include <iostream>
//#include <string>
//#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	int temp1;
	vector<int> bubbleSort;
	vector<int> selectionSort;
	ifstream unsortedNumbersFile;
	unsortedNumbersFile.open("unsortedData.txt");

	if (!unsortedNumbersFile)
		cout << "error file not open";
	else
	{
		cout << "creating arrays...\n";
		while (!unsortedNumbersFile.eof())
		{
			unsortedNumbersFile >> temp1;
			bubbleSort.push_back(temp1);
			selectionSort.push_back(temp1);
		}
		cout << "done\n";
	}
	cout << bubbleSort.size() << endl << endl;

	bool swap = true;
	int temp;
	int total = 0;

	while (swap == true)
	{
		swap = false;
		for (int count = 0; count < (bubbleSort.size() - 1); count++)
		{
			if (bubbleSort[count] > bubbleSort[count + 1])
			{
				temp = bubbleSort[count];
				bubbleSort[count] = bubbleSort[count + 1];
				bubbleSort[count + 1] = temp;
				total++;
				swap = true;
			}
		}
	}
	ofstream sortedNumbersFile;
	sortedNumbersFile.open("sortedBubbleData.txt");

	cout << total << endl << endl;
	for (int val : bubbleSort)
	{
		sortedNumbersFile << val << endl;
	}

	total = 0;
	int startScan, minIndex, minValue;
	
	for (startScan = 0; startScan < (selectionSort.size() - 1); startScan++)
	{
		minIndex = startScan;
		minValue = selectionSort[startScan];

		for (int index = startScan + 1; index < selectionSort.size(); index++)
		{
			if (selectionSort[index] < minValue)
			{
				minValue = selectionSort[index];
				minIndex = index;
				total++;
			}	 
		 }
		 selectionSort[minIndex] = selectionSort[startScan];
		 selectionSort[startScan] = minValue;
	}
	
	cout << endl << total << endl << endl;
	for (int val : selectionSort)
	{
		cout << val << endl;
	}
	
	unsortedNumbersFile.close();
	cin.get();
	return 0;
}