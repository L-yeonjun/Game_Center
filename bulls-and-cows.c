#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    srand((unsigned int)time(0));
    int com[3], user[3], i, j;
    int count = 0;
    int strike = 0, ball = 0, out = 0;
    int choose;

    for(i = 0; i < 3; i++){
        com[i] = rand() % 9 + 1;
        for(j = 0; j < i; j++){
            if(com[i] == com[j]){
                i--;
                break;
            }
        }
    }

    printf("�ڡڡ�=== bulls and cows ===�ڡڡ�\n\n");
    printf("�����ڸ� �������ڸ� strike\n�ٸ��ڸ� �������ڸ� ball\n 3 strike�� ���!!!\n\n");
    
    while(choose > 2){
        printf("���̵� ����\n");
        printf("<1> Hard ��ȸ 5��   <2> Easy ��ȸ 10�� : ");
        scanf("%d", &choose);
        
    switch(choose){
        case 1:{
            while(1){
                count++;
            
                printf("%d ��°\n", count);
                printf("������ �Է� (1 ~ 9 ������ �ߺ����� �ʴ� �����Է�): ");
                scanf("%d %d %d", &user[0], &user[1], &user[2]);

                if(user[0] < 1 || user[1] < 1 || user[2] < 1 || user[0] > 9 || user[1] > 9 || user[2] > 9){
                    printf("�߸��Է��߽��ϴ�.(1 ~ 9 ���̸� �Է��ϼ���)\n\n");
                    count--;
                    continue;
                }
                
                else if(user[0] == user[1] || user[0] == user[2] || user[1] == user[2]){
                    printf("�������� �ȵ˴ϴ�.(�ߺ����� �ʰ� �Է��ϼ���)\n\n");
                    count--;
                    continue;
                }
                
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        if(com[i] == user[j] && i == j){
                            strike++;
                        }
                        if (com[i] == user[j] && i != j){
                            ball++;
                        }
                        if(com[i] != user[j]){
                            out++;
                        }
                    }
                }
                
                if(strike == 3){
                    printf("You Win !!!\n");
                    break;
                }
                if(out >= 9){
                    printf("�Ѱ��� ��ġ���� �ʽ��ϴ�.\n\n");
                    out = 0;
                }
                if(count == 5){
                    printf("\n������ => %d %d %d\n\n", com[0], com[1], com[2]);
                    printf("game over\nto be continue...\n");
                    break;
                }
                else{
                    printf("%d strike  %d ball \n\n", strike, ball);
                    out = 0;
                }
                strike = 0;
                ball = 0;
            }
        }
            break;

        case 2:{
            while(1){
                count++;
            
                printf("%d ��°\n", count);
                printf("������ �Է� (1 ~ 9 ������ �ߺ����� �ʴ� �����Է�): ");
                scanf("%d %d %d", &user[0], &user[1], &user[2]);

                if(user[0] < 1 || user[1] < 1 || user[2] < 1 || user[0] > 9 || user[1] > 9 || user[2] > 9){
                    printf("�߸��Է��߽��ϴ�.(1 ~ 9 ���̸� �Է��ϼ���)\n\n");
                    count--;
                    continue;
                }
                else if(user[0] == user[1] || user[0] == user[2] || user[1] == user[2]){
                    printf("�������� �ȵ˴ϴ�.(�ߺ����� �ʰ� �Է��ϼ���)\n\n");
                    count--;
                    continue;
                }
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        if(com[i] == user[j] && i == j){
                            strike++;
                        }
                        if (com[i] == user[j] && i != j){
                            ball++;
                        }
                        if(com[i] != user[j]){
                            out++;
                        }
                    }
                }
                
                if(strike == 3){
                    printf("You Win !!!\n");
                    break;
                }
                if(out >= 9){
                    printf("�Ѱ��� ��ġ���� �ʽ��ϴ�.\n\n");
                    out = 0;
                }
                if(count == 10){
                    printf("\n������ => %d %d %d\n\n", com[0], com[1], com[2]);
                    printf("game over\nto be continue...\n");
                    break;
                }
                else{
                    printf("%d strike  %d ball \n\n", strike, ball);
                    out = 0;
                }
                strike = 0;
                ball = 0;
            }
        }
            break;

        default :
            printf("�� �� �ϳ��� ����ּ���.\n\n");
            break;
        }
    }
}