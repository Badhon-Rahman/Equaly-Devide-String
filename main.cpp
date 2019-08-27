#include <iostream>

using namespace std;

void EqualDevideString(string str, int strSize, int strParts){
          if(strSize % strParts != 0){
            cout << "Divide in equal is not possible." << endl;
          }
          else{
            int partSize = strSize / strParts;
            for(int i = 0; i < strSize; i++){
                if((i + 1) % partSize != 0){
                   cout << str[i];
                }
                else{
                   cout << str[i];
                   cout << endl;
                }
            }
          }
}

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    int strSize = str.length();
    EqualDevideString(str, strSize, 4);
    return 0;
}
