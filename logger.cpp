//Author : Mukul Kumar
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

//global map which have "time format" as key and "logs" as value
map<string, string> mp;

//function to seperate the time and its logs. Also, inserts it into mp
void time(string s){
    string ans;
    for(ll i=0; i<s.size(); i++){
        if(s[i] == ','){
            break;
        }else{
            ans += s[i];
        }
    }
    mp[ans] = s;
}

//function to insert the time in a vector v and logs in vector logs
void insert(vector<string> &v, vector<string> &logs){
    for(auto x: mp){
        v.push_back(x.first);
        logs.push_back(x.second);
    }
}

//function to find the index of the "start time" in the vector v
ll bs1(vector<string>&v, string start){
    ll low = 0, high = v.size()-1;
    ll ans = -1;
    while(low <= high){
        ll mid = low + (high - low)/2;
        if(v[mid] == start){
            return mid;
        }else if(v[mid]  > start){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

//function to find the index of the "end time" in the vector v
ll bs2(vector<string>&v, string end){
    ll low = 0, high = v.size()-1;
    ll ans = -1;
    while(low <= high){
        ll mid = low + (high - low)/2;
        if(v[mid] == end){
            return mid;
        }else if(v[mid]  > end){
            high = mid - 1;
        }else{
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}

//function to print the output on the cli
void output(vector<string>&logs, ll start, ll end){

    //handling edge cases
    if(start == -1 or end == -1){
        cout<<"No logs found in the given time range"<<endl;
        return;
    }

    //printing the logs
    for(ll i=start; i<=end; i++){
        cout<<logs[i]<<endl;
    }
}

int main(int argc, char** argv){

    //open ifstream to read the given files
    ifstream mk;

    string begin, end;
    string fromTime(argv[2]), toTime(argv[4]), file(argv[6]);

    mk.open(file);
    begin = fromTime;
    end = toTime;
    
    //checking for the correct range
    if(begin > end){
        cout<<"Invalid time range"<<endl;
        cout<<"From time should come before the end time"<<endl;
        return 0;
    }
    // read each lines from the input file
    string text;
    while(!mk.eof()){
        getline(mk, text);
        time(text);
    }

    vector<string>v, logs;
    insert(v, logs);
    
    ll x = bs1(v, begin);
    ll y = bs2(v, end);

    //checking the edge cases
    if(x > y){
        cout<<"No logs found in the given time range"<<endl;
    }else{
        output(logs, x, y);
    }

    //close the ifstream
    mk.close();
    return 0;
}