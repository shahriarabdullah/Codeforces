#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x,y,n,counter=0;
    x=0;
    y=0;
    char inp;
    string stat,comp;


    stat="";

    cin>>n;
    while(n--){


    cin>>inp;
    if(x<y){
        stat=stat+"L";
    } else if(x>y){
        stat=stat+"R";
    } else {
        stat=stat+"N";
    }

    if(inp=='U'){
        y++;
    } else if(inp=='R'){
        x++;
    }

    }

    if(x<y){
        stat=stat+"L";
    } else if(x>y){
        stat=stat+"R";
    } else {
        stat=stat+"N";
    }



    for(int i=0;i<stat.length()-2;i++){
            comp="";
        comp.append(stat,i,3);

        if(comp=="LNR" || comp=="RNL"){
            counter++;
        }

    }

    cout << counter;
    return 0;
}
