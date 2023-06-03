#include <stdio.h>
#include <string.h>


#define SIZE 20

int main() {
    char names[SIZE][20] = {
            "Sophia", "Olivia", "Riley", "Emma", "Ava",
            "Isabella", "Aria", "Amelia", "Mia", "Liam",
            "Noah", "Jackson", "Aiden", "Elijah", "Grayson",
            "Lucas", "Oliver", "Caden", "Mateo", "David"
    };

    int studentIDs[SIZE] = {
            20220001, 20220010, 20220002, 20220015, 20220009,
            20220014, 20220020, 20220005, 20220016, 20220008,
            20220012, 20220004, 20220018, 20220017, 20220003,
            20220013, 20220007, 20220019, 20220011, 20220006
    };

    int scores[SIZE] = {
            98, 96, 88, 77, 82,
            93, 84, 79, 90, 80,
            89, 99, 78, 83, 92,
            71, 72, 68, 95, 76
    };
    int forSorting[SIZE];

    while (1) {
        //1부터 5중의 숫자를 입력받음
        printf("1. 이름 오름차순 출력    2.학번 오름차순 출력\n");
        printf("3. 점수 내림차순 출력    4.이름 검색\n");
        printf("5. 종료\n");
        int input;
        printf("번호를 선택하세요 :");
        scanf("%d", &input);

        //버블소트


        //1을 입력받으면 이름 오름차순으로 출력
        if (input == 1) {
            //이름 배열을 오름차순으로 정렬
            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE - 1; j++) {
                    if (strcmp(names[j], names[j + 1]) > 0) {
                        char temp[20];
                        strcpy(temp, names[j]);
                        strcpy(names[j], names[j + 1]);
                        strcpy(names[j + 1], temp);

                        int tempID = studentIDs[j];
                        studentIDs[j] = studentIDs[j + 1];
                        studentIDs[j + 1] = tempID;

                        int tempScore = scores[j];
                        scores[j] = scores[j + 1];
                        scores[j + 1] = tempScore;
                    }
                }
            }
            //정렬된 이름, 학번, 점수 출력
            printf("이름                  학번                    점수\n");
            for (int i = 0; i < SIZE; i++) {
                printf("%-20s %-20d %-20d\n", names[i], studentIDs[i], scores[i]);
            }

        }

        //2를 입력받으면 학번 오름차순으로 출력
        if (input == 2) {
            //학번 배열을 오름차순으로 정렬
            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE - 1; j++) {
                    if (studentIDs[j] > studentIDs[j + 1]) {
                        char temp[20];
                        strcpy(temp, names[j]);
                        strcpy(names[j], names[j + 1]);
                        strcpy(names[j + 1], temp);

                        int tempID = studentIDs[j];
                        studentIDs[j] = studentIDs[j + 1];
                        studentIDs[j + 1] = tempID;

                        int tempScore = scores[j];
                        scores[j] = scores[j + 1];
                        scores[j + 1] = tempScore;
                    }
                }
            }
            //정렬된 이름, 학번, 점수 출력
            printf("이름                  학번                    점수\n");
            for (int i = 0; i < SIZE; i++) {
                printf("%-20s %-20d %-20d\n", names[i], studentIDs[i], scores[i]);
            }
        }
        //3을 입력받으면 점수 내림차순 출력
        if (input == 3) {
            //점수 배열을 내림차순으로 정렬
            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE - 1; j++) {
                    if (scores[j] < scores[j + 1]) {
                        char temp[20];
                        strcpy(temp, names[j]);
                        strcpy(names[j], names[j + 1]);
                        strcpy(names[j + 1], temp);

                        int tempID = studentIDs[j];
                        studentIDs[j] = studentIDs[j + 1];
                        studentIDs[j + 1] = tempID;

                        int tempScore = scores[j];
                        scores[j] = scores[j + 1];
                        scores[j + 1] = tempScore;
                    }
                }
            }
            //정렬된 이름, 학번, 점수 출력
            printf("이름                  학번                    점수\n");
            for (int i = 0; i < SIZE; i++) {
                printf("%-20s %-20d %-20d\n", names[i], studentIDs[i], scores[i]);
            }
        }


        //4를 입력받으면 이름을 입력받아 이름, 학번, 점수를 출력
        if (input == 4) {
            char name[20];
            printf("이름을 입력하세요 :");
            scanf("%s", name);
            for (int i = 0; i < SIZE; i++) {
                //반복문 돌면서 입력받은 이름과 이름이 같은지 확인
                if (strcmp(name, names[i]) == 0) {
                    printf("이름                  학번                    점수\n");
                    printf("%-20s %-20d %-20d\n", names[i], studentIDs[i], scores[i]);
                }
            }
        }
        //5를 입력받으면 종료
        if (input == 5) {
            break;
        }


    }


    return 0;
}
