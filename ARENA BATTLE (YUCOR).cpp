#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<ctime>
#include<windows.h>
#include<math.h>
#include<conio.h>
#include<iomanip>

using namespace std;

class CenterTEXT{
public:
    void centerTEXT(string a){
    int l=a.length();
    int pos=(int)((80-l)/2);
    for(int i=0;i<pos;i++)
    cout<<" ";
    cout<<a;
    }

    void centerTEXT1(string b){
    int l=b.length();
    int pos=(int)((62-1)/2);
    for(int i=0;i<pos;i++)
    cout<<" ";
    cout<<b;
    }

    void centerTEXT2(string c){
    int l=c.length();
    int pos=(int)((65-1)/2);
    for(int i=0;i<pos;i++)
    cout<<" ";
    cout<<c;
    }

    void centerTEXT3(string c){
    int l=c.length();
    int pos=(int)((45-1)/2);
    for(int i=0;i<pos;i++)
    cout<<" ";
    cout<<c;
    }

    void centerTEXT4(string c){
    int l=c.length();
    int pos=(int)((53-1)/2);
    for(int i=0;i<pos;i++)
    cout<<" ";
    cout<<c;
    }

    void centerTEXT5(string c){
    int l=c.length();
    int pos=(int)((50-1)/2);
    for(int i=0;i<pos;i++)
    cout<<" ";
    cout<<c;
    }

};

class Horizontaline{
public:

    void Hline1(){
    for(int z=0; z<10; z++)
    {cout<<" ";}
    for(int i=0; i<58; i++)
    {cout<<"=";}
    for(int z=0; z<10; z++)
    {cout<<" ";}
    }

    void RB(){
    for(int x=0; x<10; x++)
    {cout<<" ";}
    cout<<"[";
    }
};

//GAME SEQUENCE
void MAIN_MENU();
void START_MENU();
void CHAR_NAMING();
void BATTLE_MENU();
void ARENA_MENU();
void BATTLE_START();
void BATTLE_SEQUENCE();
void PLAY_AGAIN();

//GRAPHICAL DISPLAY
void CREDITS();
void TITLE();
void PAUSE();
void INVALID_INPUT();
void CHAR_GRAPHX();
void FIST_MASTER();
void MIRAGE_LANCER();
void DUEL_MASTER();
void PLAYER_VS_FM();
void PLAYER_VS_ML();
void PLAYER_VS_DM();
void BATTLE_START_WORD();
void NUM1();
void NUM2();
void NUM3();
void FIGHT();
void LOSE();
void WIN();
void DUEL_STATUS();
void GAME_OVER();
void CHALLENGER();

int introchoice;
int startchoice;
int battlechoice;
int arenachoice;
int attackchoice;
int playagainchoice;

int attackrand;
string attackname;
string skillname;

int eattackrand;
string eattackname;
string eskillname;

int enemrand;

//PLAYER
string charname;
int dmg;
int HP, MP, dmg1, dmg2, dmg3;
int str, agi, inte, vit;
string skill1, skill2, skill3;
int MAX_HP, MAX_MP;

//ENEMY
string ename;
int edmg;
int estr, eagi, einte, evit;
int EHP, EMP, edmg1, edmg2, edmg3;
string eskill;
int MAX_EHP, MAX_EMP;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
CenterTEXT cTEXT;
Horizontaline hLINE;

int main(){
    srand(time(NULL));
    MAIN_MENU();
    return 0;
}

//GAME SEQUENCE
void MAIN_MENU (){
    TOP:
    system("cls");
    TITLE();
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<endl;
    cTEXT.centerTEXT(" ===============[ COPYRIGHTS ]===============");
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT("CREATED BY: EZ MICHAEL T. YUCOR");
    cout<<endl;
    cTEXT.centerTEXT("ITS 144 - PROGRAMMING 2");
    cout<<endl;
    cTEXT.centerTEXT("NEGROS ORIENTAL STATE UNIVERSITY");
    cout<<endl;
    cTEXT.centerTEXT("INSTRUCTOR: MR. NEIL IAN UY");
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT("====================");
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<endl;
    cTEXT.centerTEXT(" ===============[ MAIN MENU ]===============");
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT("====================");
    cout<<endl;
    cTEXT.centerTEXT1("[1]     MENU     [1]");
    cout<<endl;
    cTEXT.centerTEXT1("[2]    CREDITS   [2]");
    cout<<endl;
    cTEXT.centerTEXT1("[3]   EXIT_GAME  [3]");
    cout<<endl;
    cTEXT.centerTEXT("====================");
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT1(" >>      ");
    cin>>introchoice;
    switch(introchoice){
        {case 1:
            START_MENU();
            break;}//end case 1

        {case 2:
            CREDITS();
            break;}//end case 2

        {case 3:
            exit(0);
            break;}//end case 3
    }//end switch (introchoice)
    if ((introchoice>=4) || (introchoice==0) || (!(cin>>introchoice))){
        INVALID_INPUT();
        PAUSE();
        goto TOP;}//end if(FALSE)
}

void START_MENU (){
    TOP:
    system("cls");
    TITLE();
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<endl;
    cTEXT.centerTEXT("===============[ START MENU ]===============");
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT("====================");
    cout<<endl;
    cTEXT.centerTEXT1("[1]     START    [1]");
    cout<<endl;
    cTEXT.centerTEXT1("[2]     BACK     [2]");
    cout<<endl;
    cTEXT.centerTEXT("====================");
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT1(" >>      ");
    cin>>startchoice;
    switch(startchoice){
        {case 1:
            CHAR_NAMING();
            break;}//end case 1
        {case 2:
            MAIN_MENU();
            break;}//end case 2
    }//end switch (startchoice)

    if ((startchoice>=3) || (startchoice==0) || (!(cin>>startchoice))){
        INVALID_INPUT();
        PAUSE();
        goto TOP;}//end if (FALSE)
}

void CHAR_NAMING(){
    TOP:
    TITLE();
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << endl;
    cTEXT.centerTEXT("===============[ ENTER NAME ]===============");
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT("=====================");
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT1(" >>    ");
    cin>>charname;
    if(charname.size()<4 || charname.size()>9){
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout<<endl<<endl;
        cTEXT.centerTEXT("Name must contains 4-9 characters!");
        INVALID_INPUT();
        PAUSE();
        goto TOP;}//end if (FALSE)

    str = 27;
    agi = 26;
    inte = 23;
    vit = 25;
    HP = 5*(str+vit);
    MP = 5*(agi+inte);
    //HP = 260;
    //MP = 245;
    MAX_HP = 5*(str+vit);
    MAX_MP = 5*(agi+inte);
    dmg1 = (str+inte+agi+vit)/4; // (str+inte+agi+vit)/4
    dmg2 = (str+inte+agi+vit)/4; // (STATS + VIT)/4  STATS THAT THE PLAYER SPECIALIZED(player specialize all stats)
    dmg3 = (str+inte+agi)/3; // (str+inte+agi)/3
    skill1 = "CLEAVING STRIKE";
    skill2 = "ASSASSINATE";
    skill3 = "HELL FIRE";
    BATTLE_MENU();
}

