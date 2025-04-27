#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout<<"\t\t\t\t\tGUESS THE NUMBER\t\t\t"<<endl;
    cout<<"\t\t\t\t\t-:DISCRIPTION:-"<<endl;
    cout<<"YOU HAVE TO GUESS A NUMBER BETWEEN 1 AND 100. YOU WILL HAVE LIMITED CHOICES BASED ON THE LEVEL YOU CHOOSE. GOOD LUCK!!"<<endl;
    while(true){
        cout<<"--ENTER THE DIFFICULTY LEVEL--"<<endl;
        cout<<"CHOOSE DIFFICULTY:-"<<endl;
        cout<<"1.EASY"<<endl;
        cout<<"2.MEDIUM"<<endl;
        cout<<"3.HARD"<<endl;
        cout<<"0.EXIT"<<endl;

        int choice;
        cout<<"ENTER THE CHOICE: ";
        cin>>choice;

        srand(time(0));
        int randomnumber = 1 + (rand()%100)+1;
        int playerchoice;

        if(choice==1){
            cout<<"\n YOU HAVE 10 CHOICES FOR FINDING THE SECRET NUMBER BETWEEN 1 AND 100.";
            int choicesleft = 10;
            for(int i=1;i<=10;i++){
                cout<<"\n\n     ENTER THE NUMBER : ";
                cin>>playerchoice;
                if(playerchoice==randomnumber){
                    cout<<"YOU WON, "<<playerchoice<< " IS THE SECRET NUMBER"<<endl;
                    cout<<"PLAY AGAIN!!"<<endl;
                    break;
                }else{
                    cout<<"NOPE, "<<playerchoice<<" IS NOT THE RIGHT NUMBER\n";
                    if(playerchoice>randomnumber){
                        cout<<"THE SECRET NUMBER IS LESS THAN "<<playerchoice<<endl;

                    }else{
                        cout<<"THE SECRET NUMBER IS GREATER THAN "<<playerchoice<<endl;
                    }
                    choicesleft--;
                    cout<<choicesleft<<" CHOICES LEFT. "<<endl;
                    if(choicesleft==0){
                        cout<<"YOU LOST, THE SECRET NUMBER WAS "<<randomnumber<<endl;
                        cout<<"PLAY AGAIN!!"<<endl;
                    }
                }
            }

        }else if(choice==2){
            cout<<"\n YOU HAVE 7 CHOICES FOR FINDING THE SECRET NUMBER BETWEEN 1 AND 100.";
            int choicesleft = 7;
            for(int i=1;i<=7;i++){
                cout<<"\n\n     ENTER THE NUMBER : ";
                cin>>playerchoice;
                if(playerchoice==randomnumber){
                    cout<<"YOU WON, "<<playerchoice<< " IS THE SECRET NUMBER"<<endl;
                    cout<<"PLAY AGAIN!!"<<endl;
                    break;
                }else{
                    cout<<"NOPE, "<<playerchoice<<" IS NOT THE RIGHT NUMBER\n";
                    if(playerchoice>randomnumber){
                        cout<<"THE SECRET NUMBER IS LESS THAN "<<playerchoice<<endl;

                    }else{
                        cout<<"THE SECRET NUMBER IS GREATER THAN "<<playerchoice<<endl;
                    }
                    choicesleft--;
                    cout<<choicesleft<<" CHOICES LEFT. "<<endl;
                    if(choicesleft==0){
                        cout<<"YOU LOST, THE SECRET NUMBER WAS "<<randomnumber<<endl;
                        cout<<"PLAY AGAIN!!"<<endl;
                    }
                }
            }
        }else if(choice==3){
            cout<<"\n YOU HAVE 5 CHOICES FOR FINDING THE SECRET NUMBER BETWEEN 1 AND 100.";
            int choicesleft = 5;
            for(int i=1;i<=5;i++){
                cout<<"\n\n     ENTER THE NUMBER : ";
                cin>>playerchoice;
                if(playerchoice==randomnumber){
                    cout<<"YOU WON, "<<playerchoice<< " IS THE SECRET NUMBER"<<endl;
                    cout<<"PLAY AGAIN!!"<<endl;
                    break;
                }else{
                    cout<<"NOPE, "<<playerchoice<<" IS NOT THE RIGHT NUMBER\n";
                    if(playerchoice>randomnumber){
                        cout<<"THE SECRET NUMBER IS LESS THAN "<<playerchoice<<endl;

                    }else{
                        cout<<"THE SECRET NUMBER IS GREATER THAN "<<playerchoice<<endl;
                    }
                    choicesleft--;
                    cout<<choicesleft<<" CHOICES LEFT. "<<endl;
                    if(choicesleft==0){
                        cout<<"YOU LOST, THE SECRET NUMBER WAS "<<randomnumber<<endl;
                        cout<<"PLAY AGAIN!!"<<endl;
                    }
                }
            }
        }else if(choice==0){
            exit(0);
        }else{
            cout<<"INVALID CHOICE, ENTER VALID CHOICE TO PLAY THE GAME! (0,1,2,3)"<<endl;
        }

    }
    return 0;
}