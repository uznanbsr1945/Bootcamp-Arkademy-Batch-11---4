#include <iostream>
using namespace std;

bool isVowel(char huruf_hidup)
{
    huruf_hidup = toupper(huruf_hidup);
    return (huruf_hidup == 'A' || huruf_hidup == 'E' || huruf_hidup == 'I' ||
            huruf_hidup == 'O' || huruf_hidup == 'U');
}

int hitungVowels(string kata)
{
    int hitung = 0;
    for (int i = 0; i < kata.length(); i++)
        if (isVowel(kata[i])) // Check for vowel
            ++hitung;
    return hitung;
}

// Main Calling Function
int main()
{
    //string object
    string kata = "programmer";

    // Total numbers of Vowel
    for (int i = 0; i < hitungVowels(kata); i++)
    {
        cout << kata << endl;
    }
    return 0;
}