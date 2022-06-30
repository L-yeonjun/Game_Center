#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    int num1, num2, num3;
    int pay, money, k, n=0;
    srand(time(0));
    
    printf("★★★=== slot machine ===★★★\n");
    printf("한판당 1000원입니다.\n숫자 3개가 모두 같은 숫자면 상금 10000원 획득!!!\n숫자 3개가 모두 다른 숫자면 1000원 차감!!!\n\n");
    printf("초기자금을 입력하면 바로 게임 시작 됩니다.\n" );
    printf("초기자금 입력 => %d", &money );

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
                            printf("상금 획득!!!\n");
                            printf("남은 금액 => %d\n", pay = pay + 5000);
                        }else if(num1 != num2 || num2 != num3 || num1 != num3){
                            printf("아쉽군요\n");
                            printf("남은 금액 => %d\n", pay);
                        }
                    
                        if(pay == 0){
                            printf("게임이 종료되었습니다.\n");
                            break;
                        }
                        else{
                            n++;
                        }
                    } // for end
                        if(n != 0){
                            printf("한판더? <1>Yes  <2>No");
                            scanf("%d", &k);
                            
                            if(k == 1){
                                n = 0;
                            }
                            else if(k == 2){
                                break;
                            }
                            else if(k > 2){
                                printf("다시 입력하세요\n");
                            }
                        }
                }
}