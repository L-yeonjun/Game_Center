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

        printf("�� �� �� �� Play zone �� �� �� ��\n\n");
        printf("������ ������ �ϳ��� ������\n");
        printf("<1>�� ���� => slot machine\n<2>�� ���� => up & down\n<3>�� ���� => bulls and cows\n");
        scanf("%d", &game);

        switch (game){
        
            case 1 :{
// ==========�ڡڡ�=== slot machine ===�ڡڡ�==========
                printf("�� �� ��=== slot machine ===�� �� ��\n\n");
                printf("���� 3���� ��� ���� ���ڸ� ��� 5000�� ȹ��!!!\n���н� -1000��\n\n");
                printf("�ʱ��ڱ��� �Է��ϸ� �ٷ� ���� ���� �˴ϴ�.\n" );
                printf("�ʱ��ڱ� �Է� => " );
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
                            printf("��� ȹ��!!!\n");
                            printf("���� �ݾ� => %d��\n", pay = pay + 5000);
                        }else if(num1 != num2 || num2 != num3 || num1 != num3){
                            printf("�ƽ�����\n");
                            printf("���� �ݾ� => %d��\n\n", pay = pay - 1000);
                            if(pay < 1000){
                                printf("�ݾ��� �����մϴ�.\n");
                                break;
                            }
                        }
                    
                        if(pay <= 0 ){
                            printf("������ ����Ǿ����ϴ�.\n");
                            break;
                        }
                        else{
                            n++;
                        }
                        } // if (n == 0) end
                        if(n != 0){
                            printf("���Ǵ�? <1>Yes  <2>No");
                            scanf("%d", &k);
                            
                            if(k == 1){
                                n = 0;
                            }
                            else if(k == 2){
                                printf("bye~ bye~\n");
                                break;
                            }
                            else if(k < 1 || k > 2){
                                printf("�ٽ� �Է��ϼ���\n");
                            }
                    } // if (n != 0) end
                } // case 1 while end
            } // slot machine case 1 end
                break;

            case 2 :{
// ==========�ڡڡ�=== up & down ===�ڡڡ�==========
                printf("�� �� ��=== up & down ===�� �� ��\n\n");

                while(1){
                    printf("���̵��� ���� �ϼ���.\n\n");
                    printf("<1>Hard (1~1000, ��ȸ = 10��)\n<2>Normal(1~500, ��ȸ = 10��)\n<3>Easy  (1~100, ��ȸ = 10��)\n");
                    scanf("%d", &choose);
                    
                    switch (choose){

                        case 1 :{
            // ========== ���̵� Hard ==========
                            num = (rand() % 1000) + 1;
                            
                            for(i = 1; i <= count + 1; i++){
                                printf("1~1000 ���� ���ڸ� �Է����ּ���\n%d��° �Է� => ", count);
                                scanf("%d", &input);
                                
                                if(input == num){
                                    printf("�� �� �� �� game clear �� �� �� ��\n");
                                    break;
                                }
                                else if(count == 10){
                                    printf("������ %d �Դϴ�.\n", num);
                                    printf("game over\nto be continue...\n\n");
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
                                    printf("�� �� �� �� game clear �� �� �� ��\n");
                                    break;
                                }
                                else if(count == 10){
                                    printf("������ %d �Դϴ�.\n", num);
                                    printf("game over\nto be continue...\n\n");
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
                            
                            for(i = 1; i <= count + 1; i++){
                                printf("1 ~ 100 ���� ���ڸ� �Է����ּ���\n%d��° �Է� => ", count);
                                scanf("%d", &input);

                                if(input == num){
                                    printf("�� �� �� �� game clear �� �� �� ��\n");
                                    break;
                                }
                                else if(count == 10){
                                    printf("������ %d �Դϴ�.\n", num);
                                    printf("game over\nto be continue...\n\n");
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
                    if(count == 10 || num == input){
                        break;
                    }
                } // up & down while end
            } // main switch case 2 end
            break;
            
            case 3:{
// ==========�ڡڡ�=== bulls and cows ===�ڡڡ�==========
                // �ߺ��� ���� ���� �߻�
                for(i = 0; i < 3; i++){
                    com[i] = rand() % 9 + 1;
                    for(j = 0; j < i; j++){
                        if(com[i] == com[j]){
                            i--;
                            break;
                        }
                    }
                }

                printf("�� �� ��=== bulls and cows ===�� �� ��\n\n");
                printf("�����ڸ� �������ڸ� strike\n�ٸ��ڸ� �������ڸ� ball\n 3 strike�� ���!!!\n\n");
                
                while(base > 2){

                    printf("���̵� ����\n");
                    printf("<1> Hard ��ȸ 5��   <2> Easy ��ȸ 10�� : ");
                    scanf("%d", &base);
                    
                    switch(base){

                        case 1:{

                            while(1){
                                cnt++;
                            
                                printf("%d ��°\n", cnt);
                                printf("������ �Է� (1 ~ 9 ������ �ߺ����� �ʴ� �����Է�): ");
                                scanf("%d %d %d", &user[0], &user[1], &user[2]);

                                if(user[0] < 1 || user[1] < 1 || user[2] < 1 || user[0] > 9 || user[1] > 9 || user[2] > 9){
                                    printf("�߸��Է��߽��ϴ�.(1 ~ 9 ���̸� �Է��ϼ���)\n\n");
                                    cnt--;
                                    continue;
                                }
                                else if(user[0] == user[1] || user[0] == user[2] || user[1] == user[2]){
                                    printf("�������� �ȵ˴ϴ�.(�ߺ����� �ʰ� �Է��ϼ���)\n\n");
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
                                    printf("�� �� �� �� You Win !!! �� �� �� ��\n");
                                    break;
                                }
                                if(out >= 9){
                                    printf("�Ѱ��� ��ġ���� �ʽ��ϴ�.\n\n");
                                    out = 0;
                                }
                                if(cnt == 5){
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
                            } // bulls and cows while end
                        } // bulls and cows case 1 end
                            break;

                        case 2:{

                            while(1){
                                cnt++;
                            
                                printf("%d ��°\n", cnt);
                                printf("������ �Է� (1 ~ 9 ������ �ߺ����� �ʴ� �����Է�): ");
                                scanf("%d %d %d", &user[0], &user[1], &user[2]);

                                if(user[0] < 1 || user[1] < 1 || user[2] < 1 || user[0] > 9 || user[1] > 9 || user[2] > 9){
                                    printf("�߸��Է��߽��ϴ�.(1 ~ 9 ���̸� �Է��ϼ���)\n\n");
                                    cnt--;
                                    continue;
                                }
                                else if(user[0] == user[1] || user[0] == user[2] || user[1] == user[2]){
                                    printf("�������� �ȵ˴ϴ�.(�ߺ����� �ʰ� �Է��ϼ���)\n\n");
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
                                    printf("�� �� �� �� You Win !!! �� �� �� ��\n");
                                    break;
                                }
                                if(out >= 9){
                                    printf("�Ѱ��� ��ġ���� �ʽ��ϴ�.\n\n");
                                    out = 0;
                                }
                                if(cnt == 10){
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
                            } // bulls and cows while end
                        } // bulls and cows case 2 end
                            break;

                        default :{
                            printf("�� �� �ϳ��� ����ּ���.\n\n");
                        }
                            break;
                    } // bulls and cows switch end
                } // bulls and cows while end
            } // main switch case 3 end
            break;

            default:{
                printf("���� �߿����� �������ּ���\n\n");
            }
                break;
        } // main switch end
    } //main while end
}