#include<bits/stdc++.h>
using namespace std;
char  s1[100],s2[100],s3[100];
void length()
{

       cout <<"Enter string"<<endl;
       cin >>s1;
        int       l1=0;
       for(int i=0; s1[i]!='\0';i++)
       {
           l1++;
       }
       cout <<l1;
}
void concatenation()
{
       cout <<"Enter string"<<endl;
       cin >>s1;
        int       l1=0;
       for(int i=0; s1[i]!='\0';i++)
       {
           l1++;
       }
       cout <<"Enter another string"<<endl;
       cin >>s2;
        int       l2=0;
       for(int i=0; s2[i]!='\0';i++)
       {
           l2++;
       }
       for(int i=0; i<l1+l2;i++)
       {
           if(i<l1)
           {
               s3[i]=s1[i];
           }
           else

           {
               s3[i]=s2[i-l1];
           }
       }
       cout <<s3<<endl;
}
void substring()
{


          cout <<"Enter string"<<endl;
          cin >>s1;
          int       l1=0;
          for(int i=0; s1[i]!='\0';i++)
          {
           l1++;
          }
          cout <<"Enter position"<<endl;
          int p=0;
          cin >>p;
          cout <<"Enter length"<<endl;
          int l;
          cin >>l;
          for(int i=0,j=p-1; j<p+l-1;i++,j++)
          {
           s2[i]=s1[j];
          }
          cout <<s2;


}
void First_pattern()
{
      cout <<"Enter the string"<<endl;
        cin >>s1;
        int       l1=0;
       for(int i=0 ;  s1[i]!='\0';i++)
       {
           l1++;
       }
       
       cout <<"Enter second pattern"<<endl;
       cin >>s2;
       int       l2=0;
       for(int i=0 ;  s2[i]!='\0';i++)
       {
           l2++;
       }
       int f=0,c=0,i;
       for(i=0;i<l1;i++)
       {
           if(s2[f]==s1[i])
           {
               f++;
               if(f==l2)
               {
                   break;
               }
           }
           else
            {
                f=0;
            
           }
       }
       if(f==l2)
       {
           cout <<"Pattrern match"<<endl;
       }
       else  
       {
           printf("not match");
       }
       
}
void Second_pattern()
{


}
void  insertt()
{

}
void  deletee()
{



}
int main ()
{

    cout <<"Press 1  for length of string"<<endl;
    cout <<"Press 2 for String concatenation  "<<endl;
    cout <<"Prees 3 for substring"<<endl;
    cout <<"Press 4 for First pattern match algorithm "<<endl;
    cout <<"Press 5 for Second pattern match algorithm "<<endl;
    cout <<"Press 6 for insert a string"<<endl;
    cout <<"Press 7 delete string   "<<endl;
     int  n;
     cin >> n;
     if(n==1)  length();
     if(n==2)concatenation();
     if(n==3)substring();
     if(n==4) First_pattern();
     if(n==5) Second_pattern();
     if(n==6) insertt();
     if(n==7) deletee();


}
