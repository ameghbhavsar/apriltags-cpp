#include<iostream>
#include<fstream>

typedef struct Pose{
  int id;
  float x;
  float y;
  float theta;
}Pose;


int main(){
  std::fstream f;
  f.open("pose.txt",std::ios::in | std::ios::out | std::ios::app | std::ios::binary);
  int a,b;
  Pose P;
  while(f){
    f.read((char*)&P,sizeof(P));
    std::cout<<"\nid: "<<P.id<<"x: "<<P.x<<"y: "<<P.y<<"Theta: "<<P.theta<<"\n";
  }
  f.close();
  return 0;
}
