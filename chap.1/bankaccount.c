#include <stdio.h>

//은행 계좌를 추상 자료형으로 선언한 예

class bankaccount{
    //아래 네가지는 계좌객체의 속성 (property)
    int account_id;
    int account_type;
    char owner_name[20];
    float balance = 0;

    deposit(amount)//입금 : 이 객체의 연산자 (operation, behavior)
    {
        balance = balance+amount;
    }
    withdraw(amount)//출금 : 이 객체의 연산자
    {
        balance = balance-amount;
    }
    init(name, type, money)
    //객체를 생성하는 연산자, 인자들로 객체 속성값 초기화
    //이 추상 자료형을 이용하여 myaccount라는 객체가 초기값으로 생성된다
    {
        owner_name = name;
        account_type = type;
        deposit(money);
    }
}

BankAccount myaccount("Lee", "checking", "100000");