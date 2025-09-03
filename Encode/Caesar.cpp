#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int encode (int);

const int key = 3;

int main()
{
    string letter;
    cout<<"enter a word"<<endl;
    cin>>letter;

    for(int i = 0; i < letter.size(); i++)
    {
        int text = (int)letter[i];
        cout<< encode(text);

    }
    cout<<endl;
    return 0;
}

int encode (int text)
{
    int salt = rand() % 26;
    if(text >= 'A' && text <= 'Z')
    {
        return 'A'+(text - 'A' + key + salt)%26;
    }
    if(text >= 'a' && text <= 'z')
    {
        return 'a'+(text - 'a' + key + salt)%26;
    }
    return text;

}