#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
char liniev(170),colts(218),coltd(191),coltsj(192),coltdj(217),linieo(196),intersectie(197),semisu(194),semis(195),semid(180),semij(193);
char slash(47),x(88),O(79);
int n,T,sig,cz,bn,pr;
char M[3][3];
bool game_over=1;
void prep1(){
cout<<"Mod de joc: impotriva calculatorului(1),impotriva unui alt jucator(2):"<<"\n";
cin>>bn;

}
void prep(){
for(int i=1;i<=3;i++)
    for(int j=1;j<=3;j++)
        M[i][j]=slash;
    T=0;
}
void draw(){
cout<<colts<<linieo<<semisu<<linieo<<semisu<<linieo<<coltd<<"\n";
cout<<"|"<<M[1][1]<<"|"<<M[1][2]<<"|"<<M[1][3]<<"|"<<"\n";
cout<<semis<<linieo<<intersectie<<linieo<<intersectie<<linieo<<semid<<"\n";
cout<<"|"<<M[2][1]<<"|"<<M[2][2]<<"|"<<M[2][3]<<"|"<<"\n";
cout<<semis<<linieo<<intersectie<<linieo<<intersectie<<linieo<<semid<<"\n";
cout<<"|"<<M[3][1]<<"|"<<M[3][2]<<"|"<<M[3][3]<<"|"<<"\n";
cout<<coltsj<<linieo<<semij<<linieo<<semij<<linieo<<coltdj<<"\n";

}

