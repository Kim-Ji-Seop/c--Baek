// #include <iostream>
// #include <vector>
// #include <algorithm>
// #define NMAX 100

// using namespace std;

// int main(){
//     int n;
//     int p;
//     int number;
//     string name;
//     cin >> n;
//     vector<int> v;
//     vector<string> strv;
//     string temp[NMAX];
//     int max,max_index;
//     for(int i=0;i<n;i++){
//         cin >> p;
//         for(int j=0;j<p;j++){
//             cin >> number >> name;
//             v.push_back(number);
//             strv.push_back(name);
//         }
//         max = *max_element(v.begin(),v.end());
//         max_index = max_element(v.begin(),v.end())-v.begin();
//         temp[i] = strv.at(max_index);
//         strv.clear();
//         v.clear();
//     }
//     for(int i=0;i<n;i++){
//         cout << temp[i] << endl;
//     }
// }
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int n, p;
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> p;
		vector <int> price(p);
		vector <string>player(p);
		int max_num = 0;
		string ans;

		for (int j = 0; j < p; j++)
		{
			cin >> price[j] >> player[j];

			if (max_num < price[j])
			{
				max_num = price[j];
				ans = player[j];
			}
		}
		cout << ans << endl;
	}
}