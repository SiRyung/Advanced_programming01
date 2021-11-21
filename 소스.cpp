#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>


int GC;                  // Intro���� Game 1, 2 ,3�� �����ϴ� ����
int c;                   // ���߿� getchar�� ��ȯ�ϸ� �ʱ�ȭ�ҷ��� ���Ƿ� ���� ��
int g1ic;
int fg1;
int ob_level = 1;

char ob_enchant[100];
char* ob_name;

void intro();            // ������ ó�� �����ϴ� tile
void pass();        // 1��° ���� ��ȭ�ϱ�� �Ѿ�� void
void g1i();



void intro() {
    while (1) {

        printf("1�� ���� : ��ȭ�ϱ� ����\n");
        printf("2�� ���� : ������Ʈ ����\n");
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

void g1i() {

    system("cls");

    printf("1. ��ȭ�Ϸ� ����\n");
    printf("2. ���� ������\n");
    printf("3. �� ����\n");
    printf("4. ���� ����(���ư���)\n\n\n");

    scanf_s("%d", &g1ic);

    if (g1ic == 1) {

        system("cls");

        while (1) {

            printf("\"��ȭ\"�� ��� �Է��Ͽ� �ڽ��� ��ȭ��Ű����!\n");
            scanf_s("%s", &ob_enchant, sizeof(ob_enchant));

            if ((strcmp(ob_enchant, "��ȭ")) == 0) {

                srand((unsigned)time(NULL));

                int levelup = rand() % ((20 - 1) + 1) + 1;
                int levelup_10 = rand() % ((100 - 95) + 1) + 95;
                int levelup_20 = rand() % ((95 - 85) + 1) + 85;
                int levelup_30 = rand() % ((85 - 75) + 1) + 75;
                int levelup_40 = rand() % ((70 - 65) + 1) + 65;

                if (ob_level <= 10) {
                    printf("\n%d�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_10);
                    if (levelup_10 >= 95) {
                        ob_level += levelup;
                        printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                    }

                    else if (ob_level > 10 && ob_level <= 20) {
                        printf("\n%d�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_20);
                        if (levelup_20 >= 85) {
                            ob_level += levelup;
                            printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                        }
                    }

                    else if (ob_level > 20 && ob_level <= 30) {
                        printf("\n%d�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_30);
                            if (levelup_30 >= 75) {
                            ob_level += levelup;
                            printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                        }
                    }

                    else if (ob_level > 30 && ob_level <= 40) {
                        printf("\n%d�� Ȯ���� ��ȭ�� �õ��Ͽ����ϴ�.\n", levelup_40);
                        if (levelup_40 >= 65) {
                            ob_level += levelup;
                            printf("\n%s�� %d ������ �Ǿ���!!\n\n", ob_name, ob_level);
                    }

                }
                }
            }
        }
    }

}

void firstgame() {  // Game 1�� ��Ʈ��(title)
    while (1) {

        printf("1 : ���� �����ϱ�\n");
        printf("2 : ���� ������\n");
        printf("3 : ���ư���\n");

        scanf_s("%d", &fg1); // game 1�� �������� �ް� ���� ������ ���� ����


        while (1) {

            if (fg1 == 1) {
                char a[100];
                system("cls");
                printf("Player���� ���ϴ� ��ü�� �̸��� �����ּ���.\n");

                scanf_s("%s", &a, sizeof(a));
                pass(a);

                printf("%s(��)�� �ԷµǾ����ϴ�.\n", ob_name);
                Sleep(500);
                printf("%s���� '��ȭ�ϱ� ����'�� �����մϴ�.", ob_name);

                system("cls");
                printf("���� 2021�� ��, ��ȭ�Ӱ� ��̾��� ���� ����...\n");
                getchar();
                getchar();
                printf("��ҿ� ���� ���̾���. �� �̸� %s, 20��\n", ob_name);
                getchar();
                printf("����ϰ� ���õ� ��ħ���� ������ ������ �б��� ������.\n");
                getchar();
                printf("��(%s)�� �׻� �б��� ��ϸ鼭 ���̳��� ������ ���鼭 ��Ѵ�.\n", ob_name);
                getchar();
                system("cls");
                printf("��!! ��𼱰� '��!'�Ҹ��� �԰� ���Ҹ��� ���ۉ��.\n");
                getchar();
                printf("�ϴÿ��� ������ �ո��� �� ���ۿ����� ���Ͱ� ����� ���´�.\n");
                getchar();
                printf("�Ȱ��� ��ġ�Ͽ��� ���̴�.\n");
                getchar();
                printf("------------------------------------------------------------------\n");
                getchar();
                printf("\n\n���� �˰� �ִ� ���� ���丮!! ���� �����ϰڴ�!!!!\n");
                getchar();
                system("cls");

                g1i();




                Sleep(2000);
                system("cls");





            }// G1�� 1���� �������� ��� ����
            else if (fg1 == 2) {

                printf("������ �����մϴ�.\n");
                printf("1. �켱 Player�� ���ϴ� ��ü�� �̸��� �����ݴϴ�.\n");
                printf("2. ��ȭ�ϱ� <�̸�>�� ���Ͽ� ��ü�� ������ ��ȭ��ŵ�ϴ�.\n");
                printf("3. ������ Ȯ���� ���� Ȯ���� �����ϸ�, ����, ���� �� ���̺갡 �����մϴ�\n");
                printf("4. ������ ���� �÷� ��ŷ�� ����ϰ� �پ��� �������� �����ϼ���\n");

                printf("\n\n");
                printf("Enter �Է½� ���� 1�� ���ư��ϴ�.\n");

                c = (char)getchar();

                printf("\n");

                system("cls");
                return firstgame();

            }// G1�� 2���� �������� ��� ����
            else if (fg1 == 3) {
                system("cls");
                return intro();
            }// G1�� 3�� �������� ��� ����

        }
    }
}

void thirdgame() {
}; //���� �̱��� ���� ����

int main(void) {

    intro();

    if (GC == 1) {
        firstgame();
    }




    return 0;
}  // ���� �Լ� GAME 1, 2, 3�ҷ��� ����
