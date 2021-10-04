#include<bits/stdc++.h>
using namespace std;

void urlCheck (string url) {

    string answer="";
    string temp = "/";
    int flag=0;
    for(int i=0;i<url.size(); i++){
        int compare = (temp[0]==url[i]);
        if(compare==1 && flag==0){
            flag=1;
            answer+=url[i];
        }
        else if(compare==1 && flag==1){
            continue;
        }
        else if(compare==0) {
            answer+=url[i];
            flag=0;
        }
    }

    cout<<answer<<"\n";
}


int main() {
    string url;
    cin>>url;

    urlCheck(url);

    return 0;
}
