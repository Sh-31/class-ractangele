#include <iostream>
using namespace std;
class CRectangele
{
    int *hight,*width;
    public:
    // constructer parmatriue
    CRectangele(int,int);
    //destructer
    ~CRectangele();
    //area function
    int area()
    {
        return(*hight * *width);
    }
};
//preparation of constructer
CRectangele::CRectangele(int a ,int b){
  hight=&a;
  width=&b;
  
}
//preparation of destructer
CRectangele::~CRectangele()
{
 delete width;
 delete hight;
    cout<<"the program is done by Sherif Ahmed";
}
int main()
{
    // This program Calculate the area of a rectangle with class , pointers 
    // with using constructer,destructer,delete
    int wid=0 ,hig=0;
    // ask user for hight of rectangle
    cout<<"Enter hight of rectangle"<<endl;
    cin>>hig;
    // ask user for width of rectangle
    cout<<"Enter width of rectangle"<<endl;
    cin>>wid;
    CRectangele Rect1(hig,wid);
    cout<<"rectangle area :"<<Rect1.area()<<endl;
    return 0;
}
