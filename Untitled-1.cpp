#include <iostream>
using namespace std;


char choice;
string firstPersonName;
string secondPersonName;
string firstChoice;
string secondChoice;

void title(){
    cout << "*******************************************************" << endl;
    cout << "  이 프로그램은 가위바위보 게임입니다." << endl;
    cout << "  학번 : 2021810076, 이름 : 황건수" << endl;
    cout << "*******************************************************" << endl;
    cout << "  이 프로그램의 진행순서는 다음과 같습니다. " << endl;
    cout << "     1단계)  두 사람의 이름을 입력받습니다. " << endl;
    cout << "     2단계)  각 사람의 선택을 차례대로 입력받습니다." << endl;
    cout << "*******************************************************" << "\n" << endl;
    
}

void getTwoPersonName(){
    cout << "첫번째 사람의 이름을 입력하시오 : ";
    cin >> firstPersonName;
    cout << "두번째 사람의 이름을 입력하시오 : ";
    cin >> secondPersonName;
    cout << "\n" << endl;
}

void getTwoPersonChoice(){
    cout firstPersonName << "의 선택은 (가위/바위/보) 중 무엇입니까? : ";
    cin >> firstChoice;
    cout secondPersonName << "의 선택은 (가위/바위/보) 중 무엇입니까? : ";
    cin >> firstChoice;

}

void gameResult(){
    if((firstChoice=="가위"&&secondChoice=="바위")||(firstChoice=="바위"&&secondChoice=="보")||(firstChoice=="보"&&secondChoice=="가위"))
        cout << secondPersonName << "이(또는가) 이겼습니다."<<endl;
    else if((firstChoice=="가위"&&secondChoice=="보")||(firstChoice=="바위"&&secondChoice=="가위")||(firstChoice=="보"&&secondChoice=="바위"))
        cout << firstPersonName << "이(또는가) 이겼습니다."<<endl;
    else if(firstChoice==secondChoice)
        cout << firstPersonName << "와(또는 과)" << secondPersonName <<"은(또는 는) 비겼습니다." << endl;

}

char getChoice(){
    cout << "게임을 계속하고싶으면 Y(y)를," << endl;
    cout << "     끝내고 싶으면 Q(q)를 입력하시오 : ";
    cin >> choice;
    return choice;
}

int main(void)
{

    title();
    getTwoPersonName();
	
    choice = 'Y';
    while(true) 
    {
        if((choice == 'Q') or (choice == 'q')) {
            cout << endl; 
            cout << firstPersonName << " 와(또는 과) "  ;
            cout << secondPersonName << " 의 가위바위보 게임을 종료합니다.";
            cout  << endl ;
            break ; 
        }
        else if ((choice == 'Y') or (choice == 'y')) {
            getTwoPersonChoice();
            gameResult();
            choice = getChoice();
            continue;
        }
        else continue;
    }
    return 0;
} // End of main()