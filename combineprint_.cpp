#include "Common.h"
#include <queue>


void init_cho(map<string, int>& hangeul_cho)
{
    hangeul_cho.insert(pair<string, int>("ㄱ", 0));
    hangeul_cho.insert(pair<string, int>("ㄲ", 1));
    hangeul_cho.insert(pair<string, int>("ㄴ", 2));
    hangeul_cho.insert(pair<string, int>("ㄷ", 3));
    hangeul_cho.insert(pair<string, int>("ㄸ", 4));
    hangeul_cho.insert(pair<string, int>("ㄹ", 5));
    hangeul_cho.insert(pair<string, int>("ㅁ", 6));
    hangeul_cho.insert(pair<string, int>("ㅂ", 7));
    hangeul_cho.insert(pair<string, int>("ㅃ", 8));
    hangeul_cho.insert(pair<string, int>("ㅅ", 9));
    hangeul_cho.insert(pair<string, int>("ㅆ", 10));
    hangeul_cho.insert(pair<string, int>("ㅇ", 11));
    hangeul_cho.insert(pair<string, int>("ㅈ", 12));
    hangeul_cho.insert(pair<string, int>("ㅉ", 13));
    hangeul_cho.insert(pair<string, int>("ㅊ", 14));
    hangeul_cho.insert(pair<string, int>("ㅋ", 15));
    hangeul_cho.insert(pair<string, int>("ㅌ", 16));
    hangeul_cho.insert(pair<string, int>("ㅍ", 17));
    hangeul_cho.insert(pair<string, int>("ㅎ", 18));
}

void init_jung(map<string, int>& hangeul_jung)
{
    hangeul_jung.insert(pair<string, int>("ㅏ", 0));
    hangeul_jung.insert(pair<string, int>("ㅐ", 1));
    hangeul_jung.insert(pair<string, int>("ㅑ", 2));
    hangeul_jung.insert(pair<string, int>("ㅒ", 3));
    hangeul_jung.insert(pair<string, int>("ㅓ", 4));
    hangeul_jung.insert(pair<string, int>("ㅔ", 5));
    hangeul_jung.insert(pair<string, int>("ㅕ", 6));
    hangeul_jung.insert(pair<string, int>("ㅖ", 7));
    hangeul_jung.insert(pair<string, int>("ㅗ", 8));
    hangeul_jung.insert(pair<string, int>("ㅘ", 9));
    hangeul_jung.insert(pair<string, int>("ㅙ", 10));
    hangeul_jung.insert(pair<string, int>("ㅚ", 11));
    hangeul_jung.insert(pair<string, int>("ㅛ", 12));
    hangeul_jung.insert(pair<string, int>("ㅜ", 13));
    hangeul_jung.insert(pair<string, int>("ㅝ", 14));
    hangeul_jung.insert(pair<string, int>("ㅞ", 15));
    hangeul_jung.insert(pair<string, int>("ㅟ", 16));
    hangeul_jung.insert(pair<string, int>("ㅠ", 17));
    hangeul_jung.insert(pair<string, int>("ㅡ", 18));
    hangeul_jung.insert(pair<string, int>("ㅢ", 19));
    hangeul_jung.insert(pair<string, int>("ㅣ", 20));
}