void BATTLE_MENU(){
    TOP:
    system("cls");
    TITLE();
    CHAR_GRAPHX();
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<endl;
    cTEXT.centerTEXT("===============[ BATTLE MENU ]===============");
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT("====================");
    cout<<endl;
    cTEXT.centerTEXT1("[1]     ARENA    [1]");
    cout<<endl;
    cTEXT.centerTEXT1("[2]     BACK     [2]");
    cout<<endl;
    cTEXT.centerTEXT("====================");
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT1(" >>      ");
    cin>>battlechoice;
    switch(battlechoice){
        {case 1:
            ARENA_MENU();
            break;}//end case 1
        {case 2:
            START_MENU();
            break;}//end case 2
    }//end switch(battlechoice)

    if ((battlechoice>=3) || (battlechoice==0) || (!(cin>>battlechoice)))
    {
        INVALID_INPUT();
        PAUSE();
        goto TOP;
    }
}

void ARENA_MENU(){
    TOP:
    system("cls");
        enemrand=1+rand()%3;
        //cin>>enemrand;
        switch (enemrand){
        {case 1:
            ename = "FIST MASTER";
            estr = 32;
            eagi = 27;
            einte = 25;
            evit = 20;
            EHP = 5*(estr+evit);
            EMP = 5*(eagi+einte);
            //EHP = 260;
            //EMP = 260;
            MAX_EHP = 5*(estr+evit);
            MAX_EMP = 5*(eagi+einte);
            edmg1 = (estr+einte+eagi+evit)/4; // (str+inte+agi+vit)/4
            edmg2 = (estr+einte+evit)/3; // (STATS + VIT)/4  STATS THAT THE PLAYER SPECIALIZED
            edmg3 = (estr+einte+eagi)/3; // (str+inte+agi)/3
            eskill = "CHAIN DRIVE";

            CHALLENGER();
            cout<<"";
            FIST_MASTER();
        break;} //end case 1
        {case 2:
            ename = "MIRAGE LANCER";
            estr = 30;
            eagi = 30;
            einte = 25;
            evit = 24;
            EHP = 5*(estr+evit);
            EMP = 5*(eagi+einte);
            //EHP = 270;
            //EMP = 275;
            MAX_EHP = 5*(estr+evit);
            MAX_EMP = 5*(eagi+einte);
            edmg1 = (estr+einte+eagi+evit)/4; // (str+inte+agi+vit)/4
            edmg2 = (estr+eagi+evit)/3; // (STATS + VIT)/4  STATS THAT THE PLAYER SPECIALIZED
            edmg3 = (estr+einte+eagi)/3; // (str+inte+agi)/3
            eskill = "HARSH STRIKE";

            CHALLENGER();
            cout<<"";
            MIRAGE_LANCER();
        break;}//end case 2
        {case 3:
            ename = "DUEL MASTER";
            estr = 26;
            eagi = 26;
            einte = 26;
            evit = 16;
            EHP = 5*(estr+evit);
            EMP = 5*(eagi+einte);
            //EHP = 210;
            //EMP = 260;
            MAX_EHP = 5*(estr+evit);
            MAX_EMP = 5*(eagi+einte);
            edmg1 = (estr+einte+eagi+evit)/4; // (str+inte+agi+vit)/4
            edmg2 = (einte+eagi+evit)/3; // (STATS + VIT)/4  STATS THAT THE PLAYER SPECIALIZED
            edmg3 = (estr+einte+eagi)/3; // (str+inte+agi)/3
            eskill = "POWER SLASH";

            CHALLENGER();
            cout<<"";
            DUEL_MASTER();
        break;}//end case 3
        }//end switch(enemrand)
        // display fight
        cTEXT.centerTEXT("==========[ FIGHT ]==========");
        cout<<endl;
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cTEXT.centerTEXT("====================");
        cout<<endl;
        cTEXT.centerTEXT1("[1]    ACCEPT    [1]");
        cout<<endl;
        cTEXT.centerTEXT1("[2]      NO      [2]");
        cout<<endl;
        cTEXT.centerTEXT1("[3]     BACK     [3]");
        cout<<endl;
        cTEXT.centerTEXT("====================");
        cout<<endl;
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cTEXT.centerTEXT1(" >>      ");
        cin>>arenachoice;
        switch(arenachoice){
            {case 1:
                BATTLE_START();
                break;}//end case 1
            {case 2:
                goto TOP;
                break;}//end case 2
            {case 3:
                BATTLE_MENU();
                break;}//end case 3
        }//end switch (arenachoice)
        if ((arenachoice>=4) || (arenachoice==0) || (!(cin>>arenachoice))){
        INVALID_INPUT();
        PAUSE();
        goto TOP;}//eNd if (FALSE)
        system("pause");
}

void CHALLENGER(){
    TITLE();
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<endl;
    cTEXT.centerTEXT("===============[ CHALLENGER ]===============");
    cout<<endl<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT(ename);
    cout<<endl;
    cTEXT.centerTEXT("wants to challenge you!");
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<endl;
}

void BATTLE_START(){
    switch(enemrand){
    case 1:
        PLAYER_VS_FM();
        break;
    case 2:
        PLAYER_VS_ML();
        break;
    case 3:
        PLAYER_VS_DM();
        break;
    }//end switch(enemrand)

    Sleep(1000);
    system("cls");
    BATTLE_START_WORD();
    Sleep(1000);
    system("cls");
    NUM3();
    Sleep(1000);
    system("cls");
    NUM2();
    Sleep(1000);
    system("cls");
    NUM1();
    Sleep(500);
    system("cls");
    FIGHT();
    Sleep(500);
    BATTLE_SEQUENCE();
}

