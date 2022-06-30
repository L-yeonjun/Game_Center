#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){

    srand(time(NULL));
    int i, num;
    int input;
    int choose;
    int count = 1;
    int n = 0;

    printf("=== up & down game ===\n\n");

    
    while(choose > 3){

                    printf("난이도를 선택 하세요.\n\n");
                    printf("<1>Hard(1~1000, 기회 = 10번)\n<2>Normal(1~500, 기회 = 10번)\n<3>Easy(1~100, 기회 = 10번)\n");
                    scanf("%d", &choose);
                    
                    switch (choose){

                        case 1 :{
            // ========== 난이도 Hard ==========
                            num = (rand() % 1000) + 1;
                            
                            for(i = 1; i <= count + 1; i++){
                                printf("1~1000 사이 숫자를 입력해주세요\n%d번째 입력 => ", count);
                                scanf("%d", &input);
                                
                                if(input == num){
                                    printf(" game clear \n");
                                    break;
                                }
                                else if(count == 10){
                                    printf("정답은 %d.\n", num);
                                    printf("to be continue...\n");
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
                                    printf(" game clear \n");
                                    break;
                                }
                                else if(count == 10){
                                    printf("정답은 %d.\n", num);
                                    printf("to be continue...\n");
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
                            
                            for(count = 1; count <= 10; count++){
                                printf("1 ~ 100 사이 숫자를 입력해주세요\n%d번째 입력 => ", count);
                                scanf("%d", &input);

                                if(input == num){
                                    printf(" game clear \n");
                                    break;
                                }
                                else if(count == 10){
                                    printf("정답은 %d.\n", num);
                                    printf("to be continue...\n");
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
                } // up & down while end
            } // main switch case 2 end
            
    