void init_jong(map<string, int>& hangeul_jong)
{
    hangeul_jong.insert(pair<string, int>("x", 0));
    hangeul_jong.insert(pair<string, int>("ㄱ", 1));
    hangeul_jong.insert(pair<string, int>("ㄲ", 2));
    hangeul_jong.insert(pair<string, int>("ㄱㅅ", 3));
    hangeul_jong.insert(pair<string, int>("ㄴ", 4));
    hangeul_jong.insert(pair<string, int>("ㄴㅈ", 5));
    hangeul_jong.insert(pair<string, int>("ㄴㅎ", 6));
    hangeul_jong.insert(pair<string, int>("ㄷ", 7));
    hangeul_jong.insert(pair<string, int>("ㄹ", 8));
    hangeul_jong.insert(pair<string, int>("ㄹㄱ", 9));
    hangeul_jong.insert(pair<string, int>("ㄹㅁ", 10));
    hangeul_jong.insert(pair<string, int>("ㄹㅂ", 11));
    hangeul_jong.insert(pair<string, int>("ㄹㅅ", 12));
    hangeul_jong.insert(pair<string, int>("ㄹㅌ", 13));
    hangeul_jong.insert(pair<string, int>("ㄹㅍ", 14));
    hangeul_jong.insert(pair<string, int>("ㄹㅎ", 15));
    hangeul_jong.insert(pair<string, int>("ㅁ", 16));
    hangeul_jong.insert(pair<string, int>("ㅂ", 17));
    hangeul_jong.insert(pair<string, int>("ㅂㅅ", 18));
    hangeul_jong.insert(pair<string, int>("ㅅ", 19));
    hangeul_jong.insert(pair<string, int>("ㅆ", 20));
    hangeul_jong.insert(pair<string, int>("ㅇ", 21));
    hangeul_jong.insert(pair<string, int>("ㅈ", 22));
    hangeul_jong.insert(pair<string, int>("ㅊ", 23));
    hangeul_jong.insert(pair<string, int>("ㅋ", 24));
    hangeul_jong.insert(pair<string, int>("ㅌ", 25));
    hangeul_jong.insert(pair<string, int>("ㅍ", 26));
    hangeul_jong.insert(pair<string, int>("ㅎ", 27));
}


void combine_hangul(string ch, string ch2, string ch3)
{
    setlocale(LC_CTYPE, "");

    map<string, int> hangeul_cho;
    map<string, int> hangeul_jung;
    map<string, int> hangeul_jong;
    init_cho(hangeul_cho);
    init_jung(hangeul_jung);
    init_jong(hangeul_jong);

    wchar_t cho = hangeul_cho.at(ch);
    wchar_t j1 = hangeul_jung[ch2];
    wchar_t j2 = hangeul_jong[ch3];

    //wchar_t star = 0x2605;
    wchar_t abc = 44032 + cho * 21 * 28 + j1 * 28 + j2;

    //wchar_t test = 44912;
    wprintf(L"%lc", abc);


}

int main()
{
//    string sentence = "ㅁㅜㄱㅜㅇ,ㅎㅘ ㅅㅏㅁ,ㅊㅓㄴ,ㄹㅣ ㅎㅘㄹㅕㄱㅏㅇ,ㅅㅏㄴ,";
    sentence += "       ";
    queue<string>q;
    map<string, int> findjung;
    init_jung(findjung);
    for (int i = 0; i < sentence.length() - 7; i += 2)
    {
        string ch1, ch2, ch3;
        if (sentence[i] != ' ')
        {
            string st = sentence.substr(i, 2);
            q.push(st);
            auto it = findjung.find(st);
            if (q.size() == 1 && it != findjung.end())
            {
                q.pop();
                q.push("ㅇ");
                q.push(st);
            }
            else;
            if (q.size() == 2 && sentence[i + 4] == ',')
            {
                ch1 = q.front();
                ch2 = q.back();
                ch3 = sentence.substr(i + 2, 2);
                if (sentence[i + 7] == ',')
                {
                    string tmp = sentence.substr(i + 5, 2);
                    ch3 += tmp;
                    i += 3;
                }
                combine_hangul(ch1, ch2, ch3);
                while (!q.empty())q.pop();
                i += 3;
            }
            else if (q.size() == 2 && sentence[i + 4] != ',')
            {
                ch1 = q.front();
                ch2 = q.back();
                combine_hangul(ch1, ch2, "x");
                while (!q.empty())q.pop();
            }
        }
        else
        {
            cout << " ";
            i--;
        }
    }
}