#pragma once

#include "Common.h"

vector<string> moum{ "110001", // 모음 + 모음약자
                     "001110",
                     "011100",
                     "100011",
                     "101001",
                     "001101",
                     "101100",
                     "100101",
                     "010101",
                     "101010",
                     "111010",
                     "001110",
                     "101110",
                     "001100",
                     "111001",
                     "111001",
                     "111100",
                     "111100",
                     "101100",
                     "010111",
                     "100111",
                     "011111",
                     "011110",
                     "100001",
                     "110011",
                     "110111",
                     "101101",
                     "111011",
                     "111111",
                     "110110",
                     "111101",
                     "101011",
                     "011101",
                     "111110" };

vector<string> doinsori{ "000100",
/*된소리 예외*/           "010100",
                         "000110",
                         "000001",
                         "000101" };

vector<string> excep{ "000111",
                      "001100",
                      "000001",
                      "001110",
                      "101100",
                      "111001",
                      "111100",
                      "100100",
                      "010100",
                      "100010",
                      "000110",
                      "000101",
                      "110100",
                      "110010",
                      "100110",
                      "010110" };

void brailleInit(map<string, vector<string>>& koreanBrailleMap)
{
    koreanBrailleMap["000100"].push_back("ㄱ");
    koreanBrailleMap["000001"].push_back("ㄲ"); //  000100
    koreanBrailleMap["100100"].push_back("ㄴ");
    koreanBrailleMap["010100"].push_back("ㄷ");
    koreanBrailleMap["000001"].push_back("ㄸ"); //  010100
    koreanBrailleMap["000010"].push_back("ㄹ");
    koreanBrailleMap["100010"].push_back("ㅁ");
    koreanBrailleMap["000110"].push_back("ㅂ");
    koreanBrailleMap["000001"].push_back("ㅃ"); //  000110
    koreanBrailleMap["000001"].push_back("ㅅ");
    koreanBrailleMap["000001"].push_back("ㅆ"); //  000001
    koreanBrailleMap["000000"].push_back(" ");
    koreanBrailleMap["000101"].push_back("ㅈ");
    koreanBrailleMap["000001"].push_back("ㅉ"); //  000101
    koreanBrailleMap["000011"].push_back("ㅊ");
    koreanBrailleMap["110100"].push_back("ㅋ");
    koreanBrailleMap["110010"].push_back("ㅌ");
    koreanBrailleMap["100110"].push_back("ㅍ");
    koreanBrailleMap["010110"].push_back("ㅎ");
    koreanBrailleMap["100000"].push_back("ㄱ,");
    koreanBrailleMap["010010"].push_back("ㄴ,");
    koreanBrailleMap["001010"].push_back("ㄷ,");
    koreanBrailleMap["010000"].push_back("ㄹ,");
    koreanBrailleMap["010001"].push_back("ㅁ,");
    koreanBrailleMap["110000"].push_back("ㅂ,");
    koreanBrailleMap["001000"].push_back("ㅅ,");
    koreanBrailleMap["011011"].push_back("ㅇ,");
    koreanBrailleMap["101000"].push_back("ㅈ,");
    koreanBrailleMap["011000"].push_back("ㅊ,");
    koreanBrailleMap["011010"].push_back("ㅋ,");
    koreanBrailleMap["011001"].push_back("ㅌ,");
    koreanBrailleMap["010011"].push_back("ㅍ,");
    koreanBrailleMap["001011"].push_back("ㅎ,");
    koreanBrailleMap["001100"].push_back("ㅆ,");
    koreanBrailleMap["110001"].push_back("ㅏ");
    koreanBrailleMap["001110"].push_back("ㅑ");
    koreanBrailleMap["011100"].push_back("ㅓ");
    koreanBrailleMap["100011"].push_back("ㅕ");
    koreanBrailleMap["101001"].push_back("ㅗ");
    koreanBrailleMap["001101"].push_back("ㅛ");
    koreanBrailleMap["101100"].push_back("ㅜ");
    koreanBrailleMap["100101"].push_back("ㅠ");
    koreanBrailleMap["010101"].push_back("ㅡ");
    koreanBrailleMap["101010"].push_back("ㅣ");
    koreanBrailleMap["111010"].push_back("ㅐ");
    koreanBrailleMap["001110"].push_back("ㅒ"); //  111010
    koreanBrailleMap["101110"].push_back("ㅔ");
    koreanBrailleMap["001100"].push_back("ㅖ");
    koreanBrailleMap["111001"].push_back("ㅘ");
    koreanBrailleMap["111001"].push_back("ㅙ"); //  111010
    koreanBrailleMap["101111"].push_back("ㅚ");
    koreanBrailleMap["111100"].push_back("ㅝ");
    koreanBrailleMap["111100"].push_back("ㅞ"); //  111010
    koreanBrailleMap["101100"].push_back("ㅟ"); //  111010
    koreanBrailleMap["010111"].push_back("ㅢ");
    koreanBrailleMap["110101"].push_back("ㄱㅏ");
    koreanBrailleMap["100100"].push_back("ㄴㅏ");
    koreanBrailleMap["010100"].push_back("ㄷㅏ");
    koreanBrailleMap["100010"].push_back("ㅁㅏ");
    koreanBrailleMap["000110"].push_back("ㅂㅏ");
    koreanBrailleMap["111000"].push_back("ㅅㅏ");
    koreanBrailleMap["000101"].push_back("ㅈㅏ");
    koreanBrailleMap["110100"].push_back("ㅋㅏ");
    koreanBrailleMap["110010"].push_back("ㅌㅏ");
    koreanBrailleMap["100110"].push_back("ㅍㅏ");
    koreanBrailleMap["010110"].push_back("ㅎㅏ");
    koreanBrailleMap["100111"].push_back("ㅓㄱ,");
    koreanBrailleMap["011111"].push_back("ㅓㄴ,");
    koreanBrailleMap["011110"].push_back("ㅓㄹ,");
    koreanBrailleMap["100001"].push_back("ㅕㄴ,");
    koreanBrailleMap["110011"].push_back("ㅕㄹ,");
    koreanBrailleMap["110111"].push_back("ㅕㅇ,");
    koreanBrailleMap["101101"].push_back("ㅗㄱ,");
    koreanBrailleMap["111011"].push_back("ㅗㄴ,");
    koreanBrailleMap["111111"].push_back("ㅗㅇ,");
    koreanBrailleMap["110110"].push_back("ㅜㄴ,");
    koreanBrailleMap["111101"].push_back("ㅜㄹ,");
    koreanBrailleMap["101011"].push_back("ㅡㄴ,");
    koreanBrailleMap["011101"].push_back("ㅡㄹ,");
    koreanBrailleMap["111110"].push_back("ㅣㄴ,");
    koreanBrailleMap["000111"].push_back("ㄱㅓㅅ,"); //  011100
}

