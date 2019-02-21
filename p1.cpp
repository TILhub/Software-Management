#include <iostream>
#include <regex>
#include <fstream>
using namespace std;
int countMatchInRegex(std::string s, std::regex re)
{
    std::regex words_regex(re);
    auto words_begin = std::sregex_iterator(s.begin(), s.end(), words_regex);
    auto words_end = std::sregex_iterator();

    return std::distance(words_begin, words_end);
}
int main(void){
    system("cls");
    regex re_if("if(.*)");
    regex re_while("while(.*)");
    regex re_for("for(.*)");
    fstream ifs("input_p1.txt");
    string str;
    int c_if=0,c_while=0,c_for=0;
    while(ifs>>str){
        //cout<<str<<endl;
        c_if+=countMatchInRegex(str,re_if);
        c_while+=countMatchInRegex(str,re_while);
        c_for+=countMatchInRegex(str,re_for);
    }
    cout<<"\n\tif:\t"<<c_if<<endl;
    cout<<"\n\twhile:\t"<<c_while<<endl;
    cout<<"\n\tfor:\t"<<c_for<<endl;

    cout<<"\n\tCyclocmetric Complexity: "<<c_if+c_while+c_for+1<<endl;
    return 0;
}