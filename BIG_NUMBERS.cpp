#include<bits/stdc++.h>
using namespace std;

string longIntSum (string s1, string s2) {
    string tempsum, answer="";
    int sum, s1Finished = 0, s2Finished = 0, ivalue1, ivalue2, counter=0;

    int i = s1.size()-1;
    int j = s2.size()-1;

    while(s1Finished==0 || s2Finished==0) {
        string temp="";
        ivalue1 = 0;
        ivalue2 = 0;
        if(i>=0 && s1Finished==0){
            temp=s1[i];
            ivalue1= stoi(temp);
            if(i==0) s1Finished = 1;
            i--;
        }

        if(j>=0 && s2Finished==0){
            temp = s2[j];
            ivalue2= stoi(temp);
            if(j==0) s2Finished = 1;
            j--;
        }

        sum = ivalue1+ivalue2+counter;
        counter = sum/10;
        if(s1Finished==1 && s2Finished==1) answer+=to_string(sum);
        else answer+=to_string(sum%10);
    }

    return answer;
}

void print(string answer) {
    for(int k=answer.size()-1;k>=0;k--) {
        cout<<answer[k];
    }
    cout<<"\n";
}

int main() {

    string s1, s2;

    cin>>s1;
    cin>>s2;

    string result = longIntSum(s1,s2);

    print(result);
}
