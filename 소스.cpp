#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


// Game 1
    int i = 0;
    int GC;                  // Intro���� Game 1, 2 ,3�� �����ϴ� ����
    int c;                   // ���߿� getchar�� ��ȯ�ϸ� �ʱ�ȭ�ҷ��� ���Ƿ� ���� ��
    int g1ic;
    int fg1;
    int ob_level = 1;
    int ch_boss; int boss1 = 2000, boss2 = 3000, boss3 = 6000, boss4 = 8400;
    int money = 1000;
    char g1enExit[50];

    char ob_enchant[100];
    char* ob_name;

    void intro();            // ������ ó�� �����ϴ� tile
    void pass();        // 1��° ���� ��ȭ�ϱ�� �Ѿ�� void
    void g1i();

    void intro() {
        while (1) {

            printf("\n1�� ���� : ��ȭ�ϱ� ����\n");
            printf("2�� ���� : �������� ���� (�̿ϼ� �� ������Ʈ �����Դϴ�.)\n");
            printf("3�� ���� : ������Ʈ ����\n\n");


            printf("##��� ������ Press Key �������� �̷�����ϴ�.\n\n");


            printf("������ �����ϼ���.(1 ~ 3) \n");
            scanf_s("%d", &GC);

            if (GC <= 3 && GC >= 1) {
                printf("%d�� ������ �����մϴ�.", GC);
                Sleep(300);
                system("cls");
                break;
            }
            else {
                printf("1~3������ �����߿��� �������ּ���..\n");
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
            printf("\n�ƹ� Ű�� �Է½� ��ȭ�� �׸��մϴ�.\n\n\n");
            scanf_s("%s", &g1enExit, sizeof(g1enExit));
            system("cls");
            if ((strcmp(g1enExit, " ") == 0)) {
                return g1i();
            }

            while (1) {

                Sleep(1500);
                system("cls");

                printf("\"��ȭ\"�� ��� �Է��Ͽ� �ڽ��� ��ȭ��Ű����!\n\n\n");
                scanf_s("%s", &ob_enchant, sizeof(ob_enchant));

                if ((strcmp(ob_enchant, "��ȭ")) == 0) {

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
                        printf("\n%d%%�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_10);
                        if (holdup < levelup_10) {
                            ob_level += levelup;
                            printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n��ȭ�� �����Ͽ����ϴ�.(���� ���� : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 10 && ob_level <= 20) {
                        printf("\n%d%%�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_20);
                        if (holdup < levelup_20) {
                            ob_level += levelup;
                            printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n��ȭ�� �����Ͽ����ϴ�.(���� ���� : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 20 && ob_level <= 30) {
                        printf("\n%d%%�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_30);
                        if (holdup < levelup_30) {
                            ob_level += levelup;
                            printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n��ȭ�� �����Ͽ����ϴ�.(���� ���� : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 30 && ob_level <= 40) {
                        printf("\n%d%%�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_40);
                        if (holdup < levelup_40) {
                            ob_level += levelup;
                            printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n��ȭ�� �����Ͽ����ϴ�.(���� ���� : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 40 && ob_level <= 50) {
                        printf("\n%d%%�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_50);
                        if (holdup < levelup_50) {
                            ob_level += levelup;
                            printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n��ȭ�� �����Ͽ����ϴ�.(���� ���� : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 50 && ob_level <= 60) {
                        printf("\n%d%%�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_60);
                        if (holdup < levelup_60) {
                            ob_level += levelup;
                            printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n��ȭ�� �����Ͽ����ϴ�.(���� ���� : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 60 && ob_level <= 70) {
                        printf("\n%d%%�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_70);
                        if (holdup < levelup_70) {
                            ob_level += levelup;
                            printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n��ȭ�� �����Ͽ����ϴ�.(���� ���� : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 70 && ob_level <= 80) {
                        printf("\n%d%%�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_80);
                        if (holdup < levelup_80) {
                            ob_level += levelup;
                            printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n��ȭ�� �����Ͽ����ϴ�.(���� ���� : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 80 && ob_level <= 90) {
                        printf("\n%d%%�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_90);
                        if (holdup < levelup_90) {
                            ob_level += levelup;
                            printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n��ȭ�� �����Ͽ����ϴ�.(���� ���� : %d)\n\n", ob_level);
                        }
                    }

                    else if (ob_level > 90 && ob_level <= 100) {
                        printf("\n%d%%�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_100);
                        if (holdup < levelup_100) {
                            ob_level += levelup;
                            printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                        }
                        else {
                            ob_level -= leveldown;
                            printf("\n��ȭ�� �����Ͽ����ϴ�.(���� ���� : %d)\n\n", ob_level);
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
            printf("\n����� ���ϴ� �ܰ��� ������ �����Ͽ��ּ���.\n");
            printf("1 : 1�ܰ� ���� : ������\n");
            printf("2 : 2�ܰ� ���� : ������\n");
            printf("3 : 3�ܰ� ���� : ������\n");
            printf("4 : ���� ���� : ����\n");
            scanf_s("%d", &ch_boss);

            system("cls");

            if (ch_boss == 1) {
                printf("%s��(��) �����̿� ������ �����Ѵ�.\n", ob_name);
                Sleep(1000);
                printf("%s�� ������ %d vs �������� ������ %d\n\n", ob_name, ob_level * 85, boss1);
                Sleep(1000);
                if (ob_level * 85 >= boss1) {
                    printf("�������� �¸��ߴ�!\n");
                    money += boss1 / 15;
                    Sleep(1000);
                    g1i();
                }
                else {
                    printf("�������� �й��Ͽ���...\n");
                    Sleep(1000);
                    printf("������ 1��ŭ �Ҿ���..\n");
                    Sleep(1000);
                    ob_level -= 1;
                    g1i();
                }
            }
            else if (ch_boss == 2) {
                printf("%s��(��) �����Ϳ� ������ �����Ѵ�.\n", ob_name);
                Sleep(1000);
                printf("%s�� ������ %d vs �������� ������ %d\n\n", ob_name, ob_level * 85, boss2);
                Sleep(1000);
                if (ob_level * 85 >= boss2) {
                    printf("�������� �¸��ߴ�!\n");
                    money += boss2 / 10;
                    Sleep(1000);
                    g1i();
                }
                else {
                    printf("�������� �й��Ͽ���...\n");
                    Sleep(1000);
                    printf("������ 3��ŭ �Ҿ���..\n");
                    Sleep(1000);
                    ob_level -= 3;
                    g1i();
                }
            }
            else if (ch_boss == 3) {
                printf("%s��(��) �����̿� ������ �����Ѵ�.\n", ob_name);
                Sleep(1000);
                printf("%s�� ������ %d vs �������� ������ %d\n\n", ob_name, ob_level * 85, boss3);
                Sleep(1000);
                if (ob_level * 85 >= boss3) {
                    printf("�������� �¸��ߴ�!\n");
                    money += boss3 / 5;
                    Sleep(1000);
                    return g1i();
                }
                else {
                    printf("�������� �й��Ͽ���...\n");
                    Sleep(1000);
                    printf("������ 5��ŭ �Ҿ���..\n");
                    Sleep(1000);
                    ob_level -= 5;
                }
            }
            else if (ch_boss == 4) {
                printf("%s��(��) ������ ������ �����Ѵ�.\n", ob_name);
                Sleep(1000);
                printf("%s�� ������ %d vs ������ ������ %d\n\n", ob_name, ob_level * 85, boss4);
                Sleep(1000);
                if (ob_level * 85 >= boss4) {
                    printf("�������� �¸��ߴ�!\n");
                    money += boss4 / 3;
                    Sleep(1000);
                    return g1i();
                }
                else {
                    printf("�������� �й��Ͽ���...\n");
                    Sleep(1000);
                    printf("������ 10��ŭ �Ҿ���..\n");
                    Sleep(1000);
                    ob_level -= 10;
                    return g1i();
                }
            }
            else {
                printf("�߸��� ���� �Է��Ͽ����ϴ�. �ڵ����� ���ư��ϴ�\n");
                Sleep(1000);
                return g1i();
            }
        }

    }
    void g1i3() {
        if (g1ic == 3) {
            printf("\n");
            printf("���� �̸� : %s\n", ob_name);
            printf("���� ���� : 20\n");
            printf("���� ���� : %d\n", ob_level);
            printf("���� ������ : %d", money);

            getchar();
            getchar();

            return g1i();
        }
    }
    void g1i() {

        system("cls");

        printf("\n1. ��ȭ�Ϸ� ����\n");
        printf("2. ���� ������\n");
        printf("3. �� ����\n");

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
            printf("\n�߸��� ���� �Է��Ͽ����ϴ�.\n");
            Sleep(1000);
            system("cls");
        }

    }
    void firstgame() {  // Game 1�� ��Ʈ��1(title)
        while (1) {

            printf("\n1 : ���� �����ϱ�\n");
            printf("2 : ���� ������\n");

            scanf_s("%d", &fg1); // game 1�� �������� �ް� ���� ������ ���� ����


            while (i <= 1) {
                if (ob_name == (NULL)) {
                    if (fg1 == 1) {
                        char a[100];
                        system("cls");
                        printf("\nPlayer���� ���ϴ� ��ü�� �̸��� �����ּ���.\n");

                        scanf_s("%s", &a, sizeof(a));
                        pass(a);

                        printf("%s(��)�� �ԷµǾ����ϴ�.\n", ob_name);
                        Sleep(1000);
                        printf("%s���� '��ȭ�ϱ� ����'�� �����մϴ�.", ob_name);

                        system("cls");
                        printf("���� 2021�� ��, ��ȭ�Ӱ� ��̾��� ���� ����...\n");
                        getchar();
                        getchar();
                        printf("��ҿ� ���� ������ ������ �־���. �� �̸� %s, 20��\n", ob_name);
                        getchar();
                        printf("���� ���õ� ��ħ���� ������ ������ �б��� ������.\n");
                        getchar();
                        printf("���� �׻� �б��� ���� ���̳��� ������ ��� �����Ѵ�.\n");
                        getchar();
                        system("cls");
                        printf("��𼱰� '��!'�Ҹ��� ���� �������� ���Ҹ��� ���ۉ��.\n");
                        getchar();
                        printf("�ϴÿ��� ������ �շ��ְ� �� ���ۿ����� ���Ͱ� ����� ���Դ�.\n");
                        getchar();
                        printf("���� ��ܺ��� ������ �Ȱ��� ��Ȳ�� �Ͼ�� �־���.\n");
                        getchar();
                        printf("------------------------------------------------------------------\n");
                        getchar();
                        printf("\n\n���� �ƴ� ���� ���丮 ���� �����غ���!!\n");
                        getchar();
                        system("cls");
                        i++;
                        g1i();
                        system("cls");
                    }
                    else if (fg1 == 2) {

                        system("cls");

                        printf("\n������ �����մϴ�.\n");
                        printf("1. �켱 Player�� ���ϴ� ��ü�� �̸��� �����ݴϴ�.\n");
                        printf("2. \"��ȭ\"�� �Է��Ͽ� ��ü�� ������ ��ȭ��ŵ�ϴ�.\n");
                        printf("3. ������ Ȯ���� ���� Ȯ���� �����ϸ�, ����, ���� �� ���̺갡 �����մϴ�\n");
                        printf("4. ������ ���� �÷� ��ŷ�� ����ϰ� �پ��� �������� �����ϼ���\n");

                        printf("\n\n");
                        printf("Enter �Է½� ���� 1�� ���ư��ϴ�.\n");

                        getchar();
                        getchar();

                        printf("\n");

                        system("cls");
                        return firstgame();

                    }
                    else {
                        printf("\n�߸��� ���� �Է��Ͽ����ϴ�.\n");
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
    } //���� �̱��� ���� ����



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
                printf("���� ������Ʈ ���� �ʾҽ��ϴ�.\n\n\n���� ������Ʈ�� ��ٷ��ּ���...\n");
                Sleep(5000);
                system("cls");
                printf("�ƹ�Ű�� �Է½� ����˴ϴ�.\n");
                system("pause");
                break;
            }
        }

        return 0;
    }