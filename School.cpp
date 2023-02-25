#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Student may implement another function as need
bool is_valid_char(char c) {
    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return true;
    else return false;
}

void process(char str[], char outstr[]) {
    // TODO
    const char SPACE = ' ';
    const char DELIM = '\0';
    while (*str){
		if (*str == DELIM) 
			break;
        if (is_valid_char(*str)){
            while (true){
				if (is_valid_char(*str) == false){
					str++;
					break;
                }
			    *outstr = *str;
                outstr++;
                str++;
            }
			*outstr = SPACE;
			outstr++;
			str++;
        }
		else {
			str++;
		}
    }
    if(*(outstr - 1) == SPACE) {
        *(outstr - 1) = DELIM;
    }
    else {
        *outstr = DELIM;
    }
}

int main(){
	char str[] = "abcadadf        ad  adf ";
	char *outstr = new char[strlen(str) + 1];
	process(str, outstr);
	cout << outstr << '.';
}
