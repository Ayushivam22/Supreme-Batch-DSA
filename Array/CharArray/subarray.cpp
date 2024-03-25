#include <iostream>
using namespace std;
void removeOccurrences(string &s, string part)
{
    //base case
    if(s.find(part) == string::npos) return ;
    //process
    s.erase(s.find(part),part.length());

    //recursive call
    return removeOccurrences(s,part);
}
int main()
{
    string s = "daabcbaabcbc", part = "abc";
    removeOccurrences(s, part);
    cout << s << endl;
}