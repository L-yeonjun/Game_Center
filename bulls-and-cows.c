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

    printf("★★★=== bulls and cows ===★★★\n\n");
    printf("같은자리 같은숫자면 strike\n다른자리 같은숫자면 ball\n 3 strike면 우승!!!\n\n");
    
    while(choose > 2){
        printf("난이도 선택\n");
        printf("<1> Hard 기회 5번   <2> Easy 기회 10번 : ");
        scanf("%d", &choose);
        
    switch(choose){
        case 1:{
            while(1){
                count++;
            
                printf("%d 번째\n", count);
                printf("유저값 입력 (1 ~ 9 사이의 중복되지 않는 숫자입력): ");
                scanf("%d %d %d", &user[0], &user[1], &user[2]);

                if(user[0] < 1 || user[1] < 1 || user[2] < 1 || user[0] > 9 || user[1] > 9 || user[2] > 9){
                    printf("잘못입력했습니다.(1 ~ 9 사이만 입력하세요)\n\n");
                    count--;
                    continue;
                }
                
                else if(user[0] == user[1] || user[0] == user[2] || user[1] == user[2]){
                    printf("같은값은 안됩니다.(중복되지 않게 입력하세요)\n\n");
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
                    printf("한개도 일치하지 않습니다.\n\n");
                    out = 0;
                }
                if(count == 5){
                    printf("\n정답은 => %d %d %d\n\n", com[0], com[1], com[2]);
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
            
                printf("%d 번째\n", count);
                printf("유저값 입력 (1 ~ 9 사이의 중복되지 않는 숫자입력): ");
                scanf("%d %d %d", &user[0], &user[1], &user[2]);

                if(user[0] < 1 || user[1] < 1 || user[2] < 1 || user[0] > 9 || user[1] > 9 || user[2] > 9){
                    printf("잘못입력했습니다.(1 ~ 9 사이만 입력하세요)\n\n");
                    count--;
                    continue;
                }
                else if(user[0] == user[1] || user[0] == user[2] || user[1] == user[2]){
                    printf("같은값은 안됩니다.(중복되지 않게 입력하세요)\n\n");
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
                    printf("한개도 일치하지 않습니다.\n\n");
                    out = 0;
                }
                if(count == 10){
                    printf("\n정답은 => %d %d %d\n\n", com[0], com[1], com[2]);
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
            printf("둘 중 하나만 골라주세요.\n\n");
            break;
        }
    }
}