void BATTLE_SEQUENCE(){
    do{
        {PLAYER_TURN:
        TITLE();
        DUEL_STATUS();
        if (HP<1){
            system("cls");
            LOSE();
            cout<<endl<<endl;
            PAUSE();
            system("cls");
            PLAY_AGAIN();
            cout<<"";
            break;}//end if(HP<1)
        {cTEXT.centerTEXT("    ==========[ YOUR TURN ]========== ");
        cout<<endl;
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cTEXT.centerTEXT("===========================");
        cout<<endl;
        cTEXT.centerTEXT4("[1]   PHYSICAL ATTACK   [1]");
        cout<<endl;
        cTEXT.centerTEXT4("[2]     SKILL ATTACK    [2]");
        cout<<endl;
        cTEXT.centerTEXT4("[3]      SURRENDER      [3]");
        cout<<endl;
        cTEXT.centerTEXT("===========================");
        cout<<endl;
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cTEXT.centerTEXT4(" >>         ");
        cin>>attackchoice;}//end achoices
        switch(attackchoice){
        {case 1://PHYSICAL ATTACK
            {int arand = 1+(rand()%100);
            if(arand<100)
            {attackrand=4;}
            if(arand<80)
            {attackrand=3;}
            if(arand<60)
            {attackrand=2;}
            if(arand<40)
            {attackrand=1;}}//end random to use physical attack
            //cin>>attackrand;
            switch(attackrand){
            {case 1://normal hit
                attackname = "NORMAL HIT";
                dmg = (dmg2+dmg3)/2;
                dmg = dmg;
                cout<<endl;
                SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                cout << string( 30, ' ' ) << attackname << " executed!"<< "\n";
                cout << string( 30, ' ' ) << "Enemy took " << dmg << " damage." << endl;
                cout << endl;
                EHP = EHP-dmg;
                PAUSE();
                cout<<"";
                break;}//end case 1
            {case 2://double hit
                attackname = "DOUBLE HIT";
                dmg = (dmg2+dmg3)/2;
                dmg = 2*dmg;
                cout<<endl;
                SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                cout << string( 30, ' ' ) << attackname << " executed!"<< "\n";
                cout << string( 30, ' ' ) << "Enemy took " << dmg << " damage." << endl;
                cout << endl;
                EHP = EHP-dmg;
                PAUSE();
                cout<<"";
                break;}//end case 2
            {case 3://critical hit
                attackname = "CRITICAL STRIKE";
                dmg = (dmg2+dmg3)/2;
                dmg = 2.2*dmg;
                cout<<endl;
                SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                cout << string( 30, ' ' ) << attackname << " executed!"<< "\n";
                cout << string( 30, ' ' ) << "Enemy took " << dmg << " damage." << endl;
                cout << endl;
                EHP = EHP-dmg;
                PAUSE();
                cout<<"";
                break;}//end case 3
            {case 4://miss
                attackname = "MISS";
                dmg = (dmg2+dmg3)/2;
                dmg = 0*dmg;
                cout<<endl;
                SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                cout << string( 30, ' ' ) << "You "<< attackname << "ED!"<< "\n";
                cout << string( 30, ' ' ) << "Enemy took " << dmg << " damage." << endl;
                cout << endl;
                EHP = EHP-dmg;
                PAUSE();
                cout<<"";
                break;}//end case 4
            }//end switch(attackrand)
        break;}//end case 1
        {case 2://SKILL ATTACK
            cout<<endl;
            if(MP<inte){
                SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                cout<<endl;
                cout << string( 30, ' ' ) <<"OUT of MANA!"<<endl<<endl;
                PAUSE();
                cout<<"";
                goto PLAYER_TURN;}//end if(MP<inte)
            int skillrand;
            skillrand=1+rand()%3;
            //cin>>skillrand;
            switch(skillrand){
            {case 1: //CLEAVING STRIKE
                skillname = "CLEAVING STRIKE";
                dmg = str + (rand()%dmg3);
                cout<<endl;
                SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                cout << string( 30, ' ' ) << skillname << " executed!"<< "\n";
                cout << string( 30, ' ' ) << "Enemy took " << dmg << " damage." << endl;
                cout << endl;
                EHP = EHP-dmg;
                MP -= 2.5*inte;
                PAUSE();
                cout<<"";
                break;}//end case 1
            {case 2: //ASSASSINATE
                skillname = "ASSASSINATE";
                dmg = agi + (rand()%dmg3);
                cout<<endl;
                SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                cout << string( 30, ' ' ) << skillname << " executed!"<< "\n";
                cout << string( 30, ' ' ) << "Enemy took " << dmg << " damage." << endl;
                cout << endl;
                EHP = EHP-dmg;
                MP -= 2.5*inte;
                PAUSE();
                cout<<"";
                break;}//end case 2
            {case 3: //ENFLAME
                skillname = "ENFLAME";
                dmg = inte + (rand()%dmg3);
                cout<<endl;
                SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                cout << string( 30, ' ' ) << skillname << " executed!"<< "\n";
                cout << string( 30, ' ' ) << "Enemy took " << dmg << " damage." << endl;
                cout << endl;
                EHP = EHP-dmg;
                MP -= 2.5*inte;
                PAUSE();
                cout<<"";
                break;}//end case 3
            }//end switch(skillrand)
        break;}//end case 2
        {case 3://SURRENDER
            SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout<<endl;
            cTEXT.centerTEXT("YOU SURRENDER!");
            cout<<endl;
            PAUSE();
            system("cls");
            PLAY_AGAIN();
            cout<<"";
        break;}//end case 3
        }//end switch(attackchoice)
        }//end PLAYER_TURN
        {ENEMY_TURN:
        TITLE();
        DUEL_STATUS();
        if (EHP<1){
            system("cls");
            WIN();
            cout<<endl<<endl;
            PAUSE();
            system("cls");
            PLAY_AGAIN();
            cout<<"";
            break;}//end if (EHP<1)
        {cTEXT.centerTEXT("==========[ ENEMY'S TURN ]==========");
        Sleep(500);
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                int erand = 1+(rand()%100); //to change the percentage output of a certain number
                if(erand<100) // 15% for #1
                {eattackrand=1;}
                if(erand<85) // 15% for #2
                {eattackrand=2;}
                if(erand<70) // 15% for #3
                {eattackrand=3;}
                if(erand<55) // 15% for #4
                {eattackrand=4;}
                if(erand<40) // 40% for #5 so that the enemy will constantly use skill attack
                {eattackrand=5;}}//end random
            //cin>>eattackrand;
            switch(eattackrand){
            {case 1://NORMAL HIT
                cout<<endl;
                attackname = "NORMAL HIT";
                edmg = (dmg2+dmg3)/2;
                edmg = edmg;
                cout<<endl;
                cout << string( 30, ' ' ) << attackname << " executed!"<< "\n";
                cout << string( 30, ' ' ) << "You took " << edmg << " damage." << endl;
                cout << endl;
                HP = HP-edmg;
                PAUSE();
                cout<<"";
                break;}//end case 1
            {case 2://DOUBLE HIT
                cout<<endl;
                attackname = "DOUBLE HIT";
                edmg = (edmg2+edmg3)/2;
                edmg = 2*edmg;
                cout<<endl;
                cout << string( 30, ' ' ) << attackname << " executed!"<< "\n";
                cout << string( 30, ' ' ) << "You took " << edmg << " damage." << endl;
                cout << endl;
                HP = HP-edmg;
                PAUSE();
                cout<<"";
                break;}//end case 2
            {case 3://CRITICAL HIT
                cout<<endl;
                attackname = "CRITICAL STRIKE";
                edmg = (edmg2+edmg3)/2;
                edmg = 2.4*edmg;
                cout<<endl;
                cout << string( 30, ' ' ) << attackname << " executed!"<< "\n";
                cout << string( 30, ' ' ) << "You took " << edmg << " damage." << endl;
                HP = HP-edmg;
                PAUSE();
                cout<<"";
                break;}//end case 3
            {case 4://MISS
                cout<<endl;
                attackname = "MISS";
                edmg = (edmg2+edmg3)/2;
                edmg = 0*edmg;
                cout<<endl;
                cout << string( 30, ' ' ) << "Enemy "<<attackname << "ED!"<< "\n";
                cout << string( 30, ' ' ) << "You took " << edmg << " damage." << endl;
                cout << endl;
                HP = HP-edmg;
                PAUSE();
                cout<<"";
                break;}//end case 4
            {case 5://SKILL ATTACK
                cout<<endl;
                if(EMP<einte){
                    cout<<endl;
                    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                    cout << string( 30, ' ' ) <<"OUT of MANA!"<<endl<<endl;
                    PAUSE();
                    cout<<"";
                    goto ENEMY_TURN;}//end if (EMP<einte)
                switch(enemrand){
                {case 1://FIST MASTER SKILL
                    cout<<endl;
                    eskillname = "CHAIN DRIVE";
                    edmg=edmg1+(rand()%edmg2);
                    cout << string( 30, ' ' ) << eskillname << " executed!" << "\n";
                    cout << string( 30, ' ' ) << "You took " << edmg << " damage." << endl;
                    cout << endl;
                    HP = HP-edmg;
                    EMP -= 2.5*einte;
                    PAUSE();
                    cout<<"";
                    break;}//end case1
                {case 2://MIRAGE LANCER SKILL
                    cout<<endl;
                    eskillname = "HARSH STRIKE";
                    edmg=edmg1+(rand()%edmg2);
                    cout << string( 30, ' ' ) << eskillname << " executed!" << "\n";
                    cout << string( 30, ' ' ) << "You took " << edmg << " damage." << endl;
                    cout << endl;
                    HP = HP-edmg;
                    EMP -= 2.5*einte;
                    PAUSE();
                    cout<<"";
                    break;}//end case 2
                {case 3://DUEL MASTER SKILL
                    cout<<endl;
                    eskillname = "POWER SLASH";
                    edmg=edmg1+(rand()%edmg2);
                    cout << string( 30, ' ' ) << eskillname << " executed!" << "\n";
                    cout << string( 30, ' ' ) << "You took " << edmg << " damage." << endl;
                    cout << endl;
                    HP = HP-edmg;
                    EMP -= 2.5*einte;
                    PAUSE();
                    cout<<"";
                    break;}//end case 3
                }//end switch(enemrand)
            break;}//end case 5
            }//end switch(ettackrand)
        }//ENEMY'S TURN
    }//end do
    while (HP>1 || EHP>1);
}

