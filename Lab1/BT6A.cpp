#include <iostream>
#include <vector>
using namespace std;
#define N (long long)(1e6)

long long n, m, A[N + 5], B[N + 5];
vector<int> pos; //Luu tru cac vi tri xuat hien cua mang A trong mang B

int main() {
    //Nhap kich thuoc va gia tri cho mang A va B
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < m; i++)
        cin >> B[i];

    //Duyet qua tung vi tri cua mang B de kiem tra xem mang A co xuat hien tai vi tri do hay khong
    for (int i = 0; i < m - n + 1; i++)
        //Su dung ham memcmp de so sanh n phan tu tu A va B bat dau tu vi tri i
        if (!(memcmp(&A[0], &B[i], n * 8)))
            pos.push_back(i);

    //In ra so luong vi tri ma mang A xuat hien trong mang B
    printf("%lld\n", pos.size());

    //In ra cac vi tri cu the
    for (int i = 0; i < pos.size(); i++)
        cout << pos[i] << " ";
}
