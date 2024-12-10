#pragma once
#include "Nong.h"
#include "Phinong.h"
#include <vector>
#include <iomanip>
#include <map>
#include <set>

class QuanLi
{
    private:
        map <string, float> Thue;
        set <pair<string, string>> Nguoidan;
        vector <pair<SoHong*, int>> So;
        float Thuemax;
        int Sothuemax;
    public:
        QuanLi();
        void Nhap();
        void TinhThue();
        void Timhethan();
};
