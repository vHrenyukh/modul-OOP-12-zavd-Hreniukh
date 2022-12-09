#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

string get_word(istream& is) {
    string w;
    is >> w;
    return w;
}
int main()
{
    ifstream file("modul.txt");
    if (!file) {
        cerr << "error! can't open the file" << endl;
        return 1;
    }
    else
    {
        cout << "file is opened!"<< endl;

    }
    string word, max_word, wordcount;
    size_t len, max_len = 0;
    
    while (file) {
        word = get_word(file);
        if (word.length() == 0)
            break;
        len = word.length();
        if (len > max_len) {
            max_len = len;
            max_word = word;
        }
        if (max_word > word) {
            wordcount='3';
        }
       

    }
    file.close();
   
    cout << "the longest word: " << max_word << endl;
    cout << "how much the word happened in the text: " << wordcount << "\n";
}
 