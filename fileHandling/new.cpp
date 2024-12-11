#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
vector<string>split(string line,char delimiter)
{
    vector<string> words;
    int l=0,r=0,n=line.length();
    while(r<n)
    {
        if(line[r]==delimiter)
        {
            line[r]='\0';
            words.push_back(line.substr(l,r-l));
            l=r+1;
        }
        r++;
    }
    words.push_back(line.substr(l,r-l));
    return words;
}
int main()
{
    ifstream inFile("data.csv");
    // ofstream outFile("output.txt");
    string line;
    vector<string> words;
    while(getline(inFile,line))
    {
         words=split(line, ',');
         for(string word : words)
         {
            cout<<word<<"\t\t";
         }
    }
}