#include "iostream"
#include "Sales_item.h"

void pr1_20()
{
    /*
     * 练习1.20: 读取一组书籍销售记录，将每条记录打印到标准输出上
     */
    std::cout << "------练习1.20-------\n";
    Sales_item book;
    std::cout << "请输入ISBN、售出本数、总销售额：";
    std::cin >> book;
    std::cout << "    ISBN      |售出本数|销售额|平均售价\n" << book << std::endl;
    std::cout << "--------------------\n";
}

void pr1_21()
{
    /*
     * 读取两个ISBN相同的Sails_item对象，输出他们的和
     */
    Sales_item item1, item2;
    std::cout << "输入两组ISBN、售出本数、总销售额：\n";
    std::cin >> item1 >> item2;
    if (compareIsbn(item1, item2))
        std::cout << "    ISBN      |售出本数|销售额|平均售价\n" << item1 + item2 << std::endl;
    else
        std::cout << "两本书的ISBN不相同！\n";
}

int main()
{
    //pr1_20();
    //pr1_21();

    return  0;
}