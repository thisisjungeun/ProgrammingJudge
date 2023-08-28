//BAEKJOON PROGRAMMING JUDGE 15651
#include <iostream>
#include <string>

using namespace std;
int n, m;

void reptPermutation(int depth, int arr[])	//will pick m number from n numbers considering order
{
	if (depth == m)	//when the depth reaches m, the complete permutation must have been made
	{
		string answer = "";
		for (int i = 0; i < m; i++)	//print final permutation
		{
			answer += to_string(arr[i]);	//function defined in standard string library. also converts integer to string
			answer += " ";
		}
		answer += "\n";		
		cout << answer;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		arr[depth] = i + 1;	//don't need to check if it's already visited because it allows repetition
		reptPermutation(depth + 1, arr);	//call the function in recursive way it will pick next number
	}
}

int main(void)
{
	cin >> n >> m;
	int* arr = new int[m];
	reptPermutation(0, arr);	//by starting from zero, it will pick numbers starting from 1(very first).

	return 0;
}