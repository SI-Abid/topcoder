#include "bits/stdc++.h"
using namespace std;
class BinaryCode
{
	public:
	vector <string> decode(string message)
	{
		vector <string> dcode;
		int len = message.size();
		dcode.push_back(to_string(int(message[0]-'0')+int(message[1]-'0')));
		
		for (int i=1; i< len-1; i++)
		{
			dcode.push_back(to_string(int(message[i-1]-'0')+int(message[i]-'0')+int(message[i+1]-'0')));
		}
		dcode.push_back(to_string(int(message[len-1]-'0')+int(message[len-2]-'0')));
		return dcode;
	}
};
