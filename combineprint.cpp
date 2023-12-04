#include "Common.h"
#include <queue>


void init_cho(map<string, int>& hangeul_cho)
{
    hangeul_cho.insert(pair<string, int>("ぁ", 0));
    hangeul_cho.insert(pair<string, int>("あ", 1));
    hangeul_cho.insert(pair<string, int>("い", 2));
    hangeul_cho.insert(pair<string, int>("ぇ", 3));
    hangeul_cho.insert(pair<string, int>("え", 4));
    hangeul_cho.insert(pair<string, int>("ぉ", 5));
    hangeul_cho.insert(pair<string, int>("け", 6));
    hangeul_cho.insert(pair<string, int>("げ", 7));
    hangeul_cho.insert(pair<string, int>("こ", 8));
    hangeul_cho.insert(pair<string, int>("さ", 9));
    hangeul_cho.insert(pair<string, int>("ざ", 10));
    hangeul_cho.insert(pair<string, int>("し", 11));
    hangeul_cho.insert(pair<string, int>("じ", 12));
    hangeul_cho.insert(pair<string, int>("す", 13));
    hangeul_cho.insert(pair<string, int>("ず", 14));
    hangeul_cho.insert(pair<string, int>("せ", 15));
    hangeul_cho.insert(pair<string, int>("ぜ", 16));
    hangeul_cho.insert(pair<string, int>("そ", 17));
    hangeul_cho.insert(pair<string, int>("ぞ", 18));
}

void init_jung(map<string, int>& hangeul_jung)
{
    hangeul_jung.insert(pair<string, int>("た", 0));
    hangeul_jung.insert(pair<string, int>("だ", 1));
    hangeul_jung.insert(pair<string, int>("ち", 2));
    hangeul_jung.insert(pair<string, int>("ぢ", 3));
    hangeul_jung.insert(pair<string, int>("っ", 4));
    hangeul_jung.insert(pair<string, int>("つ", 5));
    hangeul_jung.insert(pair<string, int>("づ", 6));
    hangeul_jung.insert(pair<string, int>("て", 7));
    hangeul_jung.insert(pair<string, int>("で", 8));
    hangeul_jung.insert(pair<string, int>("と", 9));
    hangeul_jung.insert(pair<string, int>("ど", 10));
    hangeul_jung.insert(pair<string, int>("な", 11));
    hangeul_jung.insert(pair<string, int>("に", 12));
    hangeul_jung.insert(pair<string, int>("ぬ", 13));
    hangeul_jung.insert(pair<string, int>("ね", 14));
    hangeul_jung.insert(pair<string, int>("の", 15));
    hangeul_jung.insert(pair<string, int>("は", 16));
    hangeul_jung.insert(pair<string, int>("ば", 17));
    hangeul_jung.insert(pair<string, int>("ぱ", 18));
    hangeul_jung.insert(pair<string, int>("ひ", 19));
    hangeul_jung.insert(pair<string, int>("び", 20));
}

void init_jong(map<string, int>& hangeul_jong)
{
    hangeul_jong.insert(pair<string, int>("x", 0));
    hangeul_jong.insert(pair<string, int>("ぁ", 1));
    hangeul_jong.insert(pair<string, int>("あ", 2));
    hangeul_jong.insert(pair<string, int>("ぁさ", 3));
    hangeul_jong.insert(pair<string, int>("い", 4));
    hangeul_jong.insert(pair<string, int>("いじ", 5));
    hangeul_jong.insert(pair<string, int>("いぞ", 6));
    hangeul_jong.insert(pair<string, int>("ぇ", 7));
    hangeul_jong.insert(pair<string, int>("ぉ", 8));
    hangeul_jong.insert(pair<string, int>("ぉぁ", 9));
    hangeul_jong.insert(pair<string, int>("ぉけ", 10));
    hangeul_jong.insert(pair<string, int>("ぉげ", 11));
    hangeul_jong.insert(pair<string, int>("ぉさ", 12));
    hangeul_jong.insert(pair<string, int>("ぉぜ", 13));
    hangeul_jong.insert(pair<string, int>("ぉそ", 14));
    hangeul_jong.insert(pair<string, int>("ぉぞ", 15));
    hangeul_jong.insert(pair<string, int>("け", 16));
    hangeul_jong.insert(pair<string, int>("げ", 17));
    hangeul_jong.insert(pair<string, int>("げさ", 18));
    hangeul_jong.insert(pair<string, int>("さ", 19));
    hangeul_jong.insert(pair<string, int>("ざ", 20));
    hangeul_jong.insert(pair<string, int>("し", 21));
    hangeul_jong.insert(pair<string, int>("じ", 22));
    hangeul_jong.insert(pair<string, int>("ず", 23));
    hangeul_jong.insert(pair<string, int>("せ", 24));
    hangeul_jong.insert(pair<string, int>("ぜ", 25));
    hangeul_jong.insert(pair<string, int>("そ", 26));
    hangeul_jong.insert(pair<string, int>("ぞ", 27));
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
//    string sentence = "けぬぁぬし,ぞと さたけ,ずっい,ぉび ぞとぉづぁたし,さたい,";
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
                q.push("し");
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