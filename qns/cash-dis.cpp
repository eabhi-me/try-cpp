#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
using namespace std;

// Thia is another sloution
int minCoins(int coin[], int n, int amount){	
    	sort(coin, coin + n);

    	int res = 0;

    	for(int i = n - 1; i >= 0; i--)
    	{
    		if(coin[i] <= amount)
    		{
    			int c = floor(amount / coin[i]);

    			res = res + c;

    			amount = amount - c * coin[i];
    		}

    		if(amount == 0)
    			break;
    	}

    	return res;
} 


int main(){
    int num;
    cout << "Enter The Amount: ";
    cin >> num;
    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int n = sizeof(notes)/sizeof(notes[0]);

    // this is one soution
    int count;
    for(int i=0; i<sizeof(notes)/sizeof(notes[0]); i++){
        count = num/notes[i];
        if(count>0){
            cout << notes[i] << " : " << count << endl;
            num = num - count*notes[i];
        }
    }
    return 0;

    // cout << minCoins(notes,n,num);

 }