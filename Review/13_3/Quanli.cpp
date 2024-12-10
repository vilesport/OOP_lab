#include "Quanli.h"

QuanLi::QuanLi()
{
    Thue.clear();
    Nguoidan.clear();
    So.clear();
    Thuemax = 0;
    Sothuemax = 0;
}

void QuanLi::Nhap()
{
    int n;
    cout << "Nhap so luong giay chung nhan: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int loai = 0;
        SoHong* moi = NULL;
        while (loai != 1 && loai != 2)
        {
            cout << "Thong tin so thu " << i + 1 << "\n";
            cout << "Nhap loai so (1: Nong nghiep | 2: Phi nong nghiep): ";
            cin >> loai;
            switch (loai)
            {
            case 1:
                moi = new Nong();
                break;
            case 2:
                moi = new PhiNong();
                break;
            default:
                cout << "Khong hop le\n";
                break;
            }
        }
        moi->Nhap();
        So.push_back({ moi, loai });
        Nguoidan.insert({ moi->GetTen(), moi->GetCMND() });
        Thue[moi->GetCMND()] += moi->Tinhthue();
        if (moi->Tinhthue() > Thuemax)
        {
            Sothuemax = i;
            Thuemax = moi->Tinhthue();
        }
    }
}
void QuanLi::TinhThue()
{
    cout << "==============================================\n";
    cout << "So tien thue moi nguoi phai dong cho nha nuoc:\n";
    for (auto i : Nguoidan)
    {
        cout << "Ho ten: " << i.first << "\n";
        cout << "CMND: " << i.second << "\n";
        cout << "Dong thue: " << setprecision(2) << fixed << Thue[i.second] << "\n";
    }
    cout << "==============================================\n";
    cout << "Thua dat co tien thue phai dong nhieu nhat la:\n";
    So[Sothuemax].first->Xuat();
    cout << "Tien thue phai dong: " << setprecision(2) << fixed << Thuemax << "\n";
}

void QuanLi::Timhethan()
{
    cout << "==============================================\n";
    bool hethan = false;
    cout << "Thong tin cac so dat nong nghiep da het han su dung la:\n";
    for (int i = 0; i < So.size(); i++)
    {
        if (So[i].second == 2)
            continue;
        Nong* nong = dynamic_cast<Nong*>(So[i].first);
        if (nong->Getthoihan() < 2024)
        {
            hethan = true;
            nong->Xuat();
        }
    }
    if (!hethan)
        cout << "Khong co so dat nong nghiep nao het han\n";
}