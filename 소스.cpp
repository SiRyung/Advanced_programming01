#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>
#include <process.h>

int r_start;
double pst;

void gotoxy(int x, int y) {

    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}

// 게임 간단히 설명, 제한시간 받기
int intro_game() {

    int game_time;

    printf("Tug War\n");
    printf("줄다리기 게임\n\n");
    printf("스페이스를 클릭하여 줄을 당기시오!\n\n");
    printf("줄다리기 게임의 제한 시간(s)을 입력하고 Enter> ");

    scanf_s("%d", &game_time);
    system("cls");

    gotoxy(1, 1);
    printf("제한시간:%d 초", game_time);
    gotoxy(30, 1);
    printf("경과시간:%4.1F 초", 0.0);

    gotoxy(38, 6);

    printf("기준점");

    gotoxy(40, 7);

    printf("▼");

    gotoxy(40, 9);

    printf("▲");

    return game_time;

}


// 줄다리기 줄 그리기
void display_line(int cnt) {

    int i, line[21] = { 0 };

    line[10] = 1;
    line[4] = 2;
    line[16] = 2;

    gotoxy(1, 8);

    for (i = 0; i < 78; i++) {
        printf(" ");
    }

    gotoxy(cnt, 8);

    for (i = 0; i < 21; i++) {

        if (line[i] == 0) {
            printf("□");
        }
        else if (line[i] == 1) {
            printf("■");
        }
        else {
            printf("◆");
        }
    }
}

// 줄다리기 게임 초기화면
void display_start()
{
    int i, r_start = 20;
    display_line(r_start);

    gotoxy(65, 6);
    printf("사용자");
    gotoxy(12, 6);
    printf("컴퓨터");

    gotoxy(1, 13);
    printf("아무키나 누르면 경기를 시작합니다. ");
    int k = _getch();
    gotoxy(1, 12);
    printf("                                    ");
    gotoxy(1, 13);
    printf("                                    ");
}

//컴퓨터가 줄을 당기는 힘
_stdcall Computer_Play(void* arguments)
{
    int rnd, i;
    clock_t end;

    int game_time = (int)arguments;
    clock_t start = clock();

    do {

        r_start = r_start - 1;
        display_line(r_start);
        Sleep(300);

        end = clock();
        pst = (double)((double)end - (double)start) / CLK_TCK;
        gotoxy(30, 1);
        printf("경과시간:%4.1f초", pst);

    } while (pst < game_time && ((8 < r_start) && (r_start < 32)));

}



int main(void)
{
    r_start = 20;
    pst = 0;

    srand((unsigned)time(NULL));

    int game_time = intro_game();
    display_start();

    //동시동작
    HANDLE hand = _beginthreadex(NULL, 0, Computer_Play, game_time, NULL, NULL);

    int chr;
    //사용자가 줄을 당기는 힘
    do {
        chr = _getch();
        if (chr == 32) {
            r_start = r_start + 1;
            display_line(r_start);
        }
        Sleep(200);
    } while (pst < game_time && ((8 < r_start) && (r_start < 32)));

    //승리자 발표
    gotoxy(30, 10);

    if (20 > r_start) {
        printf("\n\n\n컴퓨터의 승리! 아쉽네요.\n\n");
    }
    else if (r_start > 20) {
        printf("\n\n\n사용자의 승리! 수고하셨습니다.\n");
    }
    else {
        printf("\n\n\n승리자가 없습니다! 다시 시작해주세요.\n");
    }
    Sleep(3000);

    return 0;
}
