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
    //SetConsoleOutputCP(949); //Terminal Consol Kor����
    //SetConsoleOutputCP(65001); // �ѱ۱��� �ذ�
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

    string abc = "001100"; // �� �� ����ħ
    string sentence;

    cout << "���̳ʸ�: " << abc << endl;
    int count = koreanBrailleMap[abc].size();
    cout << "���̳ʸ� �ش��ϴ� ���� ����: " << count << endl;
    sentence += *(koreanBrailleMap[abc].data());
    sentence += *(koreanBrailleMap[abc].data() + 1);
    sentence += *(koreanBrailleMap["000000"].data());

    cout << "sentence: " << sentence << endl;
    for (size_t i = 0; i < count; i++)
    {
        std::cout << *(koreanBrailleMap[abc].data() + i) << ' ';
    }
    cout << endl;

    // �ѱ� ������ ���
    //string kor = "������";
    //std::cout << kor <<std::endl;
    //print_Kor(koraa);

    // Map ������ ���
    //std::cout << " Map:\n";
    //print_Map(koreanBrailleMap);

    return 0;
}