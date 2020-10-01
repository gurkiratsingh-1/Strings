//Author: D Vishal Reddy 
//Github: dvishalreddy
//The following program capitalizes teh first letter of the Inputted string.
#include <iostream>
#include <string>
 
using namespace std;
 
class WordCase
{
 
    public:
    
    void Capitalize_first_letter(string text) 
    {
        
 
        text[0] = toupper(text[0]);
        for(int i=1;i<text.length();i++)
        {
            if(text[i]==' ')
            {
                text[i+1] = toupper(text[i+1]);
            }
        }
        cout << text << endl;
 
        
 
    }
 
};
 
int main() 
{
    string sentance;
    WordCase  *wc=new WordCase();
    getline(cin,sentance);
    wc->Capitalize_first_letter(sentance);
    return 0;
}
