#ifndef SDDS_STATION_H
#define SDDS_STATION_H

/* system's library */
#include <iostream>

using namespace std;

namespace sdds
{
    class Station
    {
        int s_id{ 0 };
        string s_itemname{ "" };
        string s_description{ "" };
        size_t s_serialno{ 0u };
        size_t s_stkitems{ 0u };

        static size_t m_widthField;
        static size_t id_generator;

    public:
        Station(const string& s);
        const string& getItemName() const;
        size_t getNextSerialNumber();
        size_t getQuantity() const;
        void updateQuantity();
        void display(ostream& os, bool full) const;
    };
}
#endif 