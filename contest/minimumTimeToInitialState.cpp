int minimumTimeToInitialState(string word, int k)
{
    int n = word.length();
    int cnt = 0;
    int new_i = k;
    while (new_i < n)
    {
        bool check = true;
        int temp = new_i;
        int i = 0;
        while (temp < n)
        {
            if (word[i] != word[temp])
            {
                check = false;
                break;
            }
            temp++;
            i++;
        }
        if (check == true)
        {
            cnt = new_i / k;
            return cnt;
        }
        new_i += k;
    }
    return new_i / k;
}
