//    singlelab 2.cpp
#include<iostream>
using namespace std;

int n,i;
struct roo


{
    double  length;
    double width;


} room[1000];
struct dis {
    double ft;
    double inch;
    char dumycah;
} distance[1000];
void input() {
    for(i=1; i<=n; i++)
        {
        cout <<"ENTER "  <<i<<"th room length" <<endl;
        cin >>  distance[i].ft >> distance[i].dumycah >> distance[i].inch;

        room[i].length=distance[i].ft+ .83*distance[i].inch;




        cout <<"ENTER "  <<i<<"th room width" <<endl;
        cin >> distance[i].ft >> distance[i].dumycah>>distance[i].inch;

        room[i].width = distance[i].ft+ .8333*distance[i].inch;
    }
}
void output() {
    for(i=1; i<=n; i++) {
        cout << "Size of " <<  i <<"th room = "<<room[i].width * room[i].length<<""<<endl;
    }
}
int main() {
    cout <<"ENTER NUMBER OF ROOM"<<endl;
    cin >>n;
    input();
    output();
}

