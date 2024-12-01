#include<iostream>
using namespace std;
int main(){
int movies=10;
//Taking current rating of movies
int movieRating[movies];
cout<<"Enter the current rating of all movies : ";
for(int i=0;i<10;i++){
cin>>movieRating[i];
 }
 //displaying current ratings of all movies
 cout<<"Current Ratings are : "<<endl;
 for(int i=0;i<movies;i++){
    cout<<movieRating[i]<<" ";
}
//asking use to update rating of specific movie;
int specific;
cout<<"Enter the Number of movie you want to rate again : "<<endl;
cin>>specific;
int updatedrating;
cout<<"Enter the updated rating : ";
cin>>updatedrating;
movieRating[specific-1]=updatedrating;
//displaying updated rating
cout<<"Updated movie ratings are : "<<endl; 
for(int i=0;i<movies;i++){
    cout<<movieRating[i]<<" ";
}
    return 0;
}