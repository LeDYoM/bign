#ifndef BIGN_HPP
#define BIGN_HPP

#include "lbign_global.h"
#include <vector>

class LBIGNSHARED_EXPORT BigN
{

public:
    explicit BigN();
    explicit BigN(const QString &str);
private:
    constexpr int s = sizeof(unsigned int);
    std::vector<unsigned int> m_data;
};

#endif // BIGN_HPP
