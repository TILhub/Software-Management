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
    regex re_if("if(.*)");
    regex re_while("while(.*)");
    regex re_for("for(.*)");
    fstream ifs("input.txt");
    string str;
    int c_if=0,c_while=0,c_for=0;
    while(ifs>>str){
        cout<<str<<endl;
        c_if+=countMatchInRegex(str,re_if);
        c_while+=countMatchInRegex(str,re_while);
        c_for+=countMatchInRegex(str,re_for);
    }
    cout<<"IF: "<<c_if<<endl;
    cout<<"WHILE: "<<c_while<<endl;
    cout<<"FOR: "<<c_for<<endl;
    return 0;
}