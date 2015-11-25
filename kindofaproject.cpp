#include <iostream>
#include <Magick++.h>
#include <string>
using namespace std;
using namespace Magick;


void blwh (string s){
  Image image;
  image.read(s);

  int x = image.rows();
  int y = image.columns();
  int n,m,o;
  Color array [x] [y];
  Color array0 [x] [y];
  Color og,bw,original,nw;

  for (m=0; m < x; m++){
        for (o= 0; o < y; o++){
              og = image.pixelColor(o,m);
              array [m][o] = og;
        }
  }

   for (m=0; m < x; m++){
        for (o = 0; o < y; o++){
              bw = array [m] [o];
              n = (bw.redQuantum()+bw.greenQuantum()+bw.blueQuantum())/3;
              original.redQuantum(n);
              original.greenQuantum(n);
              original.blueQuantum(n);
              array0 [m] [o] = original;
        }
   }

   for (m=0; m < x; m++){
        for (o = 0; o < y; o++){
              nw =array0 [m] [o];
              image.pixelColor(o, m, nw);
        }
   }

  image.write( "b&w.jpg" );
}


int user;

int main(int argc,char **argv)
{
cout << "Tipe the name of the picture to edit" << endl;
string foto;
cin >> foto;
cout << "Chose the option to realize (Write the option in the parentesis). Black & White (1)  or Half the image(2)" << endl;
cin >> user;



if (user==2)
{
InitializeMagick(*argv);

  Image image;
  try {
    image.read( foto );

    image.minify();

    image.write( "halfim.jpg" );
  }
  catch( Exception &error_ )
    {
      cout << "Error" << error_.what() << endl;
      return 1;
    }
}
if (user==1)
{
 InitializeMagick(*argv);
Image image;

  try {
 image.read (foto);

blwh(foto);

  }
  catch( Exception &error_ )
    {
      cout << "Error " << error_.what() << endl;
      return 1;
    }
}

  return 0;
}
