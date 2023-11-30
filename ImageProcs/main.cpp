#include "Braille_Def.h"

void print_Map(const map<string, vector<string>> &koreanBrailleMap)
{
    for (const auto& pair : koreanBrailleMap) {
        std::cout << pair.first << " : ";

        for (const auto& value : pair.second) {
            //if (pair.first == "001100")
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
}

void print_Kor(string stringKor)//Korean - 3Bytes
{
    //SetConsoleOutputCP(949); //Terminal Consol Kor지원
    //SetConsoleOutputCP(65001); // 한글깨짐 해결
    const int KorOffset = 2;
    for (size_t i = 0; i < stringKor.size(); i += KorOffset)
    {
        std::cout << stringKor.substr(i, KorOffset);
    }
    std::cout << std::endl;
}

int main() {

    map<string, vector<string>> koreanBrailleMap;
    brailleInit(koreanBrailleMap);

    string abc = "001100"; // ㅆ ㅖ ㅆ받침
    string sentence;

    cout << "바이너리: " << abc << endl;
    int count = koreanBrailleMap[abc].size();
    cout << "바이너리 해당하는 문자 개수: " << count << endl;
    sentence += *(koreanBrailleMap[abc].data());
    sentence += *(koreanBrailleMap[abc].data() + 1);
    sentence += *(koreanBrailleMap["000000"].data());

    cout << "sentence: " << sentence << endl;
    for (size_t i = 0; i < count; i++)
    {
        std::cout << *(koreanBrailleMap[abc].data() + i) << ' ';
    }
    cout << endl;

    // 한글 데이터 출력
    //string kor = "가나다";
    //std::cout << kor <<std::endl;
    //print_Kor(koraa);

    // Map 데이터 출력
    //std::cout << " Map:\n";
    //print_Map(koreanBrailleMap);

    return 0;
}