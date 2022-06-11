#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[5];

	for (int i = 0; i < 5; i++)
		cin >> arr[i];

	sort(arr, arr + 5);

	cout << arr[4] << '\n' << arr[0];

	return 0;
}