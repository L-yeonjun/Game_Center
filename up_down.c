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

                    printf("���̵��� ���� �ϼ���.\n\n");
                    printf("<1>Hard(1~1000, ��ȸ = 10��)\n<2>Normal(1~500, ��ȸ = 10��)\n<3>Easy(1~100, ��ȸ = 10��)\n");
                    scanf("%d", &choose);
                    
                    switch (choose){

                        case 1 :{
            // ========== ���̵� Hard ==========
                            num = (rand() % 1000) + 1;
                            
                            for(i = 1; i <= count + 1; i++){
                                printf("1~1000 ���� ���ڸ� �Է����ּ���\n%d��° �Է� => ", count);
                                scanf("%d", &input);
                                
                                if(input == num){
                                    printf(" game clear \n");
                                    break;
                                }
                                else if(count == 10){
                                    printf("������ %d.\n", num);
                                    printf("to be continue...\n");
                                    break;
                                }
                                else if(input < 1 || input > 1000){
                                    printf("�̷��� �ѹ��� ��ȸ�� �����ٴ�... \n\n");
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
            // ========== ���̵� Normal ==========
                            num = (rand() % 500) + 1;
                            
                            for(i = 1; i <= count + 1; i++){
                                printf("1 ~ 500 ���� ���ڸ� �Է����ּ���\n%d��° �Է� => ", count);
                                scanf("%d", &input);

                                if(input == num){
                                    printf(" game clear \n");
                                    break;
                                }
                                else if(count == 10){
                                    printf("������ %d.\n", num);
                                    printf("to be continue...\n");
                                    break;
                                }
                                else if(input < 1 || input > 500){
                                    printf("�̷��� �ѹ��� ��ȸ�� �����ٴ�... \n\n");
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
            // ========== ���̵� Easy ==========
                            num = (rand() % 100) + 1;
                            
                            for(count = 1; count <= 10; count++){
                                printf("1 ~ 100 ���� ���ڸ� �Է����ּ���\n%d��° �Է� => ", count);
                                scanf("%d", &input);

                                if(input == num){
                                    printf(" game clear \n");
                                    break;
                                }
                                else if(count == 10){
                                    printf("������ %d.\n", num);
                                    printf("to be continue...\n");
                                    break;
                                }
                                else if(input < 1 || input > 100){
                                    printf("�̷��� �ѹ��� ��ȸ�� �����ٴ�... \n\n");
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
                            printf("��..��..��..������ ����ּ���..\n\n");
                        }
                            break;
                    } // up & down switch end
                } // up & down while end
            } // main switch case 2 end
            
    