void PLAY_AGAIN(){
    TOP:
    TITLE();
    //cout<<endl<<endl;
    cout<<endl<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT("  ==========[ PLAY AGAIN? ]==========");
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << string(34, ' ' )<<"=============";
    cout<<endl;
    cout << string(34, ' ' )<<"[1]  YES  [1]";
    cout<<endl;
    cout << string(34, ' ' )<<"[2]   NO  [2]";
    cout<<endl;
    cout << string(34, ' ' )<<"=============";
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << string(34, ' ' )<<" >>    ";
    cin>>playagainchoice;
    switch(playagainchoice){
    {case 1:
        HP=MAX_HP;
        MP=MAX_MP;
        EHP=MAX_EHP;
        EMP=MAX_EMP;
        BATTLE_MENU();
    break;}//end case 1
    {case 2:
        system("cls");
        GAME_OVER();
        cout<<endl<<endl;
        PAUSE();
        cout<<endl<<endl;
        exit(0);
        break;}//end case 2
    }//end switch

    if ((playagainchoice>=3) || (playagainchoice==0) || (!(cin>>playagainchoice)))
    {
        INVALID_INPUT();
        PAUSE();
        goto TOP;} //end if (FALSE)
}

//GRAPHICAL DISPLAYS
void CREDITS(){
    system("cls");
    TITLE();
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << endl;
    cTEXT.centerTEXT("===============[ CREDITS ]===============");
    cout<<endl<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT("PROJECT in PROGRAMMING 2");
    cout<<endl<<endl;
    cTEXT.centerTEXT("EZ MICHAEL YUCOR");
    cout<<endl<<endl;
    cTEXT.centerTEXT("ITS 114 A / MWF 7-8AM");
    cout<<endl<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT("=====[ COPYRIGHTS ]=====");
    cout<<endl<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT("Copyright (c) 2018");
    cout<<endl<<endl;
    cTEXT.centerTEXT("All Rights Reserved");
    cout<<endl<<endl;

    PAUSE();

    MAIN_MENU();
}

void PAUSE(){
    int c;
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT( "Press a key to continue..." );
    c = getch();
    if (c == 0 || c == 224) getch();
}

void INVALID_INPUT(){
    cout<<endl;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT( "Invalid Input. Try Again!" );
    cout<<endl;
    cin.clear();
    cin.ignore(1000,'\n');
}

void TITLE(){
    system("cls");
    cout<<endl;
    system("color 0b");
    cTEXT.centerTEXT(" .:::.      .:::::::;.     .,::::::    :::.    :::.   .:::.");
    cout<<endl;
    cTEXT.centerTEXT(",;;`;;      ;;;;``;;;;    ;;;;''''    `;;;;,  `;;;   ,;;`;;");
    cout<<endl;
    cTEXT.centerTEXT(",[[ '[[,     [[[,/[[['    [[ccccc       [[[[[. '[[   ,[[ '[[,");
    cout<<endl;
    cTEXT.centerTEXT(" c$$$cc$$$c   $$$$$$c      `$$''''       $$$ 'Y$c$$   c$$$cc$$$c");
    cout<<endl;
    cTEXT.centerTEXT(" 888   888;   888b '88bo,   888oo,__     888    Y88   888   888;");
    cout<<endl;
    cTEXT.centerTEXT("YMM   ''`    MMMM   'W'    ''''YUMMM    MMM     YM   YMM   ''`");
    cout<<endl<<endl;
    cTEXT.centerTEXT(":::::::.       .:::.      .:::::::::::  .:::::::::::   .:::      .,:::::: ");
    cout<<endl;
    cTEXT.centerTEXT(";;;'';;'     ,;;`;;      ;;;;;;;;''''  ;;;;;;;;''''   ;;;      ;;;;'''' ");
    cout<<endl;
    cTEXT.centerTEXT("[[[__[[|.   ,[[ '[[,        |[[           |[[        [[[      [[ccccc  ");
    cout<<endl;
    cTEXT.centerTEXT("$$''''Y$    c$$$cc$$$c      `$$           `$$        $$'      `$$''''  ");
    cout<<endl;
    cTEXT.centerTEXT("_88o,,od8P   888   888;       88,           88,      o88oo,.__   888oo,__");
    cout<<endl;
    cTEXT.centerTEXT(" ''YUMMMP'    YMM   ''`        MMM           MMM      ''''YUMMM   ''''YUMMM");
    cout<<endl<<endl;
}

