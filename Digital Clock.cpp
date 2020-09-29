#include<bits/stdc++.h>
#include<windows.h>
#include<stdlib.h>
#include<unistd.h>
#include<ctime>
using namespace std;
#define row 3
#define col 20

char arr[3][20]={{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' '}};
char ah[2],am[2],rd[2],rmo[3],ry[4],rh[2],rm[2];

vector<string>todo;

void zero(char arr[row][col],int s){
   char arr1[3][3]={{' ','_',' '},{'|',' ','|'},{'|','_','|'}};
   for(int i=0;i<3;i++){
    for(int j=0+s;j<3+s;j++){
        arr[i][j]=arr1[i][j-s];
    }
   }
}
void one(char arr[row][col],int s){
   char arr1[3][3]={{' ',' ',' '},{' ',' ','|'},{' ',' ','|'}};
    for(int i=0;i<3;i++){
    for(int j=0+s;j<3+s;j++){
        arr[i][j]=arr1[i][j-s];
    }
   }
}

void two(char arr[row][col],int s){
   char arr1[3][3]={{' ','_',' '},{' ','_','|'},{'|','_',' '}};
    for(int i=0;i<3;i++){
    for(int j=0+s;j<3+s;j++){
        arr[i][j]=arr1[i][j-s];
    }
   }
}

void three(char arr[row][col],int s){
   char arr1[3][3]={{' ','_',' '},{' ','_','|'},{' ','_','|'}};
    for(int i=0;i<3;i++){
    for(int j=0+s;j<3+s;j++){
        arr[i][j]=arr1[i][j-s];
    }
   }
}

void four(char arr[row][col],int s){
   char arr1[3][3]={{' ',' ',' '},{'|','_','|'},{' ',' ','|'}};
   for(int i=0;i<3;i++){
    for(int j=0+s;j<3+s;j++){
        arr[i][j]=arr1[i][j-s];
    }
   }
}

void five(char arr[row][col],int s){
   char arr1[3][3]={{' ','_',' '},{'|','_',' '},{' ','_','|'}};
   for(int i=0;i<3;i++){
    for(int j=0+s;j<3+s;j++){
        arr[i][j]=arr1[i][j-s];
    }
   }
}

void six(char arr[row][col],int s){
   char arr1[3][3]={{' ','_',' '},{'|','_',' '},{'|','_','|'}};
    for(int i=0;i<3;i++){
    for(int j=0+s;j<3+s;j++){
        arr[i][j]=arr1[i][j-s];
    }
   }
}

void seven(char arr[row][col],int s){
   char arr1[3][3]={{' ','_',' '},{' ',' ','|'},{' ',' ','|'}};
    for(int i=0;i<3;i++){
    for(int j=0+s;j<3+s;j++){
        arr[i][j]=arr1[i][j-s];
    }
   }
}

void eight(char arr[row][col],int s){
   char arr1[3][3]={{' ','_',' '},{'|','_','|'},{'|','_','|'}};
   for(int i=0;i<3;i++){
    for(int j=0+s;j<3+s;j++){
        arr[i][j]=arr1[i][j-s];
    }
   }
}

void nine(char arr[row][col],int s){
   char arr1[3][3]={{' ','_',' '},{'|','_','|'},{' ',' ','|'}};
   for(int i=0;i<3;i++){
    for(int j=0+s;j<3+s;j++){
        arr[i][j]=arr1[i][j-s];
    }
   }
}

void set_alarm(){
    cout<<endl<<endl<<"\t\t\t\t\t Enter Hour In 2 Digit\t";   cin>>ah[0]>>ah[1];
    cout<<endl<<"\t\t\t\t\t Enter Minute In 2 Digit\t";   cin>>am[0]>>am[1];
    cout<<endl<<endl<<"  \t\t\t\t\t * SUCCESFULLY ALARM SET *";

}

void set_reminder(){
    cout<<endl<<endl<<"\t\t\t\t\t Enter DATE In 2 Digit\t";   cin>>rd[0]>>rd[1];
    cout<<endl<<"\t\t\t\t\t Enter MONTH in word upto 3 Digit in Capital\t";   cin>>rmo[0]>>rmo[1]>>rmo[2];
    cout<<endl<<"\t\t\t\t\t Enter YEAR In 4 Digit\t";   cin>>ry[0]>>ry[1]>>ry[2]>>ry[3];
    cout<<endl<<"\t\t\t\t\t Enter Hour In 2 Digit\t";   cin>>rh[0]>>rh[1];
   cout<<endl<<"\t\t\t\t\t Enter Minute In 2 Digit\t";   cin>>rm[0]>>rm[1];
    cout<<endl<<endl<<"  \t\t\t\t\t * SUCCESFULLY REMINDER SET *";



}

