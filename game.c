#include<stdio.h>
int main()
{
    int answer;
    int score=0;

    printf("C  QUIZ   GAME\n");
    // question starts...

    printf("1. which language are we using?\n");
    // options...
    printf("1.python\n");
    printf("2. C\n");
    printf("3. java\n");
    printf("HTML\n");
    printf("Enter your answer(1-4)");
    scanf("%d" , &answer);

    if(answer==2){
        printf("correct\n");
        score++;
    }
    else{
        printf("WRONG! correct answer is C\n");
    }

    printf("2. which one is an output function in c?\n");
    printf("1.scanf()\n");
    printf("input()\n");
    printf("printf\n");
    printf("read\n");
    printf("enter your answer(1-4):\n");
    scanf("%d", &answer);

    if(answer==3){
        printf("correct\n");
        score++;
    }
    else{
        printf("wrong! the answer is printf()\n");
    }

    printf("RESULT\n");

    if(score==2)
    {
        printf("good job\n");
    }
    else{
        printf("keep practicing\n");
    }
    return 0;



}