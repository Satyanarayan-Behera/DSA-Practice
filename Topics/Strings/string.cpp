#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool palindrome (string str){
    string result = str;
    int st=0, end=str.size()-1;
    while(st < end){
        swap(str[st] , str[end]);
        st++; end--;
    }
    if(result == str) return true;
    else return false;
}

int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);
    cout<<"palimdrome  : "<<palindrome(str)<<endl;
    return 0;
}

/*int main(){
    // char arr[20];
    // string str = "hi satya";
    // cout<<"Enter char array string : ";
    // cin.getline(arr , 20);

    // for(int i=0; i<arr[i] != '\0'; i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    string str;
    cout<<"Enter a string : ";
    getline(cin , str);
    cout<<str<<endl;
    
    // cout<<sizeof(arr)<<endl;  //count null char also
    // cout<<str.length()<<endl;  //not count null char in string variable
    return 0;
}*/



/* //permutation in string
bool isfreqsame(int freq1[] , int freq2[]){
    for(int i=0; i<26; i++){
        if(freq1[i] != freq2[i]) return false;
    }
    return true;
}
bool permutationInString(string s1 , string s2){
    //for initial check in 
    if(s2.length() < s1.length()) return false;
    int freq[26] = {0};
    for(int i=0; i<s1.length(); i++){
        freq[s1[i] - 'a']++;
    }

    int windsize = s1.length();

    for(int i=0; i<s2.length(); i++){
        int windIdx = 0, idx = i;
        int windfreq[26] = {0};
        while(windIdx < windsize && idx < s2.length()){
            windfreq[s2[idx] - 'a']++;
            windIdx++; idx++;
        }
        if(isfreqsame(freq , windfreq)){
            return true;
        }
    }
    return false;
}
int main(){
    string s1 = "ab" , s2 = "eidbaooo";
    int ans = permutationInString(s1 , s2);
    if(ans == 1) cout<<"permutation in string is avaliable ."<< endl;
    else cout<<"permutation in string is  Not-avaliable ."<< endl;

    return 0;
} */

/* //string reverse with words
string reversestring(string s){
    string ans = "";
    reverse(s.begin() , s.end());
    for(int i=0; i< s.length(); i++){
        string word = "";
        while(i < s.length() && s[i] != ' '){
            word += s[i]; 
            i++;
        }
        reverse(word.begin() , word.end());
        if(word.length() > 0){
            ans += " " + word;
        }
    }
    // Safety check to handle edge cases safely
    return ans.length() > 0 ? ans.substr(1) : "";  //conditional statement
}

int main(){

    string s = "the sky is blue";
    cout<<"reverse string is : "<<reversestring(s)<<endl;

    return 0;
}*/


/*
// Given an array of characters chars, compress it using the following algorithm:
// Begin with an empty string s. For each group of consecutive repeating characters in chars:
// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.
// After you are done modifying the input array, return the new length of the array.
// You must write an algorithm that uses only constant extra space.
// Note: The characters in the array beyond the returned length do not matter and should be ignored.


int stringcompress(vector<char>& chars){
    int idx=0;
    int n = chars.size();
    for(int i=0; i<n; i++){
        int count=0;
        char ch = chars[i];
        while(i < n && chars[i] == ch){
            count++; i++;
        }
        
        if(count == 1){
            chars[idx++] = ch;
        }else{
            chars[idx++] = ch;
            string str = to_string(count);
            for(char digit : str){
                chars[idx++] = digit;
            }
        }
        i--;  //to get back one step back to its original serching position bcz, it moves one step forward during iteration end in loop.
    }
    chars.resize(idx);
    return idx; //bcz idx starts from 0.
}

int main(){
    vector<char> chars = {'a', 'a', 'b', 'b','c', 'c', 'c'};
    
    cout<<"the string compression will be : " <<stringcompress(chars)<<endl;
    
    return 0; 
} */