void CHAR_GRAPHX(){
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    hLINE.Hline1();
    cout<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT3("PLAYER STATS");
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(23); cout<<right<<"]";
    cout<<endl;
    hLINE.Hline1();
    cout<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" NAME:\t";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t";
    cout.fill(' ');cout.width(9);cout<<left<<charname;
    //cout<<"\t"<<setw(9)<<charname;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(27); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" HEALTH:\t";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<MAX_HP;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(33); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" MANA:\t";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<MAX_MP;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(33); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" STRENGHT:   ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<str;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" AGILITY:    ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<agi;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" INTELLIGENCE:";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<inte;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" VITALITY:\t ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<vit;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" SKILLS:\t ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t[1] "<<skill1;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(17); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t\t ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t[2] "<<skill2;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(21); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t\t ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t[3] "<<skill3;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(23); cout<<right<<"]"<<endl;
    hLINE.Hline1();
    cout<<endl<<endl;
}

void FIST_MASTER(){
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    hLINE.Hline1();
    cout<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT3("ENEMY STATS");
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(24); cout<<right<<"]";
    cout<<endl;
    hLINE.Hline1();
    cout<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" NAME:\t";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<ename;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(25); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" HEALTH:\t";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<MAX_EHP;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(33); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" MANA:\t";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<MAX_EMP;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(33); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" STRENGHT:   ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<estr;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" AGILITY:    ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<eagi;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" INTELLIGENCE:";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<einte;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" VITALITY:\t ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<evit;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" SKILL:\t ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<eskill;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(25); cout<<right<<"]"<<endl;
    hLINE.Hline1();
    cout<<endl<<endl;
}

void MIRAGE_LANCER(){
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    hLINE.Hline1();
    cout<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT3("ENEMY STATS");
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(24); cout<<right<<"]";
    cout<<endl;
    hLINE.Hline1();
    cout<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" NAME:\t";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<ename;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(23); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" HEALTH:\t";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<MAX_EHP;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(33); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" MANA:\t";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<MAX_EMP;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(33); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" STRENGHT:   ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<estr;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" AGILITY:    ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<eagi;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" INTELLIGENCE:";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<einte;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" VITALITY:\t ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<evit;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" SKILL:\t ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<eskill;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(24); cout<<right<<"]"<<endl;
    hLINE.Hline1();
    cout<<endl<<endl;
}

void DUEL_MASTER(){
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    hLINE.Hline1();
    cout<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cTEXT.centerTEXT3("ENEMY STATS");
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(24); cout<<right<<"]";
    cout<<endl;
    hLINE.Hline1();
    cout<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" NAME:\t";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<ename;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(25); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" HEALTH:\t";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<MAX_EHP;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(33); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" MANA:\t";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<MAX_EMP;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(33); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" STRENGHT:   ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<estr;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" AGILITY:    ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(4); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<eagi;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" INTELLIGENCE:";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<einte;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" VITALITY:\t ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<evit;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(34); cout<<right<<"]"<<endl;
    hLINE.RB();
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<" SKILL:\t ";
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(3); cout<<"||";
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"\t"<<eskill;
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(25); cout<<right<<"]"<<endl;
    hLINE.Hline1();
    cout<<endl<<endl;
}

void PLAYER_VS_FM(){
    system("cls");
    cout<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    //DISPLAY PLAYER
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<endl;
    cTEXT.centerTEXT(" ::::::::::.   .:::         .:::.       .::.   ,::.     .,::::::   .:::::::..");
    cout<<endl;
    cTEXT.centerTEXT(" `;;;```.;;;   ;;;         ,;;`;;       ';;;   ;;;;'   ;;;;''''   ;;;;``;;;;  ");
    cout<<endl;
    cTEXT.centerTEXT("  `]]nnn]]'   [[[        ,[[ '[[,       '[[,[[['     [[ccccc     [[[,/[[[' ");
    cout<<endl;
    cTEXT.centerTEXT("   $$$''       $$'       c$$$cc$$$c        c$$'       `$$''''     $$$$$$c     ");
    cout<<endl;
    cTEXT.centerTEXT("   888o       o88oo,.__   888   888;     ,8P''        888oo,__    888b '88bo,");
    cout<<endl;
    cTEXT.centerTEXT("   YMMMb      ''''YUMMM   YMM   ''`     mM'           ''''YUMMM   MMMM   'W' ");
    cout<<endl;
    // DISPLAY VS
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<endl<<endl;
    cTEXT.centerTEXT("==========[ ]==========");
    cout<<endl<<endl;
    cTEXT.centerTEXT(".::,     .::.   .::::::. ");
    cout<<endl;
    cTEXT.centerTEXT("`;;,   ,;;;'   ;;;`    ` ");
    cout<<endl;
    cTEXT.centerTEXT(" |[[  .[[/     '[==/[[[[,");
    cout<<endl;
    cTEXT.centerTEXT("  Y$c.$$'               $");
    cout<<endl;
    cTEXT.centerTEXT("   Y88P         88b    dP");
    cout<<endl;
    cTEXT.centerTEXT("    MP           'YMmMY' ");
    cout<<endl<<endl;
    cTEXT.centerTEXT("==========[ ]==========");
    cout<<endl<<endl;
    //DISPLAY OPPONENT'S NAME
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<endl;
    cTEXT.centerTEXT(".-:::::'  :::   .::::::.   ::::::::::::");
    cout<<endl;
    cTEXT.centerTEXT(";;;''''   ;;;  ;;;`    `   ;;;;;;;;''''");
    cout<<endl;
    cTEXT.centerTEXT("[[[,,==   [[[  '[==/[[[[,       [[     ");
    cout<<endl;
    cTEXT.centerTEXT("`$$$'``   $$$           $       $$     ");
    cout<<endl;
    cTEXT.centerTEXT(" 888      888   88b    dP       88,    ");
    cout<<endl;
    cTEXT.centerTEXT(" 'MM,     MMM    'YMmMY'        MMM    ");
    cout<<endl;
    //2ND WORD of NAME
    cout<<endl<<endl;
    cTEXT.centerTEXT(".        :       :::.        .::::::.   ::::::::::::  .,::::::    :::::::..   ");
    cout<<endl;
    cTEXT.centerTEXT(";;,.    ;;;      ;;`;;      ;;;`    `   ;;;;;;;;''''  ;;;;''''    ;;;;``;;;;  ");
    cout<<endl;
    cTEXT.centerTEXT("[[[[, ,[[[[,    ,[[ '[[,    '[==/[[[[,       [[        [[cccc      [[[,/[[['  ");
    cout<<endl;
    cTEXT.centerTEXT("$$$$$$$$'$$$   c$$$cc$$$c            $       $$        $$''''      $$$$$$c    ");
    cout<<endl;
    cTEXT.centerTEXT("888 Y88' 888o   888   888,   88b    dP       88,       888oo,__    888b '88bo,");
    cout<<endl;
    cTEXT.centerTEXT("MMM  M'  'MMM   YMM   ''`     'YMmMY'        MMM       ''''YUMMM   MMMM   'W' ");
    cout<<endl<<endl;
}

