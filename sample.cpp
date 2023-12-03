#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include "Common.h"

// 한글 초/중/종성 출력 샘플코드
void init_cho(map<char, int> & hangeul_cho)
{
    hangeul_cho.insert(pair<char, int>('ㄱ', 0));
    hangeul_cho.insert(pair<char, int>('ㄲ', 1));
    hangeul_cho.insert(pair<char, int>('ㄴ', 2));
    hangeul_cho.insert(pair<char, int>('ㄷ', 3));
    hangeul_cho.insert(pair<char, int>('ㄸ', 4));
    hangeul_cho.insert(pair<char, int>('ㄹ', 5));
    hangeul_cho.insert(pair<char, int>('ㅁ', 6));
    hangeul_cho.insert(pair<char, int>('ㅂ', 7));
    hangeul_cho.insert(pair<char, int>('ㅃ', 8));
    hangeul_cho.insert(pair<char, int>('ㅅ', 9));
    hangeul_cho.insert(pair<char, int>('ㅆ', 10));
    hangeul_cho.insert(pair<char, int>('ㅇ', 11));
    hangeul_cho.insert(pair<char, int>('ㅈ', 12));
    hangeul_cho.insert(pair<char, int>('ㅉ', 13));
    hangeul_cho.insert(pair<char, int>('ㅊ', 14));
    hangeul_cho.insert(pair<char, int>('ㅋ', 15));
    hangeul_cho.insert(pair<char, int>('ㅌ', 16));
    hangeul_cho.insert(pair<char, int>('ㅍ', 17));
    hangeul_cho.insert(pair<char, int>('ㅎ', 18));
}

void init_jung(map<char, int>& hangeul_jung)
{
    hangeul_jung.insert(pair<char, int>('ㅏ', 0));
    hangeul_jung.insert(pair<char, int>('ㅐ', 1));
    hangeul_jung.insert(pair<char, int>('ㅑ', 2));
    hangeul_jung.insert(pair<char, int>('ㅒ', 3));
    hangeul_jung.insert(pair<char, int>('ㅓ', 4));
    hangeul_jung.insert(pair<char, int>('ㅔ', 5));
    hangeul_jung.insert(pair<char, int>('ㅕ', 6));
    hangeul_jung.insert(pair<char, int>('ㅖ', 7));
    hangeul_jung.insert(pair<char, int>('ㅗ', 8));
    hangeul_jung.insert(pair<char, int>('ㅘ', 9));
    hangeul_jung.insert(pair<char, int>('ㅙ', 10));
    hangeul_jung.insert(pair<char, int>('ㅚ', 11));
    hangeul_jung.insert(pair<char, int>('ㅛ', 12));
    hangeul_jung.insert(pair<char, int>('ㅜ', 13));
    hangeul_jung.insert(pair<char, int>('ㅝ', 14));
    hangeul_jung.insert(pair<char, int>('ㅞ', 15));
    hangeul_jung.insert(pair<char, int>('ㅟ', 16));
    hangeul_jung.insert(pair<char, int>('ㅠ', 17));
    hangeul_jung.insert(pair<char, int>('ㅡ', 18));
    hangeul_jung.insert(pair<char, int>('ㅢ', 19));
    hangeul_jung.insert(pair<char, int>('ㅣ', 20));
}

void init_jong(map<char, int>& hangeul_jong)
{
    //hangeul_jong.insert(pair<char, int>('ㄱ', 0));
    hangeul_jong.insert(pair<char, int>('ㄱ', 1));
    hangeul_jong.insert(pair<char, int>('ㄲ', 2));
    hangeul_jong.insert(pair<char, int>('ㄳ', 3));
    hangeul_jong.insert(pair<char, int>('ㄴ', 4));
    hangeul_jong.insert(pair<char, int>('ㄵ', 5));
    hangeul_jong.insert(pair<char, int>('ㄶ', 6));
    hangeul_jong.insert(pair<char, int>('ㄷ', 7));
    hangeul_jong.insert(pair<char, int>('ㄹ', 8));
    hangeul_jong.insert(pair<char, int>('ㄺ', 9));
    hangeul_jong.insert(pair<char, int>('ㄻ', 10));
    hangeul_jong.insert(pair<char, int>('ㄼ', 11));
    hangeul_jong.insert(pair<char, int>('ㄽ', 12));
    hangeul_jong.insert(pair<char, int>('ㄾ', 13));
    hangeul_jong.insert(pair<char, int>('ㄿ', 14));
    hangeul_jong.insert(pair<char, int>('ㅀ', 15));
    hangeul_jong.insert(pair<char, int>('ㅁ', 16));
    hangeul_jong.insert(pair<char, int>('ㅂ', 17));
    hangeul_jong.insert(pair<char, int>('ㅄ', 18));
    hangeul_jong.insert(pair<char, int>('ㅅ', 19));
    hangeul_jong.insert(pair<char, int>('ㅆ', 20));
    hangeul_jong.insert(pair<char, int>('ㅇ', 21));
    hangeul_jong.insert(pair<char, int>('ㅈ', 22));
    hangeul_jong.insert(pair<char, int>('ㅊ', 23));
    hangeul_jong.insert(pair<char, int>('ㅋ', 24));
    hangeul_jong.insert(pair<char, int>('ㅌ', 25));
    hangeul_jong.insert(pair<char, int>('ㅍ', 26));
    hangeul_jong.insert(pair<char, int>('ㅎ', 27));
}


int main() {
    setlocale(LC_CTYPE, "");

    map<char, int> hangeul_cho;
    map<char, int> hangeul_jung;
    map<char, int> hangeul_jong;
    init_cho(hangeul_cho);
    init_jung(hangeul_jung);
    init_jong(hangeul_jong);

    char ch = 'ㄱ';
    char ch2 = 'ㅏ';
    char ch3 = 'ㄽ';
    wchar_t cho = hangeul_cho.at(ch);
    wchar_t j1 = hangeul_jung[ch2];
    wchar_t j2 = hangeul_jong[ch3];

    //wchar_t star = 0x2605;
    wchar_t abc = 44032 + cho * 21 * 28 + j1 * 28 + j2;

    //wchar_t test = 44912;
    wprintf(L"%lc\n", abc);
}
