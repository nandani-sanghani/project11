#ifndef SDDS_UTILITIES_H
#define SDDS_UTILITIES_H

/* system's library */
#include <iostream>

using namespace std;

namespace sdds
{
    class Utilities
    {
        size_t m_widthField{ 1u };
        static char m_delimiter;
    public:
        void setFieldWidth(size_t newWidth);
        size_t getFieldWidth() const;
        string extractToken(const string& str, size_t& next_pos, bool& more);
        static void setDelimiter(char newDelimiter);
        static char getDelimiter();
    };
}
#endif 