#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


// Game 1
    int i = 0;
    int GC;                  // Intro에서 Game 1, 2 ,3을 선택하는 변수
    int c;                   // 나중에 getchar를 반환하며 초기화할려고 임의로 만든 것
    int g1ic;
    int fg1;
    int ob_level = 1;
    int ch_boss; int boss1 = 2000, boss2 = 3000, boss3 = 6000, boss4 = 8400;
    int money = 1000;
    char g1enExit[50];

    char ob_enchant[100];
    char* ob_name;

    void intro();            // 게임을 처음 시작하는 tile
    void pass();        // 1번째 게임 강화하기로 넘어가는 void
    void g1i();

    void intro() {
        while (1) {

            printf("\n1번 게임 : 강화하기 게임\n");
            printf("2번 게임 : 벽돌깨기 게임 (미완성 및 업데이트 예정입니다.)\n");
            printf("3번 게임 : 업데이트 예정\n\n");


            printf("##모든 게임은 Press Key 형식으로 이루어집니다.\n\n");


            printf("게임을 선택하세요.(1 ~ 3) \n");
            scanf_s("%d", &GC);

            if (GC <= 3 && GC >= 1) {
                printf("%d의 게임을 실행합니다.", GC);
                Sleep(300);
                system("cls");
                break;
            }
            else {
                printf("1~3까지의 게임중에서 선택해주세요..\n");
                printf("\n");
                Sleep(300);
                system("cls");
            }


        }
    }
    void pass(char* str) {
        ob_name = str;
    }
    void g1i1() {
        if (g1ic == 1) {

            system("cls");
            printf("\n아무 키나 입력시 강화를 그만합니다.\n\n\n");
            scanf_s("%s", &g1enExit, sizeof(g1enExit));
            system("cls");
            if ((strcmp(g1enExit, " ") == 0)) {
                return g1i();
            }

            while (1) {

                Sleep(1500);
                system("cls");

                printf("\"강화\"를 계속 입력하여 자신을 강화시키세요!\n\n\n");
                scanf_s("%s", &ob_enchant, sizeof(ob_enchant));

                if ((strcmp(ob_enchant, "강화")) == 0) {

                    srand((unsigned)time(NULL));

                    int levelup = rand() % ((20 - 1) + 1) + 1;
                    int holdup = rand() % 100;
                    int leveldown = rand() % ((10 - 5) + 1) + 5;
                    int levelup_10 = rand() % ((100 - 95) + 1) + 95;
                    int levelup_20 = rand() % ((95 - 85) + 1) + 85;
                    int levelup_30 = rand() % ((85 - 75) + 1) + 75;
                    int levelup_40 = rand() % ((70 - 65) + 1) + 65;
                    int levelup_50 = rand() % ((60 - 50) + 1) + 50;
                    int levelup_60 = rand() % ((50 - 40) + 1) + 40;
                    int levelup_70 = rand() % ((40 - 35) + 1) + 35;
                    int levelup_80 = rand() % ((35 - 35) + 1) + 35;
                    int levelup_90 = rand() % ((35 - 30) + 1) + 30;
                    int levelup_100 = rand() % ((25 - 20) + 1) + 20;

                    if (ob_level <= 10) {
                        printf("\n%d%%의 확률로 강화에 시도하였습니다.\n", levelup_10);
                        if (holdup < levelup_10) {
                            ob_level += levelup;
                            printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n강화에 실패하였습니다.(현재 레벨 : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 10 && ob_level <= 20) {
                        printf("\n%d%%의 확률로 강화에 시도하였습니다.\n", levelup_20);
                        if (holdup < levelup_20) {
                            ob_level += levelup;
                            printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n강화에 실패하였습니다.(현재 레벨 : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 20 && ob_level <= 30) {
                        printf("\n%d%%의 확률로 강화에 시도하였습니다.\n", levelup_30);
                        if (holdup < levelup_30) {
                            ob_level += levelup;
                            printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n강화에 실패하였습니다.(현재 레벨 : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 30 && ob_level <= 40) {
                        printf("\n%d%%의 확률로 강화에 시도하였습니다.\n", levelup_40);
                        if (holdup < levelup_40) {
                            ob_level += levelup;
                            printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n강화에 실패하였습니다.(현재 레벨 : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 40 && ob_level <= 50) {
                        printf("\n%d%%의 확률로 강화에 시도하였습니다.\n", levelup_50);
                        if (holdup < levelup_50) {
                            ob_level += levelup;
                            printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n강화에 실패하였습니다.(현재 레벨 : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 50 && ob_level <= 60) {
                        printf("\n%d%%의 확률로 강화에 시도하였습니다.\n", levelup_60);
                        if (holdup < levelup_60) {
                            ob_level += levelup;
                            printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n강화에 실패하였습니다.(현재 레벨 : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 60 && ob_level <= 70) {
                        printf("\n%d%%의 확률로 강화에 시도하였습니다.\n", levelup_70);
                        if (holdup < levelup_70) {
                            ob_level += levelup;
                            printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n강화에 실패하였습니다.(현재 레벨 : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 70 && ob_level <= 80) {
                        printf("\n%d%%의 확률로 강화에 시도하였습니다.\n", levelup_80);
                        if (holdup < levelup_80) {
                            ob_level += levelup;
                            printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n강화에 실패하였습니다.(현재 레벨 : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 80 && ob_level <= 90) {
                        printf("\n%d%%의 확률로 강화에 시도하였습니다.\n", levelup_90);
                        if (holdup < levelup_90) {
                            ob_level += levelup;
                            printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n강화에 실패하였습니다.(현재 레벨 : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 90 && ob_level <= 100) {
                        printf("\n%d%%의 확률로 강화에 시도하였습니다.\n", levelup_100);
                        if (holdup < levelup_100) {
                            ob_level += levelup;
                            printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n강화에 실패하였습니다.(현재 레벨 : %d)\n\n", ob_level);
                        }
                    }
                }
                else {
                    return g1i();
                }
            }
        }
    }
    void g1i2() {
        if (g1ic == 2) {
            printf("\n당신이 원하는 단계의 보스를 선택하여주세요.\n");
            printf("1 : 1단계 보스 : 돌멩이\n");
            printf("2 : 2단계 보스 : 포인터\n");
            printf("3 : 3단계 보스 : 지렁이\n");
            printf("4 : 최종 보스 : 교수\n");
            scanf_s("%d", &ch_boss);

            system("cls");

            if (ch_boss == 1) {
                printf("%s은(는) 돌멩이와 전투를 시작한다.\n", ob_name);
                Sleep(1000);
                printf("%s의 전투력 %d vs 돌멩이의 전투력 %d\n\n", ob_name, ob_level * 85, boss1);
                Sleep(1000);
                if (ob_level * 85 >= boss1) {
                    printf("전투에서 승리했다!\n");
                    money += boss1 / 15;
                    Sleep(1000);
                    g1i();
                }
                else {
                    printf("전투에서 패배하였다...\n");
                    Sleep(1000);
                    printf("레벨을 1만큼 잃었다..\n");
                    Sleep(1000);
                    ob_level -= 1;
                    g1i();
                }
            }
            else if (ch_boss == 2) {
                printf("%s은(는) 포인터와 전투를 시작한다.\n", ob_name);
                Sleep(1000);
                printf("%s의 전투력 %d vs 포인터의 전투력 %d\n\n", ob_name, ob_level * 85, boss2);
                Sleep(1000);
                if (ob_level * 85 >= boss2) {
                    printf("전투에서 승리했다!\n");
                    money += boss2 / 10;
                    Sleep(1000);
                    g1i();
                }
                else {
                    printf("전투에서 패배하였다...\n");
                    Sleep(1000);
                    printf("레벨을 3만큼 잃었다..\n");
                    Sleep(1000);
                    ob_level -= 3;
                    g1i();
                }
            }
            else if (ch_boss == 3) {
                printf("%s은(는) 지렁이와 전투를 시작한다.\n", ob_name);
                Sleep(1000);
                printf("%s의 전투력 %d vs 지렁이의 전투력 %d\n\n", ob_name, ob_level * 85, boss3);
                Sleep(1000);
                if (ob_level * 85 >= boss3) {
                    printf("전투에서 승리했다!\n");
                    money += boss3 / 5;
                    Sleep(1000);
                    return g1i();
                }
                else {
                    printf("전투에서 패배하였다...\n");
                    Sleep(1000);
                    printf("레벨을 5만큼 잃었다..\n");
                    Sleep(1000);
                    ob_level -= 5;
                }
            }
            else if (ch_boss == 4) {
                printf("%s은(는) 교수와 전투를 시작한다.\n", ob_name);
                Sleep(1000);
                printf("%s의 전투력 %d vs 교수의 전투력 %d\n\n", ob_name, ob_level * 85, boss4);
                Sleep(1000);
                if (ob_level * 85 >= boss4) {
                    printf("전투에서 승리했다!\n");
                    money += boss4 / 3;
                    Sleep(1000);
                    return g1i();
                }
                else {
                    printf("전투에서 패배하였다...\n");
                    Sleep(1000);
                    printf("레벨을 10만큼 잃었다..\n");
                    Sleep(1000);
                    ob_level -= 10;
                    return g1i();
                }
            }
            else {
                printf("잘못된 수를 입력하였습니다. 자동으로 돌아갑니다\n");
                Sleep(1000);
                return g1i();
            }
        }

    }
    void g1i3() {
        if (g1ic == 3) {
            printf("\n");
            printf("나의 이름 : %s\n", ob_name);
            printf("나의 나이 : 20\n");
            printf("나의 레벨 : %d\n", ob_level);
            printf("나의 소지금 : %d", money);

            getchar();
            getchar();

            return g1i();
        }
    }
    void g1i() {

        system("cls");

        printf("\n1. 강화하러 가기\n");
        printf("2. 보스 컨텐츠\n");
        printf("3. 내 정보\n");

        scanf_s("%d", &g1ic);
        system("cls");
        if (g1ic == 1) {
            g1i1();
        }
        else if (g1ic == 2) {
            g1i2();
        }
        else if (g1ic == 3) {
            g1i3();
        }
        else {
            printf("\n잘못된 수를 입력하였습니다.\n");
            Sleep(1000);
            system("cls");
        }

    }
    void firstgame() {  // Game 1의 인트로1(title)
        while (1) {

            printf("\n1 : 게임 시작하기\n");
            printf("2 : 게임 설명보기\n");

            scanf_s("%d", &fg1); // game 1의 선택지를 받고 다음 실행할 것을 결정


            while (i <= 1) {
                if (ob_name == (NULL)) {
                    if (fg1 == 1) {
                        char a[100];
                        system("cls");
                        printf("\nPlayer님이 원하는 객체의 이름을 정해주세요.\n");

                        scanf_s("%s", &a, sizeof(a));
                        pass(a);

                        printf("%s(이)가 입력되었습니다.\n", ob_name);
                        Sleep(1000);
                        printf("%s으로 '강화하기 게임'을 시작합니다.", ob_name);

                        system("cls");
                        printf("때는 2021년 말, 평화롭고 재미없는 도시 대전...\n");
                        getchar();
                        getchar();
                        printf("평소와 같은 나날은 보내고 있었다. 내 이름 %s, 20살\n", ob_name);
                        getchar();
                        printf("나는 오늘도 아침부터 수업을 들으러 학교에 나간다.\n");
                        getchar();
                        printf("나는 항상 학교에 갈때 마이너한 웹툰을 즐겨 보곤한다.\n");
                        getchar();
                        system("cls");
                        printf("어디선가 '쾅!'소리가 났고 주위에선 비명소리가 시작됬다.\n");
                        getchar();
                        printf("하늘에는 구멍이 뚫려있고 그 구멍에서는 몬스터가 쏟아져 나왔다.\n");
                        getchar();
                        printf("내가 즐겨보는 웹툰과 똑같은 상황이 일어나고 있었다.\n");
                        getchar();
                        printf("------------------------------------------------------------------\n");
                        getchar();
                        printf("\n\n나만 아는 망작 스토리 먼저 공략해보자!!\n");
                        getchar();
                        system("cls");
                        i++;
                        g1i();
                        system("cls");
                    }
                    else if (fg1 == 2) {

                        system("cls");

                        printf("\n게임은 간단합니다.\n");
                        printf("1. 우선 Player가 원하는 객체의 이름을 정해줍니다.\n");
                        printf("2. \"강화\"를 입력하여 객체의 레벨을 강화시킵니다.\n");
                        printf("3. 레벨업 확률은 일정 확률로 성공하며, 성공, 실패 및 세이브가 존재합니다\n");
                        printf("4. 레벨을 많이 올려 랭킹에 등록하고 다양한 컨텐츠에 참여하세요\n");

                        printf("\n\n");
                        printf("Enter 입력시 게임 1로 돌아갑니다.\n");

                        getchar();
                        getchar();

                        printf("\n");

                        system("cls");
                        return firstgame();

                    }
                    else {
                        printf("\n잘못된 수를 입력하였습니다.\n");
                        Sleep(1000);
                        system("cls");
                        break;
                    }

                }
                else {
                    g1i();
                }

            }
        }
    }




// Game 2
    #define WIDTH   25
    #define HEIGHT  20
    #define BLOCK  20

    char board[HEIGHT][WIDTH];
    int xx, yy;
    int x, y;
    int dx, dy;
    int bar_x, bar_y;

    int score;

    void initialize(int, int);
    void generate(char);

    void enfi_t() {
        board[15][0] = '#';
        board[15][24] = '#';
    }
    void initialize(int start_x, int start_y) {

        for (int i = 0; i < WIDTH; i++) {
            board[0][i] = board[HEIGHT - 1][i] = '#';
        }
        for (int i = 1; i < HEIGHT - 1; i++) {
            for (int j = 1; j < WIDTH - 1; j++) {
                board[i][j] = ' ';
            }
        }
        for (int i = 0; i < HEIGHT; i++) {
            board[i][0] = board[i][WIDTH - 1] = '#';
        }


        x = start_x;
        y = start_y;
        dx = 1;
        dy = 1;
        board[x][y] = '^';
        score = 1;

        for (int i = 0; i < BLOCK; i++) {
            generate('%');
        }
    }
    void display() {
        printf("score = %d\n", score);

        for (int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++) {
                printf("%c", board[i][j]);
            }
            printf("\n");
        }
    }

    bool is_blocked() {
        int x_next = x + dx;
        int y_next = y + dy;
        return board[x_next][y_next] != ' ';
    }

    void turn() {
        if (board[x + dx][y] != ' ') {
            dx = -dx;
        }
        else {
            dy = -dy;
        }
    }
    void move() {
        board[x][y] = ' ';
        x += dx;
        y += dy;
        board[x][y] = '^';
    }
    void collision_block() {
        board[x + dx][y + dy] = ' ';
        score++;
    }
    void generate(char ch) {

        int rx, ry;
        do {
            rx = (rand() % (HEIGHT - 15));
            ry = (rand() % (WIDTH - 2)) + 1;
        } while (board[rx][ry] != ' ');

        board[rx][ry] = ch;
    }

    void bar(int* bar_xx, int* bar_yy) {

        bar_x = *bar_xx;
        bar_y = *bar_yy;
        board[bar_x][bar_y] = '*'; board[bar_x][bar_y + 1] = '*'; board[bar_x][bar_y - 1] = '*';

        int chr;

        if (_kbhit()) {
            chr = _getch();
            if (chr == 0 || chr == 0xe0) {
                chr = _getch();
                if (chr == 75) {
                    if ((board[bar_x][bar_y - 2]) == ' ') {
                        *bar_yy -= 1;
                        board[bar_x][bar_y - 1] = '*';
                        board[bar_x][bar_y + 2] = ' ';
                        board[bar_x][bar_y + 3] = ' ';
                    }
                }
                else if (chr == 77) {
                    if ((board[bar_x][bar_y + 2]) == ' ') {
                        *bar_yy += 1;
                        board[bar_x][bar_y + 1] = '*';
                        board[bar_x][bar_y - 2] = ' ';
                        board[bar_x][bar_y - 3] = ' ';
                    }
                }
            }
        }
        else {
        }
    }
    void bar_turn() {
        if (board[bar_x][bar_y] == ' ' && board[bar_x][bar_y + 1] == ' ' && board[bar_x][bar_y - 1] == ' ') {
            turn();
        }
    }
    void real() {
        while (1) {
            enfi_t();
            while (is_blocked()) {
                char next_char = board[x + dx][y + dy];
                switch (next_char) {
                case '%': collision_block();  turn(); break;
                case '#': turn(); break;
                }
            }
            move();
            system("cls");
            bar(&bar_x, &bar_y);
            bar_turn();
            display();
            Sleep(50);
        }
    }
    void secondgame() {
            srand((unsigned int)time(NULL));
            bar_x = 15; bar_y = 13;
            initialize(18, 18);
            real();
    } //아직 미구현 개발 예장



    int main(void) {
        intro();

        while (1) {
            if (GC == 1) {
                firstgame();
            }
            else if (GC == 2) {
                secondgame();
            }
            else if (GC == 3) {
                printf("아직 업데이트 되지 않았습니다.\n\n\n다음 업데이트를 기다려주세요...\n");
                Sleep(5000);
                system("cls");
                printf("아무키나 입력시 종료됩니다.\n");
                system("pause");
                break;
            }
        }

        return 0;
    }