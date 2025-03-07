


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/* int main(){

    //setlocale(0, "Ukrainian");
    //float num;
    //cout << "Введіть радіус окружності";
    //cin >> num;
    //const double PI = 3.141592653589793;
    //cout << "Довжина окружності" << 2 * PI * num;
    //cout << "Площа окружності" << PI * num * num;
     return 0;
 }  
*/

/*int main(){
    int a = 20;
    int b = 17;
    int temp;
    
    temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << "b = " << b << endl;
    
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " << a << "b = " << b << endl;
    return 0;
 }   

*/


/*int mine() {
    double sum;
    cout << "Введіть суму в гривнях: ";
    cin >> sum;

    int hryvna = floor(sum);
    int copiyky = round((sum - hryvna) * 100);
    cout << "Гривень" << hryvna << "Копійок" << copiyky << endl;

    return 0;
}
*/


/* int main() {
    int totalseconds;
    cout << "Введіть секунди" ;
    cin >> totalseconds;

    int hourse = totalseconds / 3600;
    int newseconds % 3600;

    int minutes = newseconds / 60;
    int seconds = newseconds % 60;
    cout << "Години" << hourse << "Хвилини" << minutes << "Секунди" << seconds << endl;
    return 0;
}
*/


/*int mine() {
    float start;
    cout << "Введіть час початку";
    cin >> start;

    float finish;
    cout << "Введіть час кінця";
    cin >> finish;
    float start_minutes = int(start) * 60 + (start - int(start)) * 100;
    float finish_minutes = int(finish) * 60 + (finish - int(finish)) * 100;

    float during = finish_minutes - start_minutes;
    double cost = during * 15;
    cout << "Вартість" << cost << endl;
     return 0;

}
*/


/*int mine() {
    float Earth;
    float Mercury;
    float Venus;
    float Mars;
    float Jupiter;
    float Saturn;
    float Uranus;
    float Neptune;
    cout << "Введіть масу Землі";
    cin >> Earth;
    cout << "Введіть масу Меркурію";
    cin >> Mercury;
    cout << "Введіть масу Венери";
    cin >> Venus;
    cout << "Введіть масу Марса";
    cin >> Mars;
    cout << "Введіть масу Юпітера";
    cin >> Jupiter;
    cout << "Введіть масу Сатурна";
    cin >> Saturn;
    cout << "Введіть масу Урана";
    cin >> Uranus;
    cout << "Введіть масу Нептуна";
    cin >> Neptune;


    double arithmetic_mean = (Earth + Mercury + Venus + Mars + Jupiter + Saturn + Uranus + Neptune) / 8;
    double total_mass = Earth + Mercury + Venus + Mars + Jupiter + Saturn + Uranus + Neptune;

    cout << "Відсоткова маса планет:" << endl;
    cout << "Меркурій: " << (Mercury / total_mass) * 100 << "%" << endl;
    cout << "Венера: " << (Venus / total_mass) * 100 << "%" << endl;
    cout << "Земля: " << (Earth / total_mass) * 100 << "%" << endl;
    cout << "Марс: " << (Mars / total_mass) * 100 << "%" << endl;
    cout << "Юпітер: " << (Jupiter / total_mass) * 100 << "%" << endl;
    cout << "Сатурн: " << (Saturn / total_mass) * 100 << "%" << endl;
    cout << "Уран: " << (Uranus / total_mass) * 100 << "%" << endl;
    cout << "Нептун: " << (Neptune / total_mass) * 100 << "%" << endl;

    double sum_other = total_mass - Jupiter;
    double mass = Jupiter / sum_other;

    cout << "Маса Юпітера більша за суму всіх інших планет у " << mass << " разів." << endl;
     return 0;
}

*/


/*int mine() {
    int num1;
    cout << "Введіть перше трьохзначне число";
    cin >> num1;

    int num2;
    cout << "Введіть дурге троьхзначне число";
    cin >> num2;

    int hun1 = num1 / 100;
    int ten1 = (hun1 / 10)%10;
    int one1 = ten1 % 10;

    int hun = num2 / 100;
    int ten = (hun / 10)%10;
    int one = ten % 10;

    int new_num1 = hun1 * 100 + ten * 10 + one1;
    int new_num2 = hun * 100 + ten1 * 10 + one;

    cout << "Нове перше число: " << new_num1 << endl;
    cout << "Нове друге число: " << new_num2 << endl;
     return 0;
}
*/

int mine() {
    int N;
    int M;
    int G;
    int X;
    cout << "Введіть кількість курей";
    cin >> N;
    cout << "Введіть вартість однієї курки";
    cin >> M;
    cout << "Введіть кількість яєць на тиждень однієї курки";
    cin >> X;
    cout << "Введіть ціну за десяток яєць";
    cin >> G;


    int total_sum = M * N;
    float total_eggs = (X * N) / 10 * G;

    float weeks = total_eggs / 7;

    float income = total_sum / weeks;

    cout << "Дохід" << income << endl;



}