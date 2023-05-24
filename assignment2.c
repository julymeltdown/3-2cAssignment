// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
//묵(O,0)찌(X,1)빠(#,2) 게임
//사용자 패배 0, 비김 1, 이김 2

int game(char user, int com){
    if(user=="O"){
        if(com=="0"){
            return 1;
        }else if(com=="1"){
            return 2;
        }else{
            return 0;
        }
    }else if( user=="X"){
        if(com=="0"){
            return 0;
        }else if(com=="1"){
            return 1;
        }else{
            return 2;
        }
    }else{ //사용자 빠
        if(com=="0"){
            return 1;
        }else if(com == "1"){
            return 0;
        }else{
            reuturn 2;
        }
    }
}


int main() {
    srand(time(NULL));
    while(1){
        char input;
        int randomNumber = rand()%3;
        
        //첫 가위바위보
        printf("선을 정하기 위해 먼저 가위 바위 보를 선택하세요 :");
        scanf("%c",&input);
        int result = game(input, randomNumber);
        if(result==0){
            
        }
        
        //묵찌빠
        
        
        
    }

    return 0;
}
