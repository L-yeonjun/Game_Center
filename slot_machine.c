#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    int num1, num2, num3;
    int pay, money, k, n=0;
    srand(time(0));
    
    printf("�ڡڡ�=== slot machine ===�ڡڡ�\n");
    printf("���Ǵ� 1000���Դϴ�.\n���� 3���� ��� ���� ���ڸ� ��� 10000�� ȹ��!!!\n���� 3���� ��� �ٸ� ���ڸ� 1000�� ����!!!\n\n");
    printf("�ʱ��ڱ��� �Է��ϸ� �ٷ� ���� ���� �˴ϴ�.\n" );
    printf("�ʱ��ڱ� �Է� => %d", &money );

    pay = money-1000;

    while(1){

                    for (pay; pay >= 0 && n == 0; pay = pay-1000){
                        num1 = (rand() % 4) + 1;
                        num2 = (rand() % 4) + 1;
                        num3 = (rand() % 4) + 1;

                        printf("======================\n");
                        printf("|      |      |      |\n");
                        printf("|  %d   |  %d   |  %d   |\n", num1, num2, num3);
                        printf("|      |      |      |\n");
                        printf("======================\n");

                        
                        if(num1 == num2 && num2 == num3){
                            printf("��� ȹ��!!!\n");
                            printf("���� �ݾ� => %d\n", pay = pay + 5000);
                        }else if(num1 != num2 || num2 != num3 || num1 != num3){
                            printf("�ƽ�����\n");
                            printf("���� �ݾ� => %d\n", pay);
                        }
                    
                        if(pay == 0){
                            printf("������ ����Ǿ����ϴ�.\n");
                            break;
                        }
                        else{
                            n++;
                        }
                    } // for end
                        if(n != 0){
                            printf("���Ǵ�? <1>Yes  <2>No");
                            scanf("%d", &k);
                            
                            if(k == 1){
                                n = 0;
                            }
                            else if(k == 2){
                                break;
                            }
                            else if(k > 2){
                                printf("�ٽ� �Է��ϼ���\n");
                            }
                        }
                }
}