#include<iostream>
using namespace std;

struct Distance
{
double feet;
double inches;
char dumycar;
};
int n,i;
struct Room
{
   Distance length;
   Distance width;
}R[1000];

void input() {

    for(i=1; i<=n; i++)
        {
        cout <<"ENTER "  <<i<<"th room length" <<endl;

        cin >>R[i].length.feet>>R[i].length.dumycar>>R[i].length.inches;


        R[i].length.feet=R[i].length.feet  + .83333*R[i].length.inches;




        cout <<"ENTER "  <<i<<"th room width" <<endl;

        cin >>R[i].width.feet>>R[i].width.dumycar>>R[i].width.inches;

        R[i].width.feet=R[i].width.feet+ .83*R[i].width.inches;
        cout <<R[i].width.feet<<endl;
    }
}
void output() {

    double total_area=0;
    for(i=1; i<=n; i++) {
            cout <<R[i].width.feet<<" "<<endl;
        cout << "Size of " <<  i <<"th room = "<<R[i].width.feet * R[i].length.feet<<" sqt feet"<<endl;
        total_area += R[i].width.feet * R[i].length.feet;
    }
    cout <<"Total area is "<<total_area<<" square feet."<<endl;
}
int main() {
    cout <<"ENTER NUMBER OF ROOM"<<endl;
    cin >>n;

    input();
    output();
}



