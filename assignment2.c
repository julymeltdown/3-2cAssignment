#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 묵(O, 0), 찌(X, 1), 빠(#, 2) 게임
// 사용자 패배 0, 비김 1, 이김 2

//TODO: 사용자의 선택을 숫자로 변경하는 함수

int convert(char user){
    if (user == 'O'){
        return 0;
    }else if(user == 'X'){
        return 1;
    }else{
        return 2;
    }
}

char charConvert(int num){
    if(num == 0){
        return 'O';
    }else if(num == 1){
        return 'X';
    }else{
        return '#';
    }
}


//가위바위보 실행
int game(char user, int com) {
    if (user == 'O') {
        if (com == 0) {
            return 1; // 사용자 승
        } else if (com == 1) {
            return 2; // 사용자 패
        } else {
            return 0; // 비김
        }
    } else if (user == 'X') {
        if (com == 0) {
            return 0; // 사용자 패
        } else if (com == 1) {
            return 1; // 비김
        } else {
            return 2; // 사용자 승
        }
    } else { // 사용자 빠
        if (com == 0) {
            return 1; // 사용자 승
        } else if (com == 1) {
            return 0; // 사용자 패
        } else {
            return 2; // 비김
        }
    }
}

int main() {
    srand(time(NULL));
    while (1) {
        //공격권 0이면 사용자, 1이면 컴퓨터
        int attackPriority =0;
        printf("묵(O)찌(X)빠(#) 게임을 시작합니다.\n");
        printf("\n");
        while (1) {
            char input;
            int randomNumber = rand() % 3;
            // 첫 가위바위보
            printf("선을 정하기 위해 먼저 가위 바위 보를 선택하세요: ");
            scanf(" %c", &input);
            getchar(); // 개행 문자 처리

            printf("당신은 %c를 냈고 컴퓨터는 %c를 냈습니다.\n",input, charConvert(randomNumber));

            int firstGameResult = game(input, randomNumber);
            if (firstGameResult == 0) {
                printf("컴퓨터의 공격 차례입니다.\n");
                attackPriority = 1;
                break;
            } else if (firstGameResult == 1) {
                printf("당신과 컴퓨터가 비겼습니다.\n");
            } else {
                attackPriority = 0;
                printf("당신의 공격 차례입니다.\n");
                break;
            }
        }
        printf("\n");
        // 묵찌빠 게임 시작
        while (1) {
            char input;
            int randomNumber = rand() % 3;

            printf("묵(O), 찌(X), 빠(#) 게임을 시작합니다. \n");
            printf("묵찌빠를 선택하세요:");
            scanf(" %c", &input);
            getchar(); // 개행 문자 처리
            printf("당신은 %c를 냈고 컴퓨터는 %c를 냈습니다.\n",input, charConvert(randomNumber));

            //같은게 나와야 게임 종료
            int converted = convert(input);
            if ((converted == randomNumber) && attackPriority==0) {//주도권 사용자 + 똑같은거 냄
                printf("승리하였습니다.\n");
                break;
            } else if ((converted == randomNumber)&&attackPriority==1) {//주도권 컴퓨터 + 똑같은거 냄
                printf("패배하였습니다.\n");
                break;
            } else {//다른거 냄. 가위바위보 게임 진행, 함수 호출
                int secondGameResult = game(input, randomNumber);
                if(secondGameResult == 0){
                    attackPriority =1;
                    printf("컴퓨터의 공격 차례입니다\n");
                }else{
                    attackPriority =0;
                    printf("당신의 공격 차례입니다\n");
                }
            }
        }

        printf("계속 하시겠습니까?: ");
        char choice;
        scanf(" %c", &choice);
        getchar(); // 개행 문자 처리

        if (choice == 'n' || choice == 'N') {
            return 0;
        }else{
            continue;
        }
    }

    return 0;
}