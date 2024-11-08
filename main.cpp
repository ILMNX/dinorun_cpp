#include <iostream> 
#include <conio.h> 
#include <time.h>
#include <windows.h>




#define dinoPos 2
#define rintangan 74

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);              //Mengambil handel keperangkat output standar,Layar konsol aktif
COORD CursorPosition;                                          //untuk menentukan kordinat posisi kusor baru

int dinoY;
int gameover = 0;
int speed[3]={30,15,8};





void gotoxy(int x, int y) {                                         //Pemanggilan Fungsi Gotoxy//
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setcursor(bool visible, DWORD size){                                      //pemanggilan fungsi untuk mengeset posisi kursor
    if (size == 0) {
        size = 20; // ukuran kursor default Mengubah angka dari 1 sampai 20, mengurangi lebar kursor
    }
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(console, & lpCursor);
}
 
void init() {
    system("cls"); 
    gameover = 0;
    gotoxy(3, 2); cout<<"SCORE : ";                          ///untuk menghitung skor
    for (int i = 0; i < 80; i++){                             ///untuk membuat gariss batas permainan
    	gotoxy(1+i, 25); cout<<"ß";
    	gotoxy(1+i, 1); cout<<"ß";                  
	} 
}

void gerakmudah (int jump = 0) {
    static int kaki = 0;

    if (jump == 0)
        dinoY = 0;
    else if (jump == 2)
        dinoY--;
    else dinoY++;

    gotoxy(dinoPos, 15 - dinoY);cout<<"                 ";
    gotoxy(dinoPos, 16 - dinoY);cout<<"         ÜÛßÛÛÛÛÜ";
    gotoxy(dinoPos, 17 - dinoY);cout<<"         ÛÛÛÛÛÛÛÛ";
    gotoxy(dinoPos, 18 - dinoY);cout<<"         ÛÛÛÛÛßßß";
    gotoxy(dinoPos, 19 - dinoY);cout<<" Û      ÜÛÛÛÛßßß ";
    gotoxy(dinoPos, 20 - dinoY);cout<<" ÛÛÜ  ÜÛÛÛÛÛÛÜÜÜ ";
    gotoxy(dinoPos, 21 - dinoY);cout<<" ßÛÛÛÛÛÛÛÛÛÛÛ  ß ";
    gotoxy(dinoPos, 22 - dinoY);cout<<"   ßÛÛÛÛÛÛÛß     ";
    gotoxy(dinoPos, 23 - dinoY);

    if (jump == 1 || jump == 2) {
        cout<<"    ÛÛß ßÛ       ";
        gotoxy(2, 24 - dinoY);
        cout<<"    ÛÜ   ÛÜ      ";
    } 
	else if (kaki == 0) {
        cout<<"    ßÛÛß  ßßß    ";
        gotoxy(2, 24 - dinoY);
        cout<<"      ÛÜ         ";
        kaki = !kaki;
    } 
	else if (kaki == 1) {
        cout<<"     ßÛÜ ßÛ      ";
        gotoxy(2, 24 - dinoY);
        cout<<"          ÛÜ     ";
        kaki = !kaki;
    }
    
    gotoxy(2, 25 - dinoY);
    if (jump == 0) {
        cout<<"ßßßßßßßßßßßßßßßßß";
    } else {
        cout<<"                ";
    } 
    Sleep(speed[0]);
}



void gerakmenengah(int jump = 0) {
    static int kaki = 0;

    if (jump == 0)
        dinoY = 0;
    else if (jump == 2)
        dinoY--;
    else dinoY++;

gotoxy(dinoPos, 15 - dinoY);cout<<"                 ";
    gotoxy(dinoPos, 16 - dinoY);cout<<"         ÜÛßÛÛÛÛÜ";
    gotoxy(dinoPos, 17 - dinoY);cout<<"         ÛÛÛÛÛÛÛÛ";
    gotoxy(dinoPos, 18 - dinoY);cout<<"         ÛÛÛÛÛßßß";
    gotoxy(dinoPos, 19 - dinoY);cout<<" Û      ÜÛÛÛÛßßß ";
    gotoxy(dinoPos, 20 - dinoY);cout<<" ÛÛÜ  ÜÛÛÛÛÛÛÜÜÜ ";
    gotoxy(dinoPos, 21 - dinoY);cout<<" ßÛÛÛÛÛÛÛÛÛÛÛ  ß ";
    gotoxy(dinoPos, 22 - dinoY);cout<<"   ßÛÛÛÛÛÛÛß     ";
    gotoxy(dinoPos, 23 - dinoY);

    if (jump == 1 || jump == 2) {
        cout<<"    ÛÛß ßÛ       ";
        gotoxy(2, 24 - dinoY);
        cout<<"    ÛÜ   ÛÜ      ";
    } 
	else if (kaki == 0) {
        cout<<"    ßÛÛß  ßßß    ";
        gotoxy(2, 24 - dinoY);
        cout<<"      ÛÜ         ";
        kaki = !kaki;
    } 
	else if (kaki == 1) {
        cout<<"     ßÛÜ ßÛ      ";
        gotoxy(2, 24 - dinoY);
        cout<<"          ÛÜ     ";
        kaki = !kaki;
    }
    
    gotoxy(2, 25 - dinoY);
    if (jump == 0) {
        cout<<"ßßßßßßßßßßßßßßßßß";
    } else {
        cout<<"                ";
    } 
    Sleep(speed[1]);
}


void gerakcepat(int jump = 0) {
    static int kaki = 0;

    if (jump == 0)
        dinoY = 0;
    else if (jump == 2)
        dinoY--;
    else dinoY++;

  gotoxy(dinoPos, 15 - dinoY);cout<<"                 ";
    gotoxy(dinoPos, 16 - dinoY);cout<<"         ÜÛßÛÛÛÛÜ";
    gotoxy(dinoPos, 17 - dinoY);cout<<"         ÛÛÛÛÛÛÛÛ";
    gotoxy(dinoPos, 18 - dinoY);cout<<"         ÛÛÛÛÛßßß";
    gotoxy(dinoPos, 19 - dinoY);cout<<" Û      ÜÛÛÛÛßßß ";
    gotoxy(dinoPos, 20 - dinoY);cout<<" ÛÛÜ  ÜÛÛÛÛÛÛÜÜÜ ";
    gotoxy(dinoPos, 21 - dinoY);cout<<" ßÛÛÛÛÛÛÛÛÛÛÛ  ß ";
    gotoxy(dinoPos, 22 - dinoY);cout<<"   ßÛÛÛÛÛÛÛß     ";
    gotoxy(dinoPos, 23 - dinoY);

    if (jump == 1 || jump == 2) {
        cout<<"    ÛÛß ßÛ       ";
        gotoxy(2, 24 - dinoY);
        cout<<"    ÛÜ   ÛÜ      ";
    } 
	else if (kaki == 0) {
        cout<<"    ßÛÛß  ßßß    ";
        gotoxy(2, 24 - dinoY);
        cout<<"      ÛÜ         ";
        kaki = !kaki;
    } 
	else if (kaki == 1) {
        cout<<"     ßÛÜ ßÛ      ";
        gotoxy(2, 24 - dinoY);
        cout<<"          ÛÜ     ";
        kaki = !kaki;
    }
    
    gotoxy(2, 25 - dinoY);
    if (jump == 0) {
        cout<<"ßßßßßßßßßßßßßßßßß";
    } else {
        cout<<"                ";
    } 
    Sleep(speed[2]);
    
}





void tumbuhan() {                                                              
    static int plantX = 0;
	static int score = 0;
    if (plantX == 56 && dinoY < 4) {
        score = 0;
       
        gotoxy(36, 8);cout<<"Game Over";
        getch();
        gameover = 1; 
    }
    
    gotoxy(rintangan - plantX, 20);cout<<"| | ";
    gotoxy(rintangan - plantX, 21);cout<<"| | ";
    gotoxy(rintangan - plantX, 22);cout<<"|_| ";
    gotoxy(rintangan - plantX, 23);cout<<" |  ";
    gotoxy(rintangan - plantX, 24);cout<<" |  ";
     
    plantX++;
    
    if (plantX == 73) {
        plantX = 0;
        score++;
        gotoxy(11, 2);cout<<"     ";
        gotoxy(11, 2);cout<<score;
        if (speed[0] > 20)
            speed[0]--;
    }
}

void play(){                                                                                                //Levelmudah
system("Color 08");
	system("cls");
    char ch;
    int i;
	init();
    while (true) {
        while (!kbhit()) {
            if( gameover==1 ){
            	return;
			}
			gerakmudah();
            tumbuhan();
        }
        ch = getch();
        if (ch == 32) {
        	i = 0;
            while( i < 12) {
                gerakmudah(1);
                tumbuhan();
                i++;
            }
            while(i > 0) {
               gerakmudah(2);
                tumbuhan();
                i--;
        	}
        }
		else if (ch == 'p'||ch=='P')
           getch();
		else if (ch == 27)
           break;
    }
}


void PLAYMED(){                                                                                //levelmedium
system("Color 08");
	system("cls");
    char ch;
    int i;
	init();
    while (true) {
        while (!kbhit()) {
            if( gameover==1 ){
            	return;
			}
			gerakmenengah();
            tumbuhan();
        }
        ch = getch();
        if (ch == 32) {
        	i = 0;
            while( i < 12) {
                gerakmenengah(1);
                tumbuhan();
                i++;
            }
            while(i > 0) {
                gerakmenengah(2);
                tumbuhan();
                i--;
        	}
        }
		else if (ch == 'p'||ch=='P')
           getch();
		else if (ch == 27)
           break;
    }
}
void playHARD(){                                                                                                    //Level Hard
system("Color 08");
	system("cls");
    char ch;
    int i;
	init();
    while (true) {
        while (!kbhit()) {
            if( gameover==1 ){
            	return;
			}
			gerakcepat();
            tumbuhan();
        }
        ch = getch();
        if (ch == 32) {
        	i = 0;
            while( i < 12) {
                gerakcepat(1);
                tumbuhan();
                i++;
            }
            while(i > 0) {
                gerakcepat(2);
                tumbuhan();
                i--;
        	}
        }
		else if (ch == 'p'||ch=='P')
           getch();
		else if (ch == 27)
           break;
    }
}





void instructions() {
	system("cls");
	cout<<"Instructions";
	cout<<"\n----------------";
	cout<<"\n1. Hindari tanaman untuk selamat agar tidak game over";
	cout<<"\n2. Klik tombol spasi untuk melompat ";
	cout<<"\n3. klik tombol P untuk menghentikan sejenak(PAUSE) permainan";
	cout<<"\n4. Klik Esc untuk keluar dari Game";
	cout<<"\n\n klik sembarang tombol untuk ke Menu Utama";
	getch();
}

int main() {

    setcursor(0, 0);
    
    system("Color 19");                                                                            //LOADING
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\tloading";
char x=219;
for(int i=0;i<45;i++) {
cout<<	x;
if(i<10)
Sleep(300);
if(i>=10 && i<20)
Sleep(150);
if(i>=10)
Sleep(25);
}



 do{
		system("cls");
		system("Color 16");
		gotoxy(25,5); cout<<" ---------------------------------------------------------------------------------------- "; 
		gotoxy(25,6); cout<<" |                                      DINO RUN                                       | ";  
		gotoxy(25,7); cout<<" -------------------------- -------------------------------------------------------------";                   //menugame                                          
		gotoxy(25,8); cout<<"|                                     \t\t\t\t\t\t\t|";
		gotoxy(25,9); cout<<"|Mulai Game,Selamat Datang DI Game DINO RUN                                            |";
		gotoxy(25,10); cout<<"|                                     \t\t\t\t\t\t\t|";
		gotoxy(25,11); cout<<"|Pilih Level                          \t\t\t\t\t\t\t|";
		gotoxy(25,12); cout<<"|1. Level Easy                        \t\t\t\t\t\t\t|";
		gotoxy(25,13); cout<<"|2. Level Medium                      \t\t\t\t\t\t\t|";
		gotoxy(25,14); cout<<"|3. Level Hard                        \t\t\t\t\t\t\t|";
		gotoxy(25,16); cout<<"|4. Cara Bermain Game                 \t\t\t\t\t\t\t|";	 
		gotoxy(25,17); cout<<"|5. Keluar Permainan                  \t\t\t\t\t\t\t|";
		gotoxy(25,18); cout<<"|Pilih Opsi (Tulis dengan angka): "<<"\t\t\t\t\t\t\t|";
		gotoxy(25,19); cout<<"|                                     \t\t\t\t\t\t\t|";
		gotoxy(25,20); cout<<"|                                     \t\t\t\t\t\t\t|";
		gotoxy(25,21); cout<<"|                                     \t\t\t\t\t\t\t|";
		gotoxy(25,22); cout<<"|                                     \t\t\t\t\t\t\t|";
		gotoxy(25,15); cout<<"|                                     \t\t\t\t\t\t\t|";
		gotoxy(25,23); cout<<"|--------------------------------------------------------------------------------------|";
		gotoxy(25,24); cout<<"| -------------------------------------------------------------------------------------|";
		gotoxy (25,25); cout<<"|                            GAME KARYA ANAK BANGSA BY :                               |";
		gotoxy (25,26); cout<<"|       GILBERT HASIHOLAN SIBUEA  -  FITRIA AZZAHRA   -  ANDIKA FIKRI AZHARI           |";
		gotoxy (25,27); cout<<"| UJIAN AKHIR PRAKTIKUM DDP - JURUSAN ILMU KOMPUTER FMIPA UNIVERSITAS LAMPUNG 2022     |";
		gotoxy(25,28); cout<<"-----------------------------------------------------------------------------------------";
		char KLIK = getche();
		
		
		if( KLIK=='1') play();
       	else if( KLIK=='2') PLAYMED();
		else if( KLIK=='3') playHARD();
		else if( KLIK=='4') instructions();
		else if( KLIK=='5') exit(0);
		
	}while(1);
    
	return 0;
}
