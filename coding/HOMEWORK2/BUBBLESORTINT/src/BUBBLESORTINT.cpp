//============================================================================
// Name        : BUBBLESORTINT.cpp
// Author      : BIBIN BABU
// Version     :
// Copyright   : Your copyright notice
// Description : BUBBLE SORT USING INT, Ansi-style
//============================================================================

#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::cout<<"enter some numbers"<<std::endl;
    int num;
    std::vector<int>array;
    while(std::cin>>num)
    {
        array.push_back(num);
    }
for(int i=1; i<array.size(); i++)
{
	for(int j=1; j<array.size()-1; j++)
    {if(array[j]>array[i])
    {
     std::swap(array[j],array[i]);
    }

}}
std::cout<<"Sorted array is \n"<<std::endl;
for(int i=0; i<array.size(); i++)
	{
	std::cout<<array[i]<<std::endl;
	}
return 0;
}