void brailleExceptionInit(map<string, vector<string>>& BrailleEx)
{
    BrailleEx["000001"].push_back("ㅅ");
    BrailleEx["000001"].push_back("ㄲ"); //  000100
    BrailleEx["000001"].push_back("ㄸ"); //  010100
    BrailleEx["000001"].push_back("ㅃ"); //  000110  
    BrailleEx["000001"].push_back("ㅆ"); //  000001
    BrailleEx["000001"].push_back("ㅉ"); //  000101

    BrailleEx["000111"].push_back("ㄱㅓㅅ,"); //  011100

    BrailleEx["001100"].push_back("ㅆ,"); // 종성
    BrailleEx["001100"].push_back("ㅖ");

    BrailleEx["100100"].push_back("ㄴ");
    BrailleEx["100100"].push_back("ㄴㅏ");
    BrailleEx["010100"].push_back("ㄷ");
    BrailleEx["010100"].push_back("ㄷㅏ");
    BrailleEx["100010"].push_back("ㅁ");
    BrailleEx["100010"].push_back("ㅁㅏ");
    BrailleEx["000110"].push_back("ㅂ");
    BrailleEx["000110"].push_back("ㅂㅏ");
    BrailleEx["000101"].push_back("ㅈ");
    BrailleEx["000101"].push_back("ㅈㅏ");
    BrailleEx["110100"].push_back("ㅋ");
    BrailleEx["110100"].push_back("ㅋㅏ");
    BrailleEx["110010"].push_back("ㅌ");
    BrailleEx["110010"].push_back("ㅌㅏ");
    BrailleEx["100110"].push_back("ㅍ");
    BrailleEx["100110"].push_back("ㅍㅏ");
    BrailleEx["010110"].push_back("ㅎ");
    BrailleEx["010110"].push_back("ㅎㅏ");

    BrailleEx["001110"].push_back("ㅑ");
    BrailleEx["001110"].push_back("ㅒ"); //  111010
    BrailleEx["101100"].push_back("ㅜ");
    BrailleEx["101100"].push_back("ㅟ"); //  111010
    BrailleEx["111001"].push_back("ㅘ");
    BrailleEx["111001"].push_back("ㅙ"); //  111010
    BrailleEx["111100"].push_back("ㅝ");
    BrailleEx["111100"].push_back("ㅞ"); //  111010    
}

void div_exc_index(string letter, int& index)
{
    if (letter == excep[0]) //것
    {
        index = 1;
    }
    else if (letter == excep[1]) // ㅆ,ㅖ
    {
        index = 2;
    }
    else if (letter == excep[2])    // ㅅㄲㄸㅆㅉㅃ
    {
        index = 3;
    }
    else if (letter == excep[3] ||letter == excep[4] ||letter == excep[5] ||letter == excep[6])    //ㅑㅘㅝㅜ
    {
        index = 4;
    }
    else if (letter == excep[7] || letter == excep[8] || letter == excep[9] || letter == excep[10] || letter == excep[11] ||
             letter == excep[12] || letter == excep[13] || letter == excep[14] || letter == excep[15] )   // ㄴㄷㅁㅂㅈㅋㅌㅍㅎ
    {
        index = 5;
    }
    else
    {}
}


void check_moum(string letter, int& index)
{
    for (size_t i = 0; i < moum.size(); i++)
    {
        if (letter == moum[i])
        {
            index = 0;
            break;
        }
        else
        {
            index = 1;
        }
    }
}

void check_doinsori(string letter, int& index, int& flag)
{
    flag = 0;
    if (letter == doinsori[0])
    {
        index = 1;
    }
    else if (letter == doinsori[1])
    {
        index = 2;
    }
    else if (letter == doinsori[2])
    {
        index = 3;
    }
    else if (letter == doinsori[3])
    {
        index = 4;
    }
    else if (letter == doinsori[4])
    {
        index = 5;
    }
    else
    {
        index = 0;
        flag = 1;
    }
}
