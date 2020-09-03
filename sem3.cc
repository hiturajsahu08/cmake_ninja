#include<iostream>
using namespace std;

class marks3{
    public:
        int phy, chm, mat;
        marks3()
        {
            phy=30; chm=30; mat=30;
        }
        marks3(int x, int y, int z)
        {
            phy=x; chm=y; mat=z;
        }
        ~marks3()
        {
            cout<<"object deleted"<<endl;
        }
        void total_marks()
        {
            cout<<"total marks "<<(phy+chm+mat)<<endl;
        }
        marks3 operator+(const int factor)
        {
            return marks3(chm+factor, mat+factor, phy+factor);
        }
};
int main_sem_3()
{
    marks3 aman,nissu;
    marks3 hitu(29,33,65);
    cout<<"chemistry me kitne "<<aman.chm<<endl;
    nissu=aman+10;
    cout<<"ab kitne bc "<<nissu.chm<<" "<<nissu.mat<<" "<<nissu.phy<<endl;
    cout<<"hitu ka maths me "<<hitu.mat<<endl;
    return 0;
}