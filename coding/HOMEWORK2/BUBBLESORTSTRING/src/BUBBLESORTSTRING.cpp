//============================================================================
// Name        : BUBBLESORTSTRING.cpp
// Author      : BIBIN BABU
// Version     :
// Copyright   : Your copyright notice
// Description : BUBBLE SORT USING STRING, Ansi-style
//============================================================================

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    std::cout<<"enter some words"<<std::endl;
    std::string token ;
    std::vector<string>word;
    while(std::cin>>token)
    {
        word.push_back(token);
    }
for(int i=1; i<word.size(); i++)
{
	for(int j=0; j<word.size()-1; j++)
    {if(word[j]>word[i])
    {
     std::swap(word[j],word[i]);
    }

}}
std::cout<<"Sorted array is \n"<<std::endl;
for(int i=0; i<word.size(); i++)
	{
	std::cout<<word[i]<<std::endl;
	}
return 0;
}
