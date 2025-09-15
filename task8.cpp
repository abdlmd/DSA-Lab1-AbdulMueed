#include<iostream>
using namespace std;
int patternMatch(string pattern,string completeString){

    for(int i=0;i<=completeString.size()-pattern.size();i++) {// we do string size-pattern size so e.g if string is 10lenth and patttern is 2,
    // it only runs till index 8 and does not go out of bound
    int j;
        for(j=0;j<pattern.size();j++){ // runs till pattern size because we only have to scan for pattern string in bigger string
            if(completeString[i+j]!=pattern[j])
            break;
            // outer loop i is for running turn by turn from indexes like first we run from 0 e.g if main string is hello and paern is el, first it will check el starting from h
            // then on second iteration it checks el starting from e and so on
            //the conidtion checks if at any stage the pattern dont match it start from next i index e.g if main string abc and patern is ac, as b and c dont match it will break


     }

     if(j==pattern.size()) // checks if j= pattern.size() since j will only be equal to it if its a complete match since unmatch breaks 
     {
        return i;
     }
    }
    return -1;
}
int main(){
    string pattern="";
    string complete="abcd";
    int index=patternMatch(pattern,complete);
    if(pattern.empty()){
        cout<<"The pattern entered is empty";
    }
    else if(index==-1)
    cout<<"The substring pattern does not appear in the mainstring";
    else{
        cout<<"The first occurence of pattern substring is at index: "<<index;
    }
}