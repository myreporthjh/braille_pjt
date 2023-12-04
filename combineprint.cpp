#include "Common.h"
#include <queue>


void init_cho(map<string, int>& hangeul_cho)
{
    hangeul_cho.insert(pair<string, int>("��", 0));
    hangeul_cho.insert(pair<string, int>("��", 1));
    hangeul_cho.insert(pair<string, int>("��", 2));
    hangeul_cho.insert(pair<string, int>("��", 3));
    hangeul_cho.insert(pair<string, int>("��", 4));
    hangeul_cho.insert(pair<string, int>("��", 5));
    hangeul_cho.insert(pair<string, int>("��", 6));
    hangeul_cho.insert(pair<string, int>("��", 7));
    hangeul_cho.insert(pair<string, int>("��", 8));
    hangeul_cho.insert(pair<string, int>("��", 9));
    hangeul_cho.insert(pair<string, int>("��", 10));
    hangeul_cho.insert(pair<string, int>("��", 11));
    hangeul_cho.insert(pair<string, int>("��", 12));
    hangeul_cho.insert(pair<string, int>("��", 13));
    hangeul_cho.insert(pair<string, int>("��", 14));
    hangeul_cho.insert(pair<string, int>("��", 15));
    hangeul_cho.insert(pair<string, int>("��", 16));
    hangeul_cho.insert(pair<string, int>("��", 17));
    hangeul_cho.insert(pair<string, int>("��", 18));
}

void init_jung(map<string, int>& hangeul_jung)
{
    hangeul_jung.insert(pair<string, int>("��", 0));
    hangeul_jung.insert(pair<string, int>("��", 1));
    hangeul_jung.insert(pair<string, int>("��", 2));
    hangeul_jung.insert(pair<string, int>("��", 3));
    hangeul_jung.insert(pair<string, int>("��", 4));
    hangeul_jung.insert(pair<string, int>("��", 5));
    hangeul_jung.insert(pair<string, int>("��", 6));
    hangeul_jung.insert(pair<string, int>("��", 7));
    hangeul_jung.insert(pair<string, int>("��", 8));
    hangeul_jung.insert(pair<string, int>("��", 9));
    hangeul_jung.insert(pair<string, int>("��", 10));
    hangeul_jung.insert(pair<string, int>("��", 11));
    hangeul_jung.insert(pair<string, int>("��", 12));
    hangeul_jung.insert(pair<string, int>("��", 13));
    hangeul_jung.insert(pair<string, int>("��", 14));
    hangeul_jung.insert(pair<string, int>("��", 15));
    hangeul_jung.insert(pair<string, int>("��", 16));
    hangeul_jung.insert(pair<string, int>("��", 17));
    hangeul_jung.insert(pair<string, int>("��", 18));
    hangeul_jung.insert(pair<string, int>("��", 19));
    hangeul_jung.insert(pair<string, int>("��", 20));
}

void init_jong(map<string, int>& hangeul_jong)
{
    hangeul_jong.insert(pair<string, int>("x", 0));
    hangeul_jong.insert(pair<string, int>("��", 1));
    hangeul_jong.insert(pair<string, int>("��", 2));
    hangeul_jong.insert(pair<string, int>("����", 3));
    hangeul_jong.insert(pair<string, int>("��", 4));
    hangeul_jong.insert(pair<string, int>("����", 5));
    hangeul_jong.insert(pair<string, int>("����", 6));
    hangeul_jong.insert(pair<string, int>("��", 7));
    hangeul_jong.insert(pair<string, int>("��", 8));
    hangeul_jong.insert(pair<string, int>("����", 9));
    hangeul_jong.insert(pair<string, int>("����", 10));
    hangeul_jong.insert(pair<string, int>("����", 11));
    hangeul_jong.insert(pair<string, int>("����", 12));
    hangeul_jong.insert(pair<string, int>("����", 13));
    hangeul_jong.insert(pair<string, int>("����", 14));
    hangeul_jong.insert(pair<string, int>("����", 15));
    hangeul_jong.insert(pair<string, int>("��", 16));
    hangeul_jong.insert(pair<string, int>("��", 17));
    hangeul_jong.insert(pair<string, int>("����", 18));
    hangeul_jong.insert(pair<string, int>("��", 19));
    hangeul_jong.insert(pair<string, int>("��", 20));
    hangeul_jong.insert(pair<string, int>("��", 21));
    hangeul_jong.insert(pair<string, int>("��", 22));
    hangeul_jong.insert(pair<string, int>("��", 23));
    hangeul_jong.insert(pair<string, int>("��", 24));
    hangeul_jong.insert(pair<string, int>("��", 25));
    hangeul_jong.insert(pair<string, int>("��", 26));
    hangeul_jong.insert(pair<string, int>("��", 27));
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
//    string sentence = "���̤��̤�,���� ������,���ä�,���� ���Ȥ��Ť�����,������,";
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
                q.push("��");
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