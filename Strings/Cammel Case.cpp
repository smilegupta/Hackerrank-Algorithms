#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string str) {

     int len = str.size(); 
     int ans = 1; 
     for(int i=0;i<len;i++)
     {
     if(str[i]>= 'A' && str[i]<= 'Z')   
    { 
            {
                ans++;
            }
     }
     }
   return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
