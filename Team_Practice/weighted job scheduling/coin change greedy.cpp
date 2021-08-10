
#include <bits/stdc++.h>
using namespace std;



vector<int>coins;
int COIN,cost;

void findMin(int cost)
{
	int coinList[COIN] = { 0 };
	int i, k = 0;

	for (i = COIN - 1; i >= 0; i--) {
		while (cost >= coins[i]) {
			cost -= coins[i];

			coinList[k++] = coins[i];
		}
	}

	for (i = 0; i < k; i++) {

		printf("%d ", coinList[i]);
	}
	return;
}

int main(void)
{

cout<<"Enter the number of coin";
cin>>COIN;
cout<<"Enter coin values";
for(int i=0;i<COIN;i++)
{
    int x;
    cin>>x;
    coins.push_back(x);
}
sort(coins.begin(),coins.end());
cout<<"For which note u want the change?";
	cin>>cost;
	findMin(cost);
	return 0;
}

