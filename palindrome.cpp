#include <bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin>>str;

	int n=str.size();
    int flag = 0;
    
	for(int i=0;i<=n/2;++i){
		if(str[i]==str[n-i-1])
		continue;
		else
		{
            flag++;
            break;
        }
	}
    if(flag == 0)
    cout<<"YES";
    else
    cout<<"NO";
}

/*
    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        string str;
        cin>>str;

        string str_rev;
        for(int i = str.size()-1; i>=0; --i){
            str_rev.push_back(str[i]);
        }
        if (str_rev == str)
        cout<<"YES";
        else
        cout<<"NO";
    }
*/