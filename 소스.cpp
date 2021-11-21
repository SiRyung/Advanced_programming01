#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>


int GC;                  // Intro에서 Game 1, 2 ,3을 선택하는 변수
int c;                   // 나중에 getchar를 반환하며 초기화할려고 임의로 만든 것
int g1ic;
int fg1;
int ob_level = 1;

char ob_enchant[100];
char* ob_name;

void intro();            // 게임을 처음 시작하는 tile
void pass();        // 1번째 게임 강화하기로 넘어가는 void
void g1i();



void intro() {
    while (1) {

        printf("1번 게임 : 강화하기 게임\n");
        printf("2번 게임 : 업데이트 예정\n");
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

void g1i() {

    system("cls");

    printf("1. 강화하러 가기\n");
    printf("2. 보스 컨텐츠\n");
    printf("3. 내 정보\n");
    printf("4. 게임 종료(돌아가기)\n\n\n");

    scanf_s("%d", &g1ic);

    if (g1ic == 1) {

        system("cls");

        while (1) {

            printf("\"강화\"를 계속 입력하여 자신을 강화시키세요!\n");
            scanf_s("%s", &ob_enchant, sizeof(ob_enchant));

            if ((strcmp(ob_enchant, "강화")) == 0) {

                srand((unsigned)time(NULL));

                int levelup = rand() % ((20 - 1) + 1) + 1;
                int levelup_10 = rand() % ((100 - 95) + 1) + 95;
                int levelup_20 = rand() % ((95 - 85) + 1) + 85;
                int levelup_30 = rand() % ((85 - 75) + 1) + 75;
                int levelup_40 = rand() % ((70 - 65) + 1) + 65;

                if (ob_level <= 10) {
                    printf("\n%d의 확률로 강화에 시도하였습니다.\n", levelup_10);
                    if (levelup_10 >= 95) {
                        ob_level += levelup;
                        printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                    }

                    else if (ob_level > 10 && ob_level <= 20) {
                        printf("\n%d의 확률로 강화에 시도하였습니다.\n", levelup_20);
                        if (levelup_20 >= 85) {
                            ob_level += levelup;
                            printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                        }
                    }

                    else if (ob_level > 20 && ob_level <= 30) {
                        printf("\n%d의 확률로 강화에 시도하였습니다.\n", levelup_30);
                            if (levelup_30 >= 75) {
                            ob_level += levelup;
                            printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                        }
                    }

                    else if (ob_level > 30 && ob_level <= 40) {
                        printf("\n%d의 확률로 강화에 시도하였습니다.\n", levelup_40);
                        if (levelup_40 >= 65) {
                            ob_level += levelup;
                            printf("\n%s는 %d 레벨이 되었다!!\n\n", ob_name, ob_level);
                    }

                }
                }
            }
        }
    }

}

void firstgame() {  // Game 1의 인트로(title)
    while (1) {

        printf("1 : 게임 시작하기\n");
        printf("2 : 게임 설명보기\n");
        printf("3 : 돌아가기\n");

        scanf_s("%d", &fg1); // game 1의 선택지를 받고 다음 실행할 것을 결정


        while (1) {

            if (fg1 == 1) {
                char a[100];
                system("cls");
                printf("Player님이 원하는 객체의 이름을 정해주세요.\n");

                scanf_s("%s", &a, sizeof(a));
                pass(a);

                printf("%s(이)가 입력되었습니다.\n", ob_name);
                Sleep(500);
                printf("%s으로 '강화하기 게임'을 시작합니다.", ob_name);

                system("cls");
                printf("때는 2021년 말, 평화롭고 재미없는 도시 대전...\n");
                getchar();
                getchar();
                printf("평소와 같은 날이었다. 내 이름 %s, 20살\n", ob_name);
                getchar();
                printf("평범하게 오늘도 아침부터 수업을 들으러 학교에 나간다.\n");
                getchar();
                printf("나(%s)는 항상 학교에 등교하면서 마이너한 웹툰을 보면서 등교한다.\n", ob_name);
                getchar();
                system("cls");
                printf("쾅!! 어디선가 '쾅!'소리와 함게 비명소리가 시작됬다.\n");
                getchar();
                printf("하늘에는 구멍이 뚫리고 그 구멍에서는 몬스터가 쏟아져 나온다.\n");
                getchar();
                printf("똑같이 일치하였던 것이다.\n");
                getchar();
                printf("------------------------------------------------------------------\n");
                getchar();
                printf("\n\n나만 알고 있는 망작 스토리!! 내가 공략하겠다!!!!\n");
                getchar();
                system("cls");

                g1i();




                Sleep(2000);
                system("cls");





            }// G1의 1번을 선택했을 경우 실행
            else if (fg1 == 2) {

                printf("게임은 간단합니다.\n");
                printf("1. 우선 Player가 원하는 객체의 이름을 정해줍니다.\n");
                printf("2. 강화하기 <이름>을 통하여 객체의 레벨을 강화시킵니다.\n");
                printf("3. 레벨업 확률은 일정 확률로 성공하며, 성공, 실패 및 세이브가 존재합니다\n");
                printf("4. 레벨을 많이 올려 랭킹에 등록하고 다양한 컨텐츠에 참여하세요\n");

                printf("\n\n");
                printf("Enter 입력시 게임 1로 돌아갑니다.\n");

                c = (char)getchar();

                printf("\n");

                system("cls");
                return firstgame();

            }// G1의 2번을 선택했을 경우 실행
            else if (fg1 == 3) {
                system("cls");
                return intro();
            }// G1의 3을 선택했을 경우 실행

        }
    }
}

void thirdgame() {
}; //아직 미구현 개발 예장

int main(void) {

    intro();

    if (GC == 1) {
        firstgame();
    }




    return 0;
}  // 메인 함수 GAME 1, 2, 3불러올 예정
