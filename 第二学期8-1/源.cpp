#include<iostream>

using namespace std;

int main()
{
	int n, p, m;
	cin >> n >> p >> m;
	int *P = new int[m];
	for (int i = 0; i < m; i++)
		P[i] = -1;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		int pos = temp % p;
		while (P[pos]!=-1)
		{
			pos=(pos+1)%m;
		}
		P[pos] = temp;
	}
	int count = 0;
	int waiting;
	cin >> waiting;
	int pos_waiting = waiting % p;

	while (P[pos_waiting]!=-1&&P[pos_waiting] != waiting)
	{
		count++;
		pos_waiting=(pos_waiting+1)%m;
		if (pos_waiting == waiting % p)
			break;
	}
	if (P[pos_waiting] == waiting)
		count++;

	cout << count;
	delete[]P;
	//system("pause");
	return 0;
}