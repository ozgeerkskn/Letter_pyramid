#include <iostream>
#include <string>
using namespace std;
int main() {
    string str{};
    cout << "Enters the string of letters: ";
    getline(cin,str);
    
    
    size_t num_str = str.length();
    int position{0};
    
    for(char i: str){
        size_t spaces = num_str - position;
        while(spaces > 0){
            cout << " ";
            --spaces;
            
            }
           
            for(size_t j=0; j < position; j++) {   
                cout << str.at(j);
                }
                cout << i;
                
                for(int j = position -1; j >=0; j--){
                    auto k = static_cast<size_t>(j);
                    cout << str.at(k);
                    }
                    cout << endl;
                    ++position;
            
        }
    
    