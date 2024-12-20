#include <bits/stdc++.h>
using namespace std;
void print(stack<int> stack)
{
    if (stack.empty())
    {
    cout<<endl;
        return;
    }
    int temp = stack.top();
    stack.pop();
    print(stack);
    cout << temp << " ";
    stack.push(temp);
}
void insertAtBottom(stack<int>& stack,int t)
{
    if (stack.empty())
    {
        stack.push(t);
        return;
    }
    int temp = stack.top();
    stack.pop();
    insertAtBottom(stack,t);
    // cout << temp << " ";
    stack.push(temp);

}
void insertSorted(stack<int>& stack,int t)
{
    if (stack.empty())
    {
        stack.push(t);
        return;
    }
    int temp = stack.top();
    if(temp<=t)
    {
        stack.push(t);
        return;
    }
    stack.pop();
    insertSorted(stack,t);
    // cout << temp << " ";
    stack.push(temp);

}
void sort(stack<int> &stack)
{
    if(stack.empty())return;
    int temp = stack.top();
    stack.pop();
    sort(stack);
    insertSorted(stack,temp);

}
void reverse(stack<int>& stack)
{
    if (stack.empty())
    {
        return;
    }
    int temp = stack.top();
    stack.pop();
    reverse(stack);
    cout << temp << " ";
    insertAtBottom(stack,temp);
}
int main()
{
    // your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<int> st;
    for (int i = 5; i >=0 ; --i)
    {
        st.push(i);
    }
    // st.push(15);
    print(st);
    insertAtBottom(st,55);
    cout<<endl;
    print(st);
    // insertSorted(st, 10);
    // print(st);
    // cout<<endl;
    // sort(st);
    // insertSorted(st,10);
    // insertSorted(st,9);
    // print(st);
}