void digital_clock(){
while(1){
time_t now = time(0);
char *t= ctime(&now);

if(t[11]==ah[0] && t[12]==ah[1] && t[14]==am[0] && t[15]==am[1]){
    cout<<endl<<endl<<"\t\t\t\t\t WAKE UP!!!!\t";
    PlaySound(TEXT("alarmringtone.wav"), NULL, SND_FILENAME);
    return;
}

if(t[11]==rh[0] && t[12]==rh[1] && t[14]==rm[0] && t[15]==rm[1] && rd[0]==t[8] && rd[1]==t[9] && rmo[0]==t[4] && rmo[1]==t[5] && rmo[2]==t[6] /*&& ry==t[20] && ry==t[21] && ry[22]==t[22] && ry==t[23]*/ ){
    cout<<endl<<endl<<"\t\t\t\t\t REMINDER!!!!\t";
    PlaySound(TEXT("alarmringtone.wav"), NULL, SND_FILENAME);
    return;
}


         switch(t[11]){
        case '0' : zero(arr,0);
        break;
        case '1' : one(arr,0);
        break;
        case '2' : two(arr,0);
        break;
        case '3' : three(arr,0);
        break;
        case '4' : four(arr,0);
        break;
        case '5' : five(arr,0);
        break;
        case '6' : six(arr,0);
        break;
        case '7' : seven(arr,0);
        break;
        case '8' : eight(arr,0);
        break;
        case '9' : nine(arr,0);
        break;
        }
switch(t[12]){
        case '0' : zero(arr,3);
        break;
        case '1' : one(arr,3);
        break;
        case '2' : two(arr,3);
        break;
        case '3' : three(arr,3);
        break;
        case '4' : four(arr,3);
        break;
        case '5' : five(arr,3);
        break;
        case '6' : six(arr,3);
        break;
        case '7' : seven(arr,3);
        break;
        case '8' : eight(arr,3);
        break;
        case '9' : nine(arr,3);
        break;
        }

         switch(t[14]){
        case '0' : zero(arr,7);
        break;
        case '1' : one(arr,7);
        break;
        case '2' : two(arr,7);
        break;
        case '3' : three(arr,7);
        break;
        case '4' : four(arr,7);
        break;
        case '5' : five(arr,7);
        break;
        case '6' : six(arr,7);
        break;
        case '7' : seven(arr,7);
        break;
        case '8' : eight(arr,7);
        break;
        case '9' : nine(arr,7);
        break;
        }
switch(t[15]){
        case '0' : zero(arr,10);
        break;
        case '1' : one(arr,10);
        break;
        case '2' : two(arr,10);
        break;
        case '3' : three(arr,10);
        break;
        case '4' : four(arr,10);
        break;
        case '5' : five(arr,10);
        break;
        case '6' : six(arr,10);
        break;
        case '7' : seven(arr,10);
        break;
        case '8' : eight(arr,10);
        break;
        case '9' : nine(arr,10);
        break;
        }

            switch(t[17]){
        case '0' : zero(arr,14);
        break;
        case '1' : one(arr,14);
        break;
        case '2' : two(arr,14);
        break;
        case '3' : three(arr,14);
        break;
        case '4' : four(arr,14);
        break;
        case '5' : five(arr,14);
        break;
        case '6' : six(arr,14);
        break;
        case '7' : seven(arr,14);
        break;
        case '8' : eight(arr,14);
        break;
        case '9' : nine(arr,14);
        break;
        }
switch(t[18]){
        case '0' : zero(arr,17);
        break;
        case '1' : one(arr,17);
        break;
        case '2' : two(arr,17);
        break;
        case '3' : three(arr,17);
        break;
        case '4' : four(arr,17);
        break;
        case '5' : five(arr,17);
        break;
        case '6' : six(arr,17);
        break;
        case '7' : seven(arr,17);
        break;
        case '8' : eight(arr,17);
        break;
        case '9' : nine(arr,17);
        break;
        }
system("CLS");
cout<<endl<<endl;
        for(int x=0;x<3;x++){
    for(int y=0;y<20;y++)
        cout<<arr[x][y];
    cout<<endl;
        }
cout<<endl;
        cout<<"   "<<t[0]<<t[1]<<t[2]<<" "<<t[8]<<t[9]<<" "<<t[4]<<t[5]<<t[6]<<" "<<t[20]<<t[21]<<t[22]<<t[23];

sleep(1);

}
}

void stopwatch(){

return;
}

void do_list(){
    int i;
     cout<<"\t\t\t\t\t\t\tENTER"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t     1 For ADD"<<endl;
    cout<<"\t\t\t\t\t\t     2 For VIEW"<<endl;
    cin>>i;
    if(i==1){
        string s;
         cout<<"\t\t\t\t\t\t\tENTER"<<endl;
         cin.ignore();
        getline(cin,s);
        todo.push_back(s);
    }
    else if(i==2){
            cout<<endl<<endl<<endl;
        for(int i=0;i<todo.size();i++){
            cout<<"\t\t\t\t\t\t     "<<i+1<<" : "<<todo[i]<<endl;
        }
    }
    else
        cout<<"\t\t\t\t\t\t\tWrong Input";


return;
}


int main(){
int w=1;
while(w){

    cout<<endl<<endl<<endl<<endl;

    cout<<"\t\t\t\t\t\t\tENTER"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t     1 For CLOCK"<<endl;
    cout<<"\t\t\t\t\t\t     2 For SET ALARM"<<endl;
    cout<<"\t\t\t\t\t\t     3 For SET REMINDER"<<endl;
    cout<<"\t\t\t\t\t\t     4 For STOPWATCH"<<endl;
    cout<<"\t\t\t\t\t\t     5 For TO DO LIST"<<endl;
    cout<<"\t\t\t\t\t\t     6 For EXIT"<<endl;
cin>>w;

switch(w){
    case 1 : digital_clock();
    break;
    case 2 : set_alarm();
    break;
    case 3 : set_reminder();
    break;
    case 4 : stopwatch();
    break;
    case 5 : do_list();
    break;

}
    if(w==6)
        break;

}


return 0;

}