void PLAYER_VS_ML(){
    system("cls");
    cout<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    //DISPLAY PLAYER
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<endl;
    cTEXT.centerTEXT(" ::::::::::.   .:::         .:::.       .::.   ,::.     .,::::::   .:::::::..");
    cout<<endl;
    cTEXT.centerTEXT(" `;;;```.;;;   ;;;         ,;;`;;       ';;;   ;;;;'   ;;;;''''   ;;;;``;;;;  ");
    cout<<endl;
    cTEXT.centerTEXT("  `]]nnn]]'   [[[        ,[[ '[[,       '[[,[[['     [[ccccc     [[[,/[[[' ");
    cout<<endl;
    cTEXT.centerTEXT("   $$$''       $$'       c$$$cc$$$c        c$$'       `$$''''     $$$$$$c     ");
    cout<<endl;
    cTEXT.centerTEXT("   888o       o88oo,.__   888   888;     ,8P''        888oo,__    888b '88bo,");
    cout<<endl;
    cTEXT.centerTEXT("   YMMMb      ''''YUMMM   YMM   ''`     mM'           ''''YUMMM   MMMM   'W' ");
    cout<<endl;
    // DISPLAY VS
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<endl<<endl;
    cTEXT.centerTEXT("==========[ ]==========");
    cout<<endl<<endl;
    cTEXT.centerTEXT(".::,     .::.   .::::::. ");
    cout<<endl;
    cTEXT.centerTEXT("`;;,   ,;;;'   ;;;`    ` ");
    cout<<endl;
    cTEXT.centerTEXT(" |[[  .[[/     '[==/[[[[,");
    cout<<endl;
    cTEXT.centerTEXT("  Y$c.$$'               $");
    cout<<endl;
    cTEXT.centerTEXT("   Y88P         88b    dP");
    cout<<endl;
    cTEXT.centerTEXT("    MP           'YMmMY' ");
    cout<<endl<<endl;
    cTEXT.centerTEXT("==========[ ]==========");
    cout<<endl<<endl;
    //DISPLAY OPPONENT'S NAME
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<endl;
    cTEXT.centerTEXT(".        :     :::  :::::::..       :::.         .,-:::::     .,::::::  ");
    cout<<endl;
    cTEXT.centerTEXT(";;,.    ;;;    ;;;  ;;;;``;;;;      ;;`;;      ,;;-'````'     ;;;;''''  ");
    cout<<endl;
    cTEXT.centerTEXT("[[[[, ,[[[[,   [[[   [[[,/[[['     ,[[ '[[,    [[[    [[[[[    [[cccc   ");
    cout<<endl;
    cTEXT.centerTEXT("$$$$$$$$'$$$   $$$   $$$$$$c      c$$$cc$$$c   '$$c.    '$$    $$''''   ");
    cout<<endl;
    cTEXT.centerTEXT("888 Y88' 888o  888   888b '88bo,   888   888,   `Y8bo,,,o88o   888oo,__ ");
    cout<<endl;
    cTEXT.centerTEXT("   MMM  M'  'MMM  MMM   MMMM   'W'    YMM   ''`     `'YMUP'YMM    ''''YUMMM  ");
    cout<<endl;
    //2ND WORD of NAME
    cout<<endl<<endl;
    cTEXT.centerTEXT(" :::         :::.       :::.    :::.    .,-:::::    .,::::::    :::::::..   ");
    cout<<endl;
    cTEXT.centerTEXT(" ;;;         ;;`;;      `;;;;,  `;;;  ,;;;'````'    ;;;;''''    ;;;;``;;;;  ");
    cout<<endl;
    cTEXT.centerTEXT(" [[[        ,[[ '[[,      [[[[[. '[[  [[[            [[cccc      [[[,/[[['  ");
    cout<<endl;
    cTEXT.centerTEXT(" $$'       c$$$cc$$$c     $$$ 'Y$c$$  $$$            $$''''      $$$$$$c    ");
    cout<<endl;
    cTEXT.centerTEXT("o88oo,.__   888   888,    888    Y88  `88bo,__,o,    888oo,__    888b '88bo,");
    cout<<endl;
    cTEXT.centerTEXT("''''YUMMM   YMM   ''`     MMM     YM    'YUMMMMMP'   ''''YUMMM   MMMM   'W' ");
    cout<<endl<<endl;
}

