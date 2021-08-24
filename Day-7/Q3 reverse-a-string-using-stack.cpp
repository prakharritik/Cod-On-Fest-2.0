//https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1
char* reverse(char *S, int len)
{
    char *res = new char[len+1];
    stack<char> s;
    for(int i = 0 ; i < len; i++)
    {
    s.push(S[i]);
    }
    int j = 0;
    while(!s.empty())
    {
    res[j] = s.top();
    s.pop();
    j++;
    }
    res[j]='\0';
    return res;
}