#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0, num10 = 0, num11 = 0, num12 = 0, num13 = 0, num14 = 0, num15 = 0, num16 = 0, num17 = 0, num18 = 0, num19 = 0, num20 = 0, num21 = 0, num22 = 0, num23 = 0, num24 = 0, num25 = 0, num26 = 0, num27 = 0, num28 = 0, num29 = 0, num30 = 0, num31 = 0, num32 = 0, num33 = 0, num34 = 0, num35 = 0, num36 = 0, num37 = 0, num38 = 0, num39 = 0, num40 = 0, num41 = 0, num42 = 0, num43 = 0, num44 = 0, num45 = 0, num46 = 0, num47 = 0, num48 = 0, num49 = 0, num50 = 0, num51 = 0, num52 = 0, num53 = 0, num54 = 0, num55 = 0, num56 = 0, num57 = 0, num58 = 0, num59 = 0, num60 = 0;

    char c1;
    int numCount = 0;
    int finish = 1;

    //피연산자들의 자리수 세기
    int op1 = 0, op2 = 0;

    printf("수식을 입력하세요: ");

    while (finish) {
        numCount++;

        if (numCount > 31) {
            printf("numCount: %d\n",numCount);
            printf("입력 가능한 숫자의 개수를 초과했습니다.\n");
            break;
        }

        scanf("%1c", &c1);
        int digit = c1 - '0';
        printf("%d\n", digit);
        if (c1 != '+' && digit >= 0 && digit < 10) {
            switch (numCount) {
                case 1:
                    num1 = digit;
                    break;
                case 2:
                    num2 = num1;
                    num1 = digit;
                    break;
                case 3:
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 4:
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 5:
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 6:
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 7:
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 8:
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 9:
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 10:
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 11:
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 12:
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 13:
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 14:
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 15:
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 16:
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    num16 = digit;
                    break;
                case 17:
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 18:
                    num18 = num17;
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 19:
                    num19 = num18;
                    num18 = num17;
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 20:
                    num20 = num19;
                    num19 = num18;
                    num18 = num17;
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 21:
                    num21 = num20;
                    num20 = num19;
                    num19 = num18;
                    num18 = num17;
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 22:
                    num22 = num21;
                    num21 = num20;
                    num20 = num19;
                    num19 = num18;
                    num18 = num17;
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 23:
                    num23 = num22;
                    num22 = num21;
                    num21 = num20;
                    num20 = num19;
                    num19 = num18;
                    num18 = num17;
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 24:
                    num24 = num23;
                    num23 = num22;
                    num22 = num21;
                    num21 = num20;
                    num20 = num19;
                    num19 = num18;
                    num18 = num17;
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 25:
                    num25 = num24;
                    num24 = num23;
                    num23 = num22;
                    num22 = num21;
                    num21 = num20;
                    num20 = num19;
                    num19 = num18;
                    num18 = num17;
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 26:
                    num26 = num25;
                    num25 = num24;
                    num24 = num23;
                    num23 = num22;
                    num22 = num21;
                    num21 = num20;
                    num20 = num19;
                    num19 = num18;
                    num18 = num17;
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 27:
                    num27 = num26;
                    num26 = num25;
                    num25 = num24;
                    num24 = num23;
                    num23 = num22;
                    num22 = num21;
                    num21 = num20;
                    num20 = num19;
                    num19 = num18;
                    num18 = num17;
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 28:
                    num28 = num27;
                    num27 = num26;
                    num26 = num25;
                    num25 = num24;
                    num24 = num23;
                    num23 = num22;
                    num22 = num21;
                    num21 = num20;
                    num20 = num19;
                    num19 = num18;
                    num18 = num17;
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 29:
                    num29 = num28;
                    num28 = num27;
                    num27 = num26;
                    num26 = num25;
                    num25 = num24;
                    num24 = num23;
                    num23 = num22;
                    num22 = num21;
                    num21 = num20;
                    num20 = num19;
                    num19 = num18;
                    num18 = num17;
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                case 30:
                    num30 = num29;
                    num29 = num28;
                    num28 = num27;
                    num27 = num26;
                    num26 = num25;
                    num25 = num24;
                    num24 = num23;
                    num23 = num22;
                    num22 = num21;
                    num21 = num20;
                    num20 = num19;
                    num19 = num18;
                    num18 = num17;
                    num17 = num16;
                    num16 = num15;
                    num15 = num14;
                    num14 = num13;
                    num13 = num12;
                    num12 = num11;
                    num11 = num10;
                    num10 = num9;
                    num9 = num8;
                    num8 = num7;
                    num7 = num6;
                    num6 = num5;
                    num5 = num4;
                    num4 = num3;
                    num3 = num2;
                    num2 = num1;
                    num1 = digit;
                    break;
                default:
                    break;
            }
        } else {
            // 만약 c1이 +가 아니었으면 + 나올 때까지 공백 제거
            if (c1 != '+') {
                while (1) {
                    scanf("%1c", &c1);
                    if (c1 == '+') {
                        break;
                    }
                }
            }

            numCount = 0;
            finish = 0; // 공백 문자열이 입력되면 입력 종료
        }
        op1++;
    }
    op1 = op1 - 1;
    printf("num1: %d\n", op1);


    finish = 1;
    numCount = 0;
    char c2;
    while (finish) {
        c2 = getchar();
        if (c2 == ' ') {
            continue;
        }
        numCount++;
        if (numCount > 31) {
            printf("입력 가능한 숫자의 개수를 초과했습니다.\n");
            break;
        }


        int digit = c2 - '0'; // 문자를 숫자로 변환
        printf("numCount:%d, digit:%d\n",numCount,digit);
        if (digit >= 0 && digit < 10 &&numCount<=30) {
            //printf("%d\n", digit);
            switch (numCount) {
                case 1:
                    num31 = digit;
                    break;
                case 2:
                    num32 = num31;
                    num31 = digit;
                    break;
                case 3:
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 4:
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 5:
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 6:
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 7:
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 8:
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 9:
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 10:
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 11:
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 12:
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 13:
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 14:
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 15:
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 16:
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 17:
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 18:
                    num48 = num47;
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 19:
                    num49 = num48;
                    num48 = num47;
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 20:
                    num50 = num49;
                    num49 = num48;
                    num48 = num47;
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 21:
                    num51 = num50;
                    num50 = num49;
                    num48 = num47;
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 22:
                    num52 = num51;
                    num51 = num50;
                    num50 = num49;
                    num49 = num48;
                    num48 = num47;
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 23:
                    num53 = num52;
                    num52 = num51;
                    num51 = num50;
                    num50 = num49;
                    num49 = num48;
                    num48 = num47;
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 24:
                    num54 = num53;
                    num53 = num52;
                    num52 = num51;
                    num51 = num50;
                    num50 = num49;
                    num49 = num48;
                    num48 = num47;
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 25:
                    num55 = num54;
                    num54 = num53;
                    num53 = num52;
                    num52 = num51;
                    num51 = num50;
                    num50 = num49;
                    num49 = num48;
                    num48 = num47;
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 26:
                    num56 = num55;
                    num55 = num54;
                    num54 = num53;
                    num53 = num52;
                    num52 = num51;
                    num51 = num50;
                    num50 = num49;
                    num49 = num48;
                    num48 = num47;
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 27:
                    num57 = num56;
                    num56 = num55;
                    num55 = num54;
                    num54 = num53;
                    num53 = num52;
                    num52 = num51;
                    num51 = num50;
                    num50 = num49;
                    num49 = num48;
                    num48 = num47;
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 28:
                    num58 = num57;
                    num57 = num56;
                    num56 = num55;
                    num55 = num54;
                    num54 = num53;
                    num53 = num52;
                    num52 = num51;
                    num51 = num50;
                    num50 = num49;
                    num49 = num48;
                    num48 = num47;
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 29:
                    num59 = num58;
                    num58 = num57;
                    num57 = num56;
                    num56 = num55;
                    num55 = num54;
                    num54 = num53;
                    num53 = num52;
                    num52 = num51;
                    num51 = num50;
                    num50 = num49;
                    num49 = num48;
                    num48 = num47;
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    break;
                case 30:
                    num60 = num59;
                    num59 = num58;
                    num58 = num57;
                    num57 = num56;
                    num56 = num55;
                    num55 = num54;
                    num54 = num53;
                    num53 = num52;
                    num52 = num51;
                    num51 = num50;
                    num50 = num49;
                    num49 = num48;
                    num48 = num47;
                    num47 = num46;
                    num46 = num45;
                    num45 = num44;
                    num44 = num43;
                    num43 = num42;
                    num42 = num41;
                    num41 = num40;
                    num40 = num39;
                    num39 = num38;
                    num38 = num37;
                    num37 = num36;
                    num36 = num35;
                    num35 = num34;
                    num34 = num33;
                    num33 = num32;
                    num32 = num31;
                    num31 = digit;
                    printf("num31: %d\n", num31);
                    printf("num32: %d\n", num32);
                    printf("num33: %d\n", num33);
                    printf("num34: %d\n", num34);
                    printf("num35: %d\n", num35);
                    printf("num36: %d\n", num36);
                    printf("num37: %d\n", num37);
                    printf("num38: %d\n", num38);
                    printf("num39: %d\n", num39);
                    printf("num40: %d\n", num40);
                    printf("num41: %d\n", num41);
                    printf("num42: %d\n", num42);
                    printf("num43: %d\n", num43);
                    printf("num44: %d\n", num44);
                    printf("num45: %d\n", num45);
                    printf("num46: %d\n", num46);
                    printf("num47: %d\n", num47);
                    printf("num48: %d\n", num48);
                    printf("num49: %d\n", num49);
                    printf("num50: %d\n", num50);
                    printf("num51: %d\n", num51);
                    printf("num52: %d\n", num52);
                    printf("num53: %d\n", num53);
                    printf("num54: %d\n", num54);
                    printf("num55: %d\n", num55);
                    printf("num56: %d\n", num56);
                    printf("num57: %d\n", num57);
                    printf("num58: %d\n", num58);
                    printf("num59: %d\n", num59);
                    printf("num60: %d\n", num60);
                    break;
                default:
                    break;
            }
        } else {
            finish = 0;
        }
        op2++;
    }

    op2 = op2 - 1;
    printf("num2: %d\n", op2);


    // 덧셈

    unsigned long long result1 = 0;
    unsigned long long result2 = 0;
    //unsigned long long raise = 1;
    /*
    printf("------------------\n");
    printf("num1:%d\n", num1);
    printf("num31:%d\n", num31);
    printf("num2:%d\n", num2);
    printf("num32:%d\n", num32);
    printf("num3:%d\n", num3);
    printf("num53:%d\n", num53);

    printf("-----------------------\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    printf("num3: %d\n", num3);
    printf("num4: %d\n", num4);
    printf("num5: %d\n", num5);
    printf("num6: %d\n", num6);
    printf("num7: %d\n", num7);
    printf("num8: %d\n", num8);
    printf("num9: %d\n", num9);
    printf("num10: %d\n", num10);
    printf("num11: %d\n", num11);
    printf("num12: %d\n", num12);
    printf("num13: %d\n", num13);
    printf("num14: %d\n", num14);
    printf("num15: %d\n", num15);
    printf("num16: %d\n", num16);
    printf("num17: %d\n", num17);
    printf("num18: %d\n", num18);
    printf("num19: %d\n", num19);
    printf("num20: %d\n", num20);
    printf("num21: %d\n", num21);
    printf("num22: %d\n", num22);
    printf("num23: %d\n", num23);
    printf("num24: %d\n", num24);
    printf("num25: %d\n", num25);
    printf("num26: %d\n", num26);
    printf("num27: %d\n", num27);
    printf("num28: %d\n", num28);
    printf("num29: %d\n", num29);
    printf("num30: %d\n", num30);
    printf("num31: %d\n", num31);
    printf("num32: %d\n", num32);
    printf("num33: %d\n", num33);
    printf("num34: %d\n", num34);
    printf("num35: %d\n", num35);
    printf("num36: %d\n", num36);
    printf("num37: %d\n", num37);
    printf("num38: %d\n", num38);
    printf("num39: %d\n", num39);
    printf("num40: %d\n", num40);
    printf("num41: %d\n", num41);
    printf("num42: %d\n", num42);
    printf("num43: %d\n", num43);
    printf("num44: %d\n", num44);
    printf("num45: %d\n", num45);
    printf("num46: %d\n", num46);
    printf("num47: %d\n", num47);
    printf("num48: %d\n", num48);
    printf("num49: %d\n", num49);
    printf("num50: %d\n", num50);
    printf("num51: %d\n", num51);
    printf("num52: %d\n", num52);
    printf("num53: %d\n", num53);
    printf("num54: %d\n", num54);
    printf("num55: %d\n", num55);
    printf("num56: %d\n", num56);
    printf("num57: %d\n", num57);
    printf("num58: %d\n", num58);
    printf("num59: %d\n", num59);
    printf("num60: %d\n", num60);
    */


    // 계산 수행
    result1 =
            num1 + num31 + 10 * (num2 + num32) + 100 * (num3 + num33) + 1000 * (num4 + num34) + 10000 * (num5 + num35) +
            100000 * (num6 + num36) + 1000000 * (num7 + num37) + 10000000 * (num8 + num38) +
            100000000 * (num9 + num39) + 1000000000 * (num10 + num40) + 10000000000 * (num11 + num41) +
            100000000000 * (num12 + num42) + 1000000000000 * (num13 + num43) + 10000000000000 * (num14 + num44) +
            100000000000000 * (num15 + num45);

    unsigned long long raise = 1000000000000000;

    if (result1 >= raise) {
        result1 = result1 - raise;
        result2 += 1;
    }
    printf("result2: %llu\n", result2);
    result2 += num16 + num46 + 10 * (num17 + num47) + 100 * (num18 + num48) + 1000 * (num19 + num49) +
               10000 * (num20 + num50) + 100000 * (num21 + num51) + 1000000 * (num22 + num52) +
               10000000 * (num23 + num53) + 100000000 * (num24 + num54) + 1000000000 * (num25 + num55) +
               10000000000 * (num26 + num56) + 100000000000 * (num27 + num57) + 1000000000000 * (num28 + num58) +
               10000000000000 * (num29 + num59) + 100000000000000 * (num30 + num60);

    printf("result2: %llu\n", result2);

    if (result2 == 0) {
        printf("Case 1\n");
        printf("%llu\n", result1);
    } else {
        printf("Case 2\n");
        printf("%llu%llu\n", result2, result1);
    }

    return 0;
}