void PLAYER_VS_DM(){
    system("cls");
    cout<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    //DISPLAY PLAYER
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<endl;
    cTEXT.centerTEXT(" ::::::::::.   .:::         .:::.       .::.   ,::.     .,::::::   .:::::::..");
    cout<<endl;
    cTEXT.centerTEXT(" `;;;```.;;;   ;;;         ,;;`;;       ';;;   ;;;;'   ;;;;''''   ;;;;``;;;;  ");
    cout<<endl;
    cTEXT.centerTEXT("  `]]nnn]]'   [[[        ,[[ '[[,       '[[,[[['     [[ccccc     [[[,/[[[' ");
    cout<<endl;
    cTEXT.centerTEXT("   $$$''       $$'       c$$$cc$$$c        c$$'       `$$''''     $$$$$$c     ");
    cout<<endl;
    cTEXT.centerTEXT("   888o       o88oo,.__   888   888;     ,8P''        888oo,__    888b '88bo,");
    cout<<endl;
    cTEXT.centerTEXT("   YMMMb      ''''YUMMM   YMM   ''`     mM'           ''''YUMMM   MMMM   'W' ");
    cout<<endl;
    // DISPLAY VS
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<endl<<endl;
    cTEXT.centerTEXT("==========[ ]==========");
    cout<<endl<<endl;
    cTEXT.centerTEXT(".::,     .::.   .::::::. ");
    cout<<endl;
    cTEXT.centerTEXT("`;;,   ,;;;'   ;;;`    ` ");
    cout<<endl;
    cTEXT.centerTEXT(" |[[  .[[/     '[==/[[[[,");
    cout<<endl;
    cTEXT.centerTEXT("  Y$c.$$'               $");
    cout<<endl;
    cTEXT.centerTEXT("   Y88P         88b    dP");
    cout<<endl;
    cTEXT.centerTEXT("    MP           'YMmMY' ");
    cout<<endl<<endl;
    cTEXT.centerTEXT("==========[ ]==========");
    cout<<endl<<endl;
    //DISPLAY OPPONENT'S NAME
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<endl;
    cTEXT.centerTEXT(":::::::-.     ...    :::  .,::::::     :::     ");
    cout<<endl;
    cTEXT.centerTEXT(" ;;,   `';,   ;;     ;;;  ;;;;''''     ;;;     ");
    cout<<endl;
    cTEXT.centerTEXT(" `[[     [[  [['     [[[   [[cccc      [[[     ");
    cout<<endl;
    cTEXT.centerTEXT("  $$,    $$  $$      $$$   $$''''      $$'     ");
    cout<<endl;
    cTEXT.centerTEXT("  888_,o8P'  88    .d888   888oo,__   o88oo,.__");
    cout<<endl;
    cTEXT.centerTEXT("  MMMMP'`     'YmmMMMM''   ''''YUMMM  ''''YUMMM");
    cout<<endl;
    //2ND WORD of NAME
    cout<<endl<<endl;
    cTEXT.centerTEXT(".        :       :::.        .::::::.   ::::::::::::  .,::::::    :::::::..   ");
    cout<<endl;
    cTEXT.centerTEXT(";;,.    ;;;      ;;`;;      ;;;`    `   ;;;;;;;;''''  ;;;;''''    ;;;;``;;;;  ");
    cout<<endl;
    cTEXT.centerTEXT("[[[[, ,[[[[,    ,[[ '[[,    '[==/[[[[,       [[        [[cccc      [[[,/[[['  ");
    cout<<endl;
    cTEXT.centerTEXT("$$$$$$$$'$$$   c$$$cc$$$c            $       $$        $$''''      $$$$$$c    ");
    cout<<endl;
    cTEXT.centerTEXT("888 Y88' 888o   888   888,   88b    dP       88,       888oo,__    888b '88bo,");
    cout<<endl;
    cTEXT.centerTEXT("MMM  M'  'MMM   YMM   ''`     'YMmMY'        MMM       ''''YUMMM   MMMM   'W' ");
}

void BATTLE_START_WORD(){
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cTEXT.centerTEXT(":::::::.      :::.       ::::::::::::  ::::::::::::   :::       .,::::::  ");
    cout<<endl;
    cTEXT.centerTEXT(" ;;;'';;'     ;;`;;      ;;;;;;;;''''  ;;;;;;;;''''   ;;;       ;;;;''''  ");
    cout<<endl;
    cTEXT.centerTEXT(" [[[__[[|.   ,[[ '[[,         [[            [[        [[[        [[cccc   ");
    cout<<endl;
    cTEXT.centerTEXT(" $$''''Y$$  c$$$cc$$$c        $$            $$        $$'        $$''''   ");
    cout<<endl;
    cTEXT.centerTEXT("_88o,,od8P   888   888,       88,           88,      o88oo,.__   888oo,__ ");
    cout<<endl;
    cTEXT.centerTEXT("''YUMMMP'    YMM   ''`        MMM           MMM      ''''YUMMM   ''''YUMMM");
    cout<<endl;
    //2ND WORD of NAME
    cout<<endl<<endl;
    cTEXT.centerTEXT(" .::::::.   ::::::::::::    :::.       :::::::..     ::::::::::::");
    cout<<endl;
    cTEXT.centerTEXT(";;;`    `   ;;;;;;;;''''    ;;`;;      ;;;;``;;;;    ;;;;;;;;''''");
    cout<<endl;
    cTEXT.centerTEXT("'[==/[[[[,       [[        ,[[ '[[,     [[[,/[[['         [[     ");
    cout<<endl;
    cTEXT.centerTEXT("         $       $$       c$$$cc$$$c    $$$$$$c           $$     ");
    cout<<endl;
    cTEXT.centerTEXT(" 88b    dP       88,       888   888,   888b '88bo,       88,    ");
    cout<<endl;
    cTEXT.centerTEXT("  'YMmMY'        MMM       YMM   ''`    MMMM   'W'        MMM    ");
    //3ND WORD
    cout<<endl<<endl;
    cTEXT.centerTEXT(":::  :::.    :::.");
    cout<<endl;
    cTEXT.centerTEXT(";;;  `;;;;,  `;;;");
    cout<<endl;
    cTEXT.centerTEXT("[[[    [[[[[. '[[");
    cout<<endl;
    cTEXT.centerTEXT("$$$    $$$ 'Y$c$$");
    cout<<endl;
    cTEXT.centerTEXT("888    888    Y88");
    cout<<endl;
    cTEXT.centerTEXT("MMM    MMM     YM");
    cout<<endl;
}

void NUM1(){
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl;
    cTEXT.centerTEXT(":.");
    cout<<endl;
    cTEXT.centerTEXT(";;");
    cout<<endl;
    cTEXT.centerTEXT("[[");
    cout<<endl;
    cTEXT.centerTEXT("$$");
    cout<<endl;
    cTEXT.centerTEXT("88");
    cout<<endl;
    cTEXT.centerTEXT("MM");
}

void NUM2(){
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl;
    cTEXT.centerTEXT("  .:::.  ");
    cout<<endl;
    cTEXT.centerTEXT(" ,;'``;. ");
    cout<<endl;
    cTEXT.centerTEXT(" ''  ,[['");
    cout<<endl;
    cTEXT.centerTEXT(" .c$$P'  ");
    cout<<endl;
    cTEXT.centerTEXT("d88 _,oo,");
    cout<<endl;
    cTEXT.centerTEXT("MMMUP*'^^");
}

void NUM3(){
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl;
    cTEXT.centerTEXT(" .::.    ");
    cout<<endl;
    cTEXT.centerTEXT(";'`';;,  ");
    cout<<endl;
    cTEXT.centerTEXT("   .n[[  ");
    cout<<endl;
    cTEXT.centerTEXT("  ``'$$$.");
    cout<<endl;
    cTEXT.centerTEXT("  ,,o888'");
    cout<<endl;
    cTEXT.centerTEXT("  YMMP'  ");
}

