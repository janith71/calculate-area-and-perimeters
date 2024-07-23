#include<iostream>
#include<cmath>
using namespace std;

double length;

double sqaure_areaa()
{
    
    cout<<"enter length:"<<endl;
    cin>>length;

    double sqaure_area=length*length;
    cout<<"square area is"<<sqaure_area<<endl;
}
double sqaure_perimeters()
{
    cout<<"enter length"<<endl;
    cin>>length;

    double sqaure_perimeters=length*4;
    cout<<"sqaure perimeters is"<<sqaure_perimeters<<endl;

}
double traingle_perimeters()
{
    double x,y,z;
    
    cout<<"enter x:"<<endl;
    cin>>x;

    cout<<"enter y:"<<endl;
    cin>>y;
    
    cout<<"enter z:"<<endl;
    cin>>z;

    double traingle_perimeters=x+y+z;
    cout<<"traingle perimeters is:"<<traingle_perimeters<<endl;

}

double traingle_areaa()
{
    double base;
    double height;

    cout<<"enter base:"<<endl;
    cin>>base;
    cout<<"enter length:"<<endl;
    cin>>height;

    double traingle_area=0.5*22/7*base*height;
    cout<<"traingle area is:"<<traingle_area<<endl;
}

double radius;

double circle_areaa()
{
    

    cout<<"enter radius:"<<endl;
    cin>>radius;

    double circle_area=3.14*radius*radius;
    cout<<"circle area is:"<<circle_area<<endl;
}

double circle_perimeters()
{
    
    cout<<"enter radius:"<<endl;
    cin>>radius;

    double circle_perimeters=2*22/7*radius;
    cout<<"circle perimeters is:"<<circle_perimeters<<endl;
}    
double rectangle_areaa()
{
    double lenth;
    double width;

    cout<<"enter lenth:"<<endl;
    cin>>lenth;
    cout<<"enter width:"<<endl;
    cin>>width;

    double rectangle_area=lenth*width;
    cout<<"rectangle area is :"<<rectangle_area<<endl;
}
double rectangle_perimeters()
{
    double x,y;
    
    cout<<"enter x:"<<endl;
    cin>>x;

    cout<<"enter y:"<<endl;
    cin>>y;

    double rectangle_perimeters=x*2+y*2;
    cout<<"rectangle perimeters is :"<<rectangle_perimeters<<endl;
}

int main()
{
    int choice1;

    cout<<"1-square"<<endl;
    cout<<"2-traingle"<<endl;
    cout<<"3-circle"<<endl;
    cout<<"4-rectangle"<<endl;

    cout<<"enter your choice (1-4):"<<endl;
    cin>>choice1;

    if(choice1==1)
    {
        int choice2;

        cout<<"1-area:"<<endl;
        cout<<"2-perimeters:"<<endl;

        cout<<"enter your choice:"<<endl;
        cin>>choice2;

        if(choice2==1)
        {
            sqaure_areaa();
        }
        else if(choice2==2)
        {
            sqaure_perimeters();
        }
        else
        {
            cout<<"invalid choice...."<<endl;
        }

    }
    else if(choice1==2)
    {
        int choice3;

        cout<<"1-area:"<<endl;
        cout<<"2-perimeters:"<<endl;

        cout<<"enter your choice:"<<endl;
        cin>>choice3;

        if(choice3==1)
        {
            traingle_areaa();
        }
        else if(choice3==2)
        {
            traingle_perimeters();
        }
        else
        {
            cout<<"invalid choice...."<<endl;
        }
    }    
    else if(choice1==3)
    {
        int choice4;

        cout<<"1-area:"<<endl;
        cout<<"2-perimeters:"<<endl;

        cout<<"enter your choice:"<<endl;
        cin>>choice4;

        if(choice4==1)
        {
            circle_areaa();
        }
        else if(choice4==2)
        {
            circle_perimeters();
        }
        else
        {
            cout<<"invalid choice...."<<endl;
        }
    }    
    else if(choice1==4) 
    {
        int choice5;

        cout<<"1-area:"<<endl;
        cout<<"2-perimeters:"<<endl;

        cout<<"enter your choice:"<<endl;
        cin>>choice5;

        if(choice5==1)
        {
           rectangle_areaa();
        }
        else if(choice5==2)
        {
           rectangle_perimeters();
        }
        else
        {
            cout<<"invalid choice...."<<endl;
        }
    }    
       
}
