#include <stdio.h>
int main(){
    printf("당신은 늦은 밤 배가 고파 편의점을 갑니다.\n");
    printf("편의점을 가던 중 뒤에서 누군가 다가오는 것을 느낍니다.\n");
    printf("당신은 정신을 잃습니다.\n");
    printf("눈을 떠보니 어둡고, 낯선 방이 보입니다. 탈출하세요!\n\n\n");

    char a[20] = {0,};
    int a2[20] = {0,};
    int why = 0;
    int end = 0;
    int escape = 0;
    char answer = 0;
    char answer2 = 0;
    char answer3 = 0;
    char answer4 = 0;

    printf("(Yes -> Y, No -> N)\n(대소문자 구분하세요)\n");
    printf("답 입력 -> 0\n");
    printf("\n주위를 둘러보겠습니까? (Y/N): ");
    scanf("%c", &a[0]);
    if(a[0] == 'Y'){
        printf("\n책상, 옷걸이, 책장, 침대가 보입니다.\n단서를 찾아야 할 것 같습니다. 살펴볼 것을 선택하세요.\n(책상 -> 1, 옷걸이 -> 2, 책장 -> 3, 침대 -> 4)\n");

        while(1){
        scanf("%d", &a2[0]);

        switch(a2[0]){
        case 1:
        printf("\n책상을 살펴보겠습니까? (Y/N): ");
        scanf(" %c", &a[1]);
        if(a[1] == 'Y'){
            printf("\n책상에는 공책, 샤프가 있다.\n");
            printf("\n책상을 더 살펴본다 -> 1\n다른 곳을 살펴본다 -> 2\n");
            scanf("%d", &a2[1]);
            if(a2[1] == 1){
                printf("\n공책을 살펴본다 -> 1\n샤프를 살펴본다 -> 2\n");
                scanf("%d", &a2[2]);
                if(a2[2] == 1){
                    printf("\n공책에는\n\n집에 오면 가장 먼저 할 일!\n1. 겉옷을 벗는다\n2. 책장에서 노트를 꺼내고\n3. 책상에 앉아 할 일을 정리한다.\n4. 할 일을 끝낸 뒤\n5. 잠을 잔다.\n\n라는 글이 적혀있다.\n");
                    printf("\n다음 살펴볼 것을 고르세요.\n책상(1), 옷걸이(2), 책장(3), 침대(4)\n");
                    break;
                }
                else if(a2[2] == 2){
                    printf("\n앞부분이 무거운 저중심 샤프다. 필기할 때 좋아 보인다.\n");
                    printf("샤프를 분해해 볼까?\n분해해 본다 -> 1\n내려둔다 -> 2\n");
                    scanf("%d", &a2[11]);
                    if(a2[11] == 1){
                        printf("\n'M'이 쓰인 종이가 나왔다.\n");
                        printf("\n다음 살펴볼 것을 고르세요.\n책상(1), 옷걸이(2), 책장(3), 침대(4)\n");
                    break;
                    }
                    else if(a2[11] == 2){
                        printf("\n다음 살펴볼 것을 고르세요.\n책상(1), 옷걸이(2), 책장(3), 침대(4)\n");
                    break;
                    }

                    printf("\n다음 살펴볼 것을 고르세요.\n책상(1), 옷걸이(2), 책장(3), 침대(4)\n");
                    break;
                }
            }
            else if(a2[1] == 2){
                printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                break;
            }
        }
        else if(a[1] == 'N'){
            printf("\n살펴볼 것을 선택하세요.책상(1), 옷걸이(2), 책장(3), 침대(4)\n");
            break;
        }
        else {
            printf("\n충격 때문인지 갑자기 시야가 흐려진다.\n눈을 떠보니 몸은 묶여있었다.\n\n사망. 장기밀매..?\n");
            end++;
            break;
        }
        case 2:
        printf("\n옷걸이를 살펴보시겠습니까? (Y/N): ");
        scanf(" %c", &a[3]);
        if(a[3] == 'Y'){
        printf("\n옷걸이에는 패딩이 걸려있다.\n");
        printf("\n주머니를 확인한다. -> 1\n외관을 살펴본다 -> 2\n다른 곳을 보러 간다. -> 3\n");
        scanf("%d", &a2[6]);
        if(a2[6] == 1){
        printf("\n휴대전화가 있다.\n챙긴다 -> 1\n다시 넣어둔다 -> 2\n");
        scanf("%d", &a2[7]);
        if(a2[7] == 1){
        printf("\n책상에 있는 충전기로 충전을 한다.\n'삐삐삐삐삐삐'\n전화가 온다.\n\n사망. 전화벨\n");
        end++;
        break;
        }
        else if(a2[7] == 2){
        printf("\n이건 필요없을 것 같아\n");
        printf("더 살펴볼까?\n살펴본다 -> 1\n다른 곳을 살펴본다 -> 2\n");
        scanf("%d", &a2[13]);
        if(a2[13] == 1){
            printf("\n외관을 살펴본다 -> 2\n역시 그냥 다른 곳을 살펴본다 -> 3\n");
            scanf("%d", &a2[14]);
            if(a2[14] == 2){
                printf("\n어두워서 잘 보이지 않지만 희미하게 'H'라고 쓰여있는 것 같다.\n");
                printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                break;
            }
            else if(a2[14] == 3){
                printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                break;
            }
        }
        else if(a2[13] == 2){
            printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
            break;
        }
        }
        }
        else if(a2[6] == 2){
            printf("\n잘 보이진 않지만 특별한건 없는 듯 하다.\n");
            printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
            break;
        }
        else if(a2[6] == 3){
                printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                break;
        }
        }
        else if(a[3] == 'N'){
            printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                break;
        }

        case 3:
        printf("\n책장을 살펴보시겠습니까? (Y/N): \n");
        scanf(" %c", &a[4]);
        if(a[4] == 'Y'){
            printf("\n책장에는 피규어가 있다.\n");
            printf("피규어를 더 살펴보시겠습니까?\n외관을 살펴본다 -> 1\n부셔본다 -> 2\n다시 내려놓는다 -> 3\n");
            scanf("%d", &a2[8]);
            if(a2[8] == 1){
                printf("\n특별한건 없어보인다.\n");
                printf("\n피규어를 더 살펴볼까?\n살펴본다 -> 1\n다른 곳을 살펴본다 -> 2\n");
                scanf("%d", &a2[9]);
                if(a2[9] == 1){
                    printf("부셔본다 -> 2\n다시 내려놓는다 -> 3\n");
                    scanf("%d", &a2[10]);
                    if(a2[10] == 2){
                        printf("\n콰직!\n큰소리가 났다. 조심하는게 좋을 것 같다.\n피규어에서 'o'가 쓰인 종이가 나왔다.\n\n");
                        printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                        break;
                    }
                    else if(a2[10] == 3){
                        printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                        break;
                    }
                }
                else if(a2[9] == 2){
                    printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                break;
                }

            }
            else if(a2[8] == 2){
                printf("콰직!\n생각보다 큰 소리가 났다\n\n사망. 큰 소리\n");
                end++;
                break;
            }
            else if(a2[8] == 3){
                printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                break;
            }
        }
        else if(a[4] == 'N'){
            printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                break;
        }

        case 4:
        printf("\n침대를 살펴보시겠습니까? (Y/N): ");
        scanf(" %c", &a[5]);
        if(a[5] == 'Y'){
            printf("\n푹신해보이는 침대다.\n침대에 베개가 하나 있다. 열어볼까?\n열어본다 -> 1\n그냥 둔다 -> 2\n");
            scanf("%d", &a2[12]);
            if(a2[12] == 1){
                printf("'e'라고 쓰인 종이가 나왔다\n");
                printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                break;
            }
            else if(a2[12] == 2){
                printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                break;
            }
        }
        else if(a[5] == 'N'){
            printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                break;
        }

        case 0:
            printf("\n답을 입력하시겠습니까? (Y/N): ");
            scanf(" %c", &a[6]);
            if(a[6] == 'Y'){
                printf("\n");
                scanf(" %c", &answer);
                scanf(" %c", &answer2);
                scanf(" %c", &answer3);
                scanf(" %c", &answer4);
                if(answer == 'H'){
                    if(answer2 == 'o'){
                        if(answer3 == 'M'){
                            if(answer4 == 'e'){
                                printf("\n축하합니다 탈출하셨습니다!\n");
                                escape++;
                                break;
                                }
                            else {
                        printf("\n'삐삐삐삐삐삐'\n아 틀렸다.\n\n사망. 틀린 답\n");
                        end++;
                        break;
            }
            }
            else {
                    printf("\n'삐삐삐삐삐삐'\n아 틀렸다.\n\n사망. 틀린 답\n");
                    end++;
                    break;
                }
            }
            else {
                    printf("\n'삐삐삐삐삐삐'\n아 틀렸다.\n\n사망. 틀린 답\n");
                    end++;
                    break;
                    }
                    }
                    else {
                            printf("\n'삐삐삐삐삐삐'\n아 틀렸다.\n\n사망. 틀린 답\n");
                            end++;
                            break;
                            }
                            }
            else if(a[6] == 'N'){
                printf("\n책상(1), 옷걸이(2), 책장(3), 침대(4) 중 무엇을 살펴보겠습니까?\n");
                break;
            }

        default:
        printf("\n끼이익..\n문이 열린다.\n\n사망. 납치범의 등장\n");
        end++;
        break;
        }
        if(end == 1){
            break;
        }
        if(escape == 1){
            break;
        }
        }
    }
    else if(a[0] == 'N'){
        printf("둘러보지 않는다면 나갈 수 없습니다. 둘러보세요. (Y/N): ");
        while(1){
            scanf(" %c", &a[2]);
            if(a[2] == 'Y'){
                    printf("\n그건 선택할 수 없습니다\n\n사망. 탈출 실패\n");
                    break;
            }
            else if(a[2] == 'N'){
                why++;
                if(why == 11){
                    printf("\n공기가 희박하다.\n\n사망. 질식\n");
                    break;
                }
                else if(why != 11){
                printf("둘러보세요. (Y/N): ");
                }
            }
            }
            }
            else{
                printf("\n문 밖에서 이상한 소리가 들린다.\n갑자기 눈이 감겨온다.\n\n사망. 일산화탄소 중독\n");
            }

    return 0;
    }
