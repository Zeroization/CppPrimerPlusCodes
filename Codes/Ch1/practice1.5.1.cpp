#include "iostream"
#include "Sales_item.h"

void pr1_20()
{
    /*
     * ��ϰ1.20: ��ȡһ���鼮���ۼ�¼����ÿ����¼��ӡ����׼�����
     */
    std::cout << "------��ϰ1.20-------\n";
    Sales_item book;
    std::cout << "������ISBN���۳������������۶";
    std::cin >> book;
    std::cout << "    ISBN      |�۳�����|���۶�|ƽ���ۼ�\n" << book << std::endl;
    std::cout << "--------------------\n";
}

void pr1_21()
{
    /*
     * ��ȡ����ISBN��ͬ��Sails_item����������ǵĺ�
     */
    Sales_item item1, item2;
    std::cout << "��������ISBN���۳������������۶\n";
    std::cin >> item1 >> item2;
    if (compareIsbn(item1, item2))
        std::cout << "    ISBN      |�۳�����|���۶�|ƽ���ۼ�\n" << item1 + item2 << std::endl;
    else
        std::cout << "�������ISBN����ͬ��\n";
}

int main()
{
    //pr1_20();
    //pr1_21();

    return  0;
}