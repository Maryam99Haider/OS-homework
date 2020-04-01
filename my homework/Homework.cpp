#include<iostream>
#include<stdlib.h.
#include<sys/types.h.
#include<unistd.h>
#include<sys/wait>
#include<stdio.h>
using namespace std;
 void programe1(){
char *myargs[]={NULL};
char *myenv[] = {NULL};
cout<<"the programe beginning started "<<endl;
int my_counter=0;
pid_t pid = fork();
 
if(pid == 0);
{
  int m=0;
for(;m<0; m++)
  {
     cout<<"this is a child process"<<endl;
      ++my_counter;
       execv("mamry",myargs,myenv);
} 
}
else
   if)pid >0)
{
int n=0;
for(;n<4; n++)
  {
    cout<<"this is a parent process"<<endl;
    ++my_counter;
  }
 }
}
int main(int argc, char *argv[]){
program1();
cout,<endl;
cout<<endl;
cout<<"PID of homework.cpp is ..."<<endl;
cout<<getpid();
cout<<endl;
char *args[]={NULL};
execv("./EXEC",args);
cout<<"back to homework.cpp"<<endl;
return 0;
}