void fizicix(){
 int s,d;
 cout<<"Coordonatele X-ului:"<<"\n";
 cin>>s>>d;
 sig=1;
 while(sig!=0){
 if((M[s][d]==O) || (M[s][d]==x)){
    cout<<"Aceasta pozitie este ocupata!Alege alta pozitie:"<<"\n";
    cin>>s>>d;
 }
 else  {M[s][d]=x;sig=0;}}
 if((M[1][1]==x )&& (M[1][2]==x)&& (M[1][3]==x)){game_over=0;n=1;}
 if((M[2][1]==x )&& (M[2][2]==x)&& (M[2][3]==x)){game_over=0;n=1;}
 if((M[3][1]==x )&& (M[3][2]==x)&& (M[3][3]==x)){game_over=0;n=1;}
 if((M[1][1]==x )&& (M[2][1]==x)&& (M[3][1]==x)){game_over=0;n=1;}
 if((M[1][2]==x )&& (M[2][2]==x)&& (M[3][2]==x)){game_over=0;n=1;}
 if((M[1][3]==x )&& (M[2][3]==x)&& (M[3][3]==x)){game_over=0;n=1;}
 if((M[1][1]==x )&& (M[2][2]==x)&& (M[3][3]==x)){game_over=0;n=1;}
 if((M[3][1]==x )&& (M[2][2]==x)&& (M[1][3]==x)){game_over=0;n=1;}
  system("CLS");

}
void fiziciy(){
 int s,d;
 cout<<"Coordonatele O-ului:"<<"\n";
 cin>>s>>d;
 sig=1;
 while(sig!=0){
 if((M[s][d]==O) || (M[s][d]==x)){
    cout<<"Aceasta pozitie este ocupata!Alege alta pozitie:"<<"\n";
    cin>>s>>d;
 }
 else  {M[s][d]=O;sig=0;}}

 if((M[1][1]==O )&& (M[1][2]==O)&& (M[1][3]==O)){game_over=0;n=2;}
 if((M[2][1]==O )&& (M[2][2]==O)&& (M[2][3]==O)){game_over=0;n=2;}
 if((M[3][1]==O )&& (M[3][2]==O)&& (M[3][3]==O)){game_over=0;n=2;}
 if((M[1][1]==O )&& (M[2][1]==O)&& (M[3][1]==O)){game_over=0;n=2;}
 if((M[1][2]==O )&& (M[2][2]==O)&& (M[3][2]==O)){game_over=0;n=2;}
 if((M[1][3]==O )&& (M[2][3]==O)&& (M[3][3]==O)){game_over=0;n=2;}
 if((M[1][1]==O )&& (M[2][2]==O)&& (M[3][3]==O)){game_over=0;n=2;}
 if((M[3][1]==O )&& (M[2][2]==O)&& (M[1][3]==O)){game_over=0;n=2;}
  system("CLS");


}
void automatO(){
 int s,d;
 sig=1;
if((M[1][1]==O )&& (M[1][2]==O) && ( M[1][3]!=x)) M[1][3]=O;
else if((M[2][1]==O )&& (M[2][2]==O )&& ( M[2][3]!=x) )M[2][3]=O;
else if((M[3][1]==O )&& (M[3][2]==O)&&(M[3][3]!=x)) M[3][3]=O;
else if((M[1][1]==O )&& (M[2][1]==O)&&(M[3][1]!=x)) M[3][1]=O;
else if((M[1][2]==O )&& (M[2][2]==O)&&(M[3][2]!=x)) M[3][2]=O;
else if((M[1][3]==O )&& (M[2][3]==O)&&(M[3][3]!=x)) M[3][3]=O;
else if((M[1][1]==O )&& (M[2][2]==O)&&(M[3][3]!=x)) M[3][3]=O;
else if((M[3][1]==O )&& (M[2][2]==O)&&(M[1][3]!=x) )M[1][3]=O;
else if((M[1][1]==O )&& (M[1][3]==O)&&(M[1][2]!=x)) M[1][2]=O;
else if((M[3][1]==O )&& (M[3][3]==O)&&(M[3][2]!=x)) M[3][2]=O;
else if((M[1][1]==O )&& (M[3][1]==O)&&(M[2][1]!=x)) M[2][1]=O;
else if((M[1][2]==O )&& (M[3][2]==O)&&(M[2][2]!=x)) M[2][2]=O;
else if((M[1][3]==O )&& (M[3][3]==O)&&(M[2][3]!=x)) M[2][3]=O;
else if((M[1][1]==O )&& (M[3][3]==O)&&(M[2][2]!=x))M[2][2]=O;
else if((M[1][3]==O )&& (M[2][2]==O)&&(M[3][1]!=x)) M[3][1]=O;
else if((M[1][3]==O )&& (M[1][2]==O)&&(M[1][1]!=x)) M[1][1]=O;
else if((M[2][3]==O )&& (M[2][2]==O)&&(M[2][1]!=x))M[2][1]=O;
else if((M[3][3]==O )&& (M[3][2]==O)&&(M[3][1]!=x) )M[3][1]=O;
else if((M[3][1]==O )&& (M[2][1]==O)&&(M[1][1]!=x) )M[1][1]=O;
else if((M[3][2]==O )&& (M[2][2]==O)&&(M[1][2]!=x)) M[1][2]=O;
else if((M[3][3]==O )&& (M[2][3]==O)&&(M[1][3]!=x) )M[1][3]=O;
else if((M[3][3]==O )&& (M[2][2]==O)&&(M[1][1]!=x)) M[1][1]=O;
else if((M[3][1]==O )&& (M[1][3]==O)&&(M[2][2]!=x) )M[2][2]=O;
else { srand((unsigned)time(0));
    s = (rand()%3)+1;
    d = (rand()%3)+1;
    sig=1;
 while(sig!=0){
 if((M[s][d]==O) || (M[s][d]==x)){
    cout<<"Aceasta pozitie este ocupata!Alege alta pozitie:"<<"\n";
  s = (rand()%3)+1;
  d = (rand()%3)+1;

 }
 else  {M[s][d]=O;sig=0;}}
}

 if((M[1][1]==O )&& (M[1][2]==O)&& (M[1][3]==O)){game_over=0;n=2;}
 if((M[2][1]==O )&& (M[2][2]==O)&& (M[2][3]==O)){game_over=0;n=2;}
 if((M[3][1]==O )&& (M[3][2]==O)&& (M[3][3]==O)){game_over=0;n=2;}
 if((M[1][1]==O )&& (M[2][1]==O)&& (M[3][1]==O)){game_over=0;n=2;}
 if((M[1][2]==O )&& (M[2][2]==O)&& (M[3][2]==O)){game_over=0;n=2;}
 if((M[1][3]==O )&& (M[2][3]==O)&& (M[3][3]==O)){game_over=0;n=2;}
 if((M[1][1]==O )&& (M[2][2]==O)&& (M[3][3]==O)){game_over=0;n=2;}
 if((M[3][1]==O )&& (M[2][2]==O)&& (M[1][3]==O)){game_over=0;n=2;}
system("CLS");
 }
int main()
{

    prep1();

    if(bn==2){
    prep();
    while(game_over){
    if(n!=2){
            T++;
    fizicix();
    draw();}
    if(n!=1){
        T++;
    fiziciy();
    draw();}}
}
    else if(bn==1){
     prep();
    while(game_over){
    if(n!=2){
            T++;
    fizicix();
    draw();}
    if(n!=1){
        T++;
    automatO();
    draw();}}

}
if(T==9)cout<<"ESTE REMIZA!!!";
    else if(n==1)cout<<"X ESTE CASTIGATOR!!!"<<"\n";
        else cout<<"O ESTE CASTIGATOR!!!"<<"\n";
}