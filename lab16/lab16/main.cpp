#include "FST.h"
#include <iostream>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    setlocale(LC_ALL, "rus");
    FST::FST fst1(
        "abblclbbbbf",
        9,

        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('l', 2)),
        FST::NODE(2, FST::RELATION('l', 6), FST::RELATION('c', 3)),
        FST::NODE(3, FST::RELATION('d', 4), FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('d', 4), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('l', 2), FST::RELATION('b', 7)),
        FST::NODE(2, FST::RELATION('b', 7), FST::RELATION('f', 8)),
        FST::NODE()
    );
    if (FST::execute(fst1))
    {
        std::cout << "Цепочка: " << fst1.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst1.string << " не распознана" << std::endl;
    }

    FST::FST fst2(
        "abllbbf",
        9,

        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('l', 2)),
        FST::NODE(2, FST::RELATION('l', 6), FST::RELATION('c', 3)),
        FST::NODE(3, FST::RELATION('d', 4), FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('d', 4), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('l', 2), FST::RELATION('b', 7)),
        FST::NODE(2, FST::RELATION('b', 7), FST::RELATION('f', 8)),
        FST::NODE()
    );
    if (FST::execute(fst2)) 
    {
        std::cout << "Цепочка: " << fst2.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst2.string << " не распознана" << std::endl;
    }

    FST::FST fst3(
        "abbblcdddllclbbbf",
        9,

        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('l', 2)),
        FST::NODE(2, FST::RELATION('l', 6), FST::RELATION('c', 3)),
        FST::NODE(3, FST::RELATION('d', 4), FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('d', 4), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('l', 2), FST::RELATION('b', 7)),
        FST::NODE(2, FST::RELATION('b', 7), FST::RELATION('f', 8)),
        FST::NODE()
    );
    if (FST::execute(fst3))
    {
        std::cout << "Цепочка: " << fst3.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst3.string << " не распознана" << std::endl;
    }

    FST::FST fst4(
        "alcddllclbf",
        9,

        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('l', 2)),
        FST::NODE(2, FST::RELATION('l', 6), FST::RELATION('c', 3)),
        FST::NODE(3, FST::RELATION('d', 4), FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('d', 4), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('l', 2), FST::RELATION('b', 7)),
        FST::NODE(2, FST::RELATION('b', 7), FST::RELATION('f', 8)),
        FST::NODE()
    );
    if (FST::execute(fst4))
    {
        std::cout << "Цепочка: " << fst4.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst4.string << " не распознана" << std::endl;
    }

    FST::FST fst5(
        "abbblcddddllcddllceelbbbbf",
        9,

        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('l', 2)),
        FST::NODE(2, FST::RELATION('l', 6), FST::RELATION('c', 3)),
        FST::NODE(3, FST::RELATION('d', 4), FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('d', 4), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('l', 2), FST::RELATION('b', 7)),
        FST::NODE(2, FST::RELATION('b', 7), FST::RELATION('f', 8)),
        FST::NODE()
    );
    if (FST::execute(fst5))
    {
        std::cout << "Цепочка: " << fst5.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst5.string << " не распознана" << std::endl;
    }

    FST::FST fst6(
        "alllcdllcdlbbf",
        9,

        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('l', 2)),
        FST::NODE(2, FST::RELATION('l', 6), FST::RELATION('c', 3)),
        FST::NODE(3, FST::RELATION('d', 4), FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('d', 4), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('l', 2), FST::RELATION('b', 7)),
        FST::NODE(2, FST::RELATION('b', 7), FST::RELATION('f', 8)),
        FST::NODE()
    );
    if (FST::execute(fst6))
    {
        std::cout << "Цепочка: " << fst6.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst6.string << " не распознана" << std::endl;
    }

    FST::FST fst7(
        "ablcdllcelbf",
        9,

        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('l', 2)),
        FST::NODE(2, FST::RELATION('l', 6), FST::RELATION('c', 3)),
        FST::NODE(3, FST::RELATION('d', 4), FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('d', 4), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('l', 2), FST::RELATION('b', 7)),
        FST::NODE(2, FST::RELATION('b', 7), FST::RELATION('f', 8)),
        FST::NODE()
    );
    if (FST::execute(fst7))
    {
        std::cout << "Цепочка: " << fst7.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst7.string << " не распознана" << std::endl;
    }

    FST::FST fst8(
        "Mabbdclf",
        9,

        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('l', 2)),
        FST::NODE(2, FST::RELATION('l', 6), FST::RELATION('c', 3)),
        FST::NODE(3, FST::RELATION('d', 4), FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('d', 4), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('l', 2), FST::RELATION('b', 7)),
        FST::NODE(2, FST::RELATION('b', 7), FST::RELATION('f', 8)),
        FST::NODE()
    );
    if (FST::execute(fst8))
    {
        std::cout << "Цепочка: " << fst8.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst8.string << " не распознана" << std::endl;
    }

    FST::FST fst9(
        "ablccldf",
        9,

        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(2, FST::RELATION('b', 1), FST::RELATION('l', 2)),
        FST::NODE(2, FST::RELATION('l', 6), FST::RELATION('c', 3)),
        FST::NODE(3, FST::RELATION('d', 4), FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('d', 4), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('e', 5), FST::RELATION('l', 6)),
        FST::NODE(2, FST::RELATION('l', 2), FST::RELATION('b', 7)),
        FST::NODE(2, FST::RELATION('b', 7), FST::RELATION('f', 8)),
        FST::NODE()
    );
    if (FST::execute(fst9))
    {
        std::cout << "Цепочка: " << fst9.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst9.string << " не распознана" << std::endl;
    }
    system("pause");
    return 0;
}
