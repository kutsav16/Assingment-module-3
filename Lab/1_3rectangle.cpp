#include<iostream> 
using namespace std;

class rectangle
{
    public:
    int len,width;
    void area()
    {
        cout<<"Enter length of rectangle : ";
        cin>>len; 
        cout<<"Enter width of rectangle : ";
        cin>>width; 
        int ans= len*width; // Calculate area
        cout<<"Area of rectangle : "<<ans; 
    }
};

int main()
{
    rectangle r; 
    r.area(); 
}
