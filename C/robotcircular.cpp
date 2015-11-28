#include <iostream>
#include<string>
using namespace std;

class robot{
private:
     int startx=0;
     int starty=0;
     int curx=0;
     int cury=0;
     char updated='N';
public:
    void cng_dir(char turn){
    switch(updated){
    case 'N': {  if(turn=='L'){updated='W';}else updated='E';

    break;
    }
    case 'E': {  if(turn=='L'){updated='N';}else updated='S';

    break;
    }
    case 'W': {  if(turn=='L'){updated='S';}else updated='N';

    break;
    }
    case 'S': {  if(turn=='L'){updated='E';}else updated='W';

    break;
    }

    }
    }

    void mov(){

    switch(updated){
    case 'N':{cury++;break;}
    case 'E':{curx++;break;}
    case 'W':{curx--;break;}
    case 'S':{cury--;break;}
    }
    }
    bool check(){
    if(curx==startx&&cury==starty)
    return true;
    }
};

int main()
{
    robot robo;
    string dirs="GLLG";
    int l=dirs.length();
    for(int i=0;i<l;i++)
    {
        if(dirs[i]=='L'){robo.cng_dir(dirs[i]);}
        else if(dirs[i]=='R'){robo.cng_dir(dirs[i]);}
        else if (dirs[i]=='G'){robo.mov();}
    }
    if(robo.check())
    {
        cout<<"Circular"<<endl;
    }else cout<<"Not Circular"<<endl;

    return 0;
}
