/*
 This is an example for using TString class.
*/




#include <iostream>
#include "TString.h"

using std::cout;
using std::endl;


int main(int argc, const char * argv[]) {
    TString s1;
    s1<<"Hello world!";
    cout<<s1.str<<endl; // "Hello world!"
    s1.clear();
    cout<<s1.str<<endl; // Nothing
    std::string s = "This is a string ";
    s1<<s;
    cout<<s1.str<<endl; // "This is a string "
    TString s2("This is another string ");
    cout<<s2.str<<endl; // "This is another string "
    s1 += s2;
    cout<<s1.str<<endl; // "This is a string This is another string "
    TString path,file,result;
    path = TString("your/path/");
    ++path;
    path<<"/"; // your/path/1/
    file++; // "0"
    file<<".name";
    result = path + file;
    cout<<result.str<<endl; // your/path/1/0.name
    file++;
    result = path + file;
    cout<<result.str<<endl; // your/path/1/1.name
    ++path;
    result = path + file;
    cout<<result.str<<endl; // your/path/2/1.name
    path.index = 100;
    result = path + file;
    cout<<result.str<<endl; // your/path/100/1.name
    TString number;
    number<<123456;
    std::string out = number.str;
    cout<<out<<endl;
    return 0;
}
