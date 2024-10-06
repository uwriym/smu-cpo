#include <stdio.h>

int main(void)
{
    printf("*** 신한/국민 K-패스 체크카드 시뮬레이션 프로그램 ***\n");

    // 월평균 대중교통 요금, 생활서비스 결제액, 기타 결제액 입력 받음
    int transport, life, etc;

    // 대중교통 요금
    while (1)
    {
        printf("월평균 대중교통 요금: ");
        scanf("%d", &transport);
        if (transport >= 0)
            break;

        printf("0원 이상의 값으로 다시 입력하세요.\n");
    }

    // 생활서비스 결제액
    while (1)
    {
        printf("월평균 생활서비스 결제액: ");
        scanf("%d", &life);
        if (life >= 0)
            break;

        printf("0원 이상의 값으로 다시 입력하세요.\n");
    }

    // 기타 결제액
    while (1)
    {
        printf("월평균 기타 결제액: ");
        scanf("%d", &etc);
        if (etc >= 0)
            break;

        printf("0원 이상의 값으로 다시 입력하세요.\n");
    }

    int total = transport + life + etc; // 총 결제액(할인 전)

    // 혜택 비교
    // 대중교통요금
    double transportDiscountRate = 0.1;                                                    // 10%
    int shTransportMaxDiscount = (total < 200000) ? 0 : ((total >= 500000) ? 5000 : 2000); // 신한 대중교통요금 최고 할인액
    int kbTransportMaxDiscount = (total < 200000) ? 0 : 2000;                              // 국민 대중교통요금 최고 할인액
    // 생활서비스
    double lifeDiscountRate = 0.02;                                                   // 2%
    int shLifeMaxDiscount = (total < 200000) ? 0 : ((total >= 500000) ? 5000 : 2000); // 신한 생활서비스 최고 할인액
    int kbLifeMaxDiscount = (total < 200000) ? 0 : 8000;                              // 국민 생활서비스 최고 할인액

    // int shTotalDiscount, kbTotalDiscount; // 예상 할인 금액

    // 신한 예상 할인 금액 계산
    int shTransportDiscount = transport * transportDiscountRate;
    if (shTransportDiscount > shTransportMaxDiscount)
        shTransportDiscount = shTransportMaxDiscount;

    int shLifeDiscount = life * lifeDiscountRate;
    if (shLifeDiscount > shLifeMaxDiscount)
        shLifeDiscount = shLifeMaxDiscount;

    int shTotalDiscount = shTransportDiscount + shLifeDiscount;
    double shTotalDiscountRate = shTotalDiscount * 100.0 / total;
    printf("신한 K-패스 체크카드의 예상 할인 금액은 %d원이며, 할인률은 %.2f%%입니다.\n", shTotalDiscount, shTotalDiscountRate);

    // 국민 예상 할인 금액 계산
    int kbTransportDiscount = transport * transportDiscountRate;
    if (kbTransportDiscount > kbTransportMaxDiscount)
        kbTransportDiscount = kbTransportMaxDiscount;

    int kbLifeDiscount = life * lifeDiscountRate;
    if (kbLifeDiscount > kbLifeMaxDiscount)
        kbLifeDiscount = kbLifeMaxDiscount;

    int kbTotalDiscount = kbTransportDiscount + kbLifeDiscount;
    double kbTotalDiscountRate = kbTotalDiscount * 100.0 / total;
    printf("국민 K-패스 체크카드의 예상 할인 금액은 %d원이며, 할인률은 %.2f%%입니다.\n", kbTotalDiscount, kbTotalDiscountRate);

    if (shTotalDiscount > kbTotalDiscount)
    {
        printf("따라서 신한 K-패스 체크카드가 나은 선택입니다.");
    }
    else if (shTotalDiscount < kbTotalDiscount)
    {
        printf("따라서 국민 K-패스 체크카드가 나은 선택입니다.");
    }
    else
    {
        printf("따라서 어느 것을 선택하셔도 혜택이 동일합니다.");
    }
}