void FIGHT(){
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl;
    cTEXT.centerTEXT(".-:::::'  :::    .,-:::::|      ::   .:    ::::::::::::  :::");
    cout<<endl;
    cTEXT.centerTEXT(";;;''''   ;;;  ,;;-'````'      ,;;   ;;,   ;;;;;;;;''''  ;;;");
    cout<<endl;
    cTEXT.centerTEXT("[[[,,==   [[[  [[[    [[[[[|  ,[[[,,,[[[        [[       [[[");
    cout<<endl;
    cTEXT.centerTEXT("`$$$'``   $$$  '$$c.    '$$   '$$$'''$$$        $$          ");
    cout<<endl;
    cTEXT.centerTEXT(" 888      888   `Y8bo,,,o88o   888   '88o       88,      888");
    cout<<endl;
    cTEXT.centerTEXT(" 'MM,     MMM     `'YMUP'YMM   MMM    YMM       MMM      MMM");
}

void DUEL_STATUS(){
        cout<<endl;
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        hLINE.Hline1();
        cout<<endl;
        hLINE.RB();
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cTEXT.centerTEXT5("DUEL STATUS");
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout.width(22); cout<<right<<"]";
        cout<<endl;
        hLINE.Hline1();
        cout<<endl;
        cout<<"\t  [ ";
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout.fill(' ');cout.width(9);cout<<left<<charname;
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout<<"\t\t       || ";
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout<<ename;
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout<<"\t\t   ]"<<endl;
        // HP LINE
        cout<<"\t  [";
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout<<" HP:************ [";
        cout<<setw(3)<<HP;
        cout<<"]";
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout<<"      ||";
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout<<" HP:************ [";
        cout<<setw(3)<<EHP;
        cout<<"]";
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout<<"    ]"<<endl;
        //MANA LINE
        cout<<"\t  [";
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        //player mana line
        cout<<" MP:************ [";
        cout<<setw(3)<<MP;
        cout<<"]";
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout<<"      ||";
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        //enemy mana line
        cout<<" MP:************ [";
        cout<<setw(3)<<EMP;
        cout<<"]";
        SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout<<"    ]"<<endl;
        //cout<<endl;
        hLINE.Hline1();
        cout<<endl<<endl;
}

void LOSE(){
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cTEXT.centerTEXT(".-:.     ::-.        ...          ...    :::");
    cout<<endl;
    cTEXT.centerTEXT(" ';;.   ;;;;'     .;;;;;;;.       ;;     ;;;");
    cout<<endl;
    cTEXT.centerTEXT("   '[[,[[['      ,[[     [[,     [['     [[[");
    cout<<endl;
    cTEXT.centerTEXT("     c$$'        $$$,     $$$    $$      $$$");
    cout<<endl;
    cTEXT.centerTEXT("   ,8P'`         '888,_ _,88P    88    .d888");
    cout<<endl;
    cTEXT.centerTEXT("  mM'              'YMMMMMP'      'YmmMMMM''");
    cout<<endl;
    //2ND WORD of NAME
    cout<<endl<<endl;
    cTEXT.centerTEXT(" :::             ...          .::::::.     .,::::::      :::");
    cout<<endl;
    cTEXT.centerTEXT(" ;;;          .;;;;;;;.      ;;;`    `     ;;;;''''      ;;;");
    cout<<endl;
    cTEXT.centerTEXT(" [[[         ,[[     |[[,    '[==/[[[[,    [[cccc        [[[");
    cout<<endl;
    cTEXT.centerTEXT(" $$'         $$$,     $$$             $    '$$''''         ");
    cout<<endl;
    cTEXT.centerTEXT("o88oo,.__    '888,_ _,88P     88b    dP     888oo,__     888");
    cout<<endl;
    cTEXT.centerTEXT("''''YUMMM      'YMMMMMP'       'YMmMY'      ''''YUMMM    MMM");
}

void WIN(){
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cTEXT.centerTEXT(".-:.     ::-.        ...          ...    :::");
    cout<<endl;
    cTEXT.centerTEXT(" ';;.   ;;;;'     .;;;;;;;.       ;;     ;;;");
    cout<<endl;
    cTEXT.centerTEXT("   '[[,[[['      ,[[     [[,     [['     [[[");
    cout<<endl;
    cTEXT.centerTEXT("     c$$'        $$$,     $$$    $$      $$$");
    cout<<endl;
    cTEXT.centerTEXT("   ,8P'`         '888,_ _,88P    88    .d888");
    cout<<endl;
    cTEXT.centerTEXT("  mM'              'YMMMMMP'      'YmmMMMM''");
    cout<<endl;
    //2ND WORD of NAME
    cout<<endl<<endl;
    cTEXT.centerTEXT(".::    .   .:::    :::    :::.    :::.    :::");
    cout<<endl;
    cTEXT.centerTEXT("';;,  ;;  ;;;'     ;;;    `;;;;,  `;;;    ;;;");
    cout<<endl;
    cTEXT.centerTEXT(" '[[, [[, [['      [[[      [[[[[. '[[    [[[");
    cout<<endl;
    cTEXT.centerTEXT("   Y$c$$$c$P       $$$      $$$ 'Y$c$$       ");
    cout<<endl;
    cTEXT.centerTEXT("    '88'888        888      888    Y88    888");
    cout<<endl;
    cTEXT.centerTEXT("     'M 'M'        MMM      MMM     YM    MMM");
}

void GAME_OVER(){
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cTEXT.centerTEXT(".,-:::::       :::.       .        :     .,::::::  ");
    cout<<endl;
    cTEXT.centerTEXT(",;;-'````'       ;;`;;      ;;,.    ;;;    ;;;;''''  ");
    cout<<endl;
    cTEXT.centerTEXT("[[[   [[[[[[    ,[[ '[[,    [[[[, ,[[[[,    [[cccc   ");
    cout<<endl;
    cTEXT.centerTEXT("'$$c.    '$$   c$$$cc$$$c   $$$$$$$$'$$$    $$       ");
    cout<<endl;
    cTEXT.centerTEXT(" `Y8bo,,,o88o   888   888,  888 Y88' 888o   888oo,__ ");
    cout<<endl;
    cTEXT.centerTEXT("   `'YMUP'YMM   YMM   ''`   MMM  M'  'MMM   ''''YUMMM");
    cout<<endl;
    //2ND WORD of NAME
    cout<<endl<<endl;
    cTEXT.centerTEXT("    ...       :::      .::.  .,::::::    :::::::..     :::");
    cout<<endl;
    cTEXT.centerTEXT(" .;;;;;;;.    ';;,   ,;;;'   ;;;;''''    ;;;;``;;;;    ;;;");
    cout<<endl;
    cTEXT.centerTEXT(",[[     |[[,   |[[  .[[/      [[cccc      [[[,/[[['    [[[");
    cout<<endl;
    cTEXT.centerTEXT("$$$,     $$$    Y$c.$$'       $$          $$$$$$c         ");
    cout<<endl;
    cTEXT.centerTEXT("'888,_ _,88P     Y88P         888oo,__    888b '88bo,  888");
    cout<<endl;
    cTEXT.centerTEXT("  'YMMMMMP'       MP          ''''YUMMM   MMMM   'W'   MMM");
}
