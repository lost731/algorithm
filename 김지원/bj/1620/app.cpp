#include <bits/stdc++.h>

using namespace std;

int n, m;
map<string,int> _map;
map<int,string> _map2;
string s;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        cin >> s;
        _map[s]=i;
        _map2[i]=s;
    }
    for(int i=1; i<=m;i++){
        cin >> s;
        if(atoi(s.c_str())==0){
            cout<<_map[s]<<"\n";
        } else{
            cout << _map2[atoi(s.c_str())]<<"\n";
        }
    }
    return 0;
}