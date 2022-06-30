#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    srand((unsigned int)time(0));
    int game;
    //-----slot machine-----
    int num1, num2, num3;
    int pay, money, k, n = 0;
    //-----up&down-----
    int num;
    int input, choose;
    int count = 1;
    // -----bulls and cows -----
    int com[3], user[3], i, j;
    int cnt = 0;
    int strike = 0, ball = 0, out = 0;
    int base;

    while(game < 1 || game > 3){

        printf("★ ☆ ★ ☆ Play zone ☆ ★ ☆ ★\n\n");
        printf("세개의 게임중 하나를 고르세요\n");
        printf("<1>번 게임 => slot machine\n<2>번 게임 => up & down\n<3>번 게임 => bulls and cows\n");
        scanf("%d", &game);

        switch (game){
        
            case 1 :{
// ==========★★★=== slot machine ===★★★==========
                printf("★ ★ ★=== slot machine ===★ ★ ★\n\n");
                printf("숫자 3개가 모두 같은 숫자면 상금 5000원 획득!!!\n실패시 -1000원\n\n");
                printf("초기자금을 입력하면 바로 게임 시작 됩니다.\n" );
                printf("초기자금 입력 => " );
                scanf("%d", &pay);
                
                while(1){

                    if(n == 0){
                            
                        num1 = (rand() % 2) + 1;
                        num2 = (rand() % 2) + 1;
                        num3 = (rand() % 2) + 1;
                        
                        printf("======================\n");
                        printf("|      |      |      |\n");
                        printf("|  %d   |  %d   |  %d   |\n", num1, num2, num3);
                        printf("|      |      |      |\n");
                        printf("======================\n");
                        
                        if(num1 == num2 && num2 == num3){
                            printf("상금 획득!!!\n");
                            printf("남은 금액 => %d원\n", pay = pay + 5000);
                        }else if(num1 != num2 || num2 != num3 || num1 != num3){
                            printf("아쉽군요\n");
                            printf("남은 금액 => %d원\n\n", pay = pay - 1000);
                            if(pay < 1000){
                                printf("금액이 부족합니다.\n");
                                break;
                            }
                        }
                    
                        if(pay <= 0 ){
                            printf("게임이 종료되었습니다.\n");
                            break;
                        }
                        else{
                            n++;
                        }
                        } // if (n == 0) end
                        if(n != 0){
                            printf("한판더? <1>Yes  <2>No");
                            scanf("%d", &k);
                            
                            if(k == 1){
                                n = 0;
                            }
                            else if(k == 2){
                                printf("bye~ bye~\n");
                                break;
                            }
                            else if(k < 1 || k > 2){
                                printf("다시 입력하세요\n");
                            }
                    } // if (n != 0) end
                } // case 1 while end
            } // slot machine case 1 end
                break;

            case 2 :{
// ==========★★★=== up & down ===★★★==========
                printf("★ ★ ★=== up & down ===★ ★ ★\n\n");

                while(1){
                    printf("난이도를 선택 하세요.\n\n");
                    printf("<1>Hard (1~1000, 기회 = 10번)\n<2>Normal(1~500, 기회 = 10번)\n<3>Easy  (1~100, 기회 = 10번)\n");
                    scanf("%d", &choose);
                    
                    switch (choose){

                        case 1 :{
            // ========== 난이도 Hard ==========
                            num = (rand() % 1000) + 1;
                            
                            for(i = 1; i <= count + 1; i++){
                                printf("1~1000 사이 숫자를 입력해주세요\n%d번째 입력 => ", count);
                                scanf("%d", &input);
                                
                                if(input == num){
                                    printf("★ ☆ ★ ☆ game clear ☆ ★ ☆ ★\n");
                                    break;
                                }
                                else if(count == 10){
                                    printf("정답은 %d 입니다.\n", num);
                                    printf("game over\nto be continue...\n\n");
                                    break;
                                }
                                else if(input < 1 || input > 1000){
                                    printf("이렇게 한번의 기회를 날리다니... \n\n");
                                    count++;
                                }
                                else if(input > num){
                                    printf("down\n\n");
                                    count++;
                                }
                                else {
                                    printf("up\n\n");
                                    count++;
                                }
                            } // for end
                        } // up & down case 1 end
                            break;

                        case 2 :{
            // ========== 난이도 Normal ==========
                            num = (rand() % 500) + 1;
                            
                            for(i = 1; i <= count + 1; i++){
                                printf("1 ~ 500 사이 숫자를 입력해주세요\n%d번째 입력 => ", count);
                                scanf("%d", &input);

                                if(input == num){
                                    printf("★ ☆ ★ ☆ game clear ☆ ★ ☆ ★\n");
                                    break;
                                }
                                else if(count == 10){
                                    printf("정답은 %d 입니다.\n", num);
                                    printf("game over\nto be continue...\n\n");
                                    break;
                                }
                                else if(input < 1 || input > 500){
                                    printf("이렇게 한번의 기회를 날리다니... \n\n");
                                    count++;
                                }
                                else if(input > num){
                                    printf("down\n\n");
                                    count++;
                                }
                                else {
                                    printf("up\n\n");
                                    count++;
                                }
                            } // for end
                        } // up & down case 2 end
                            break;

                        case 3 :{
            // ========== 난이도 Easy ==========
                            num = (rand() % 100) + 1;
                            
                            for(i = 1; i <= count + 1; i++){
                                printf("1 ~ 100 사이 숫자를 입력해주세요\n%d번째 입력 => ", count);
                                scanf("%d", &input);

                                if(input == num){
                                    printf("★ ☆ ★ ☆ game clear ☆ ★ ☆ ★\n");
                                    break;
                                }
                                else if(count == 10){
                                    printf("정답은 %d 입니다.\n", num);
                                    printf("game over\nto be continue...\n\n");
                                    break;
                                }
                                else if(input < 1 || input > 100){
                                    printf("이렇게 한번의 기회를 날리다니... \n\n");
                                    count++;
                                }
                                else if(input > num){
                                    printf("down\n\n");
                                    count++;
                                }
                                else {
                                    printf("up\n\n");
                                    count++;
                                }
                            } // for end
                        } // up & down case 3 end
                            break;
                        
                        default:{
                            printf("상..중..하..에서만 골라주세요..\n\n");
                        }
                            break;
                    } // up & down switch end
                    if(count == 10 || num == input){
                        break;
                    }
                } // up & down while end
            } // main switch case 2 end
            break;
            
            case 3:{
// ==========★★★=== bulls and cows ===★★★==========
                // 중복값 없는 난수 발생
                for(i = 0; i < 3; i++){
                    com[i] = rand() % 9 + 1;
                    for(j = 0; j < i; j++){
                        if(com[i] == com[j]){
                            i--;
                            break;
                        }
                    }
                }

                printf("★ ★ ★=== bulls and cows ===★ ★ ★\n\n");
                printf("같은자리 같은숫자면 strike\n다른자리 같은숫자면 ball\n 3 strike면 우승!!!\n\n");
                
                while(base > 2){

                    printf("난이도 선택\n");
                    printf("<1> Hard 기회 5번   <2> Easy 기회 10번 : ");
                    scanf("%d", &base);
                    
                    switch(base){

                        case 1:{

                            while(1){
                                cnt++;
                            
                                printf("%d 번째\n", cnt);
                                printf("유저값 입력 (1 ~ 9 사이의 중복되지 않는 숫자입력): ");
                                scanf("%d %d %d", &user[0], &user[1], &user[2]);

                                if(user[0] < 1 || user[1] < 1 || user[2] < 1 || user[0] > 9 || user[1] > 9 || user[2] > 9){
                                    printf("잘못입력했습니다.(1 ~ 9 사이만 입력하세요)\n\n");
                                    cnt--;
                                    continue;
                                }
                                else if(user[0] == user[1] || user[0] == user[2] || user[1] == user[2]){
                                    printf("같은값은 안됩니다.(중복되지 않게 입력하세요)\n\n");
                                    cnt--;
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
                                    printf("★ ☆ ★ ☆ You Win !!! ☆ ★ ☆ ★\n");
                                    break;
                                }
                                if(out >= 9){
                                    printf("한개도 일치하지 않습니다.\n\n");
                                    out = 0;
                                }
                                if(cnt == 5){
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
                            } // bulls and cows while end
                        } // bulls and cows case 1 end
                            break;

                        case 2:{

                            while(1){
                                cnt++;
                            
                                printf("%d 번째\n", cnt);
                                printf("유저값 입력 (1 ~ 9 사이의 중복되지 않는 숫자입력): ");
                                scanf("%d %d %d", &user[0], &user[1], &user[2]);

                                if(user[0] < 1 || user[1] < 1 || user[2] < 1 || user[0] > 9 || user[1] > 9 || user[2] > 9){
                                    printf("잘못입력했습니다.(1 ~ 9 사이만 입력하세요)\n\n");
                                    cnt--;
                                    continue;
                                }
                                else if(user[0] == user[1] || user[0] == user[2] || user[1] == user[2]){
                                    printf("같은값은 안됩니다.(중복되지 않게 입력하세요)\n\n");
                                    cnt--;
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
                                    printf("★ ☆ ★ ☆ You Win !!! ☆ ★ ☆ ★\n");
                                    break;
                                }
                                if(out >= 9){
                                    printf("한개도 일치하지 않습니다.\n\n");
                                    out = 0;
                                }
                                if(cnt == 10){
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
                            } // bulls and cows while end
                        } // bulls and cows case 2 end
                            break;

                        default :{
                            printf("둘 중 하나만 골라주세요.\n\n");
                        }
                            break;
                    } // bulls and cows switch end
                } // bulls and cows while end
            } // main switch case 3 end
            break;

            default:{
                printf("세개 중에서만 선택해주세요\n\n");
            }
                break;
        } // main switch end
    } //main while end
}