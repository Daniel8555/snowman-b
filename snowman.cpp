//
// Created by daniel on 07/03/2021.
//
#include<array>
#include <string>
#include <iostream>
#include "snowman.hpp"
using namespace std;
namespace ariel {
string snowman(int x){
    string face;
    string result;
    string str=to_string(x);
  array<array<string, 4>,8> snow= {{
     {"     \n_===_"," ___  \n.....","  _  \n /_\\ " ," ___ \n(_*_)"}
    ,{",",".","_"," "}
    ,{"\n(.","\n(o","\n(O","\n(-"}
    ,{".)","o)","O)","-)"}
    ,{"<","\\","/",""}
    ,{">","/","\\",""}
    ,{"( : )","(] [)","(> <)","(   )"}
    ,{"\n( : )","\n(\" \")","\n(___)","\n(   )"}
}};
  string body;
    string num;
    string bodyf;
    int number;
      string armLeft;
      string armRight;
       for(std::size_t i = 0; i <str.size();i++){
       num=str.at(i);
        number=stoi(num);
                 if(number>4||number<=0)
                 {
                     throw out_of_range(" should have a nember1-4.");
                 }
                     if(str.size()<8||str.size()>8)
                     {
                     throw out_of_range(" should have a 8 numbers.");
                     }
        }
        
 for(std::size_t i = 0; i <str.size();i++)
        {
        if(i==6)
        {
        num=str.at(i);
        number=stoi(num)-1;
        string som=snow.at(i).at(number);
        body+=som;

        num = str.at(i + 1);
        number = stoi(num) - 1;
        bodyf+=snow.at(i+1).at(number);
        i=3;
        continue;
        }
        if(i==5)
        {
            num=str.at(i);
            number=stoi(num)-1;
            if(number==0||number==2)
            {
            armRight=snow.at(i).at(number);
            body+=armRight;

            }
            else
                {
                armRight = snow.at(i).at(number);
                face+=armRight;
                face+="\n";
            }
            break;

        }
          if(i==4)
        {
            num=str.at(i);
            number=stoi(num)-1;
            if(number==0||number==2)
            {
            armLeft=snow.at(i).at(number);
            body.insert(0,armLeft);
            }
            else
                {
                armLeft = snow.at(i).at(number);
                face.insert(1,armLeft);
            }
        }
        if(i==0)
        {
        num=str.at(i);
        number=stoi(num)-1;
        result+=snow.at(i).at(number);
        }
        if(i+1==1)
         {
            num = str.at(i + 2);
            number = stoi(num) - 1;
            face+=snow.at(i+2).at(number);

            num = str.at(i + 1);
            number = stoi(num) - 1;
            face+= snow.at(i+1).at(number);

            i = 3;
            num=str.at(i);
             number=stoi(num)-1;

        face+=snow.at(i).at(number);
        i=5;
         }
    }
    result+=face;
    result+=body;
    result+=bodyf;

    return (result);
}
};
