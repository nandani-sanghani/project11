#ifndef SDDS_CUSTOMERORDER_H
#define SDDS_CUSTOMERORDER_H

/* system's library */
#include <iostream>

/* user's library */
#include "Station.h"

using namespace std;

namespace sdds
{
    struct Item 
    {
        string m_itemName;
        size_t m_serialNumber{0};
        bool m_isFilled{false};
        Item(const string& src) : m_itemName(src) {};
    };

    class CustomerOrder
    {
        string m_name{""};    
        string m_product{""};  
        size_t m_cntItem{0u};       
        Item** m_lstItem{nullptr}; 
        static size_t m_widthField;     
    public:
        CustomerOrder() {};
        CustomerOrder(const string& co);
        CustomerOrder(const CustomerOrder& co); 
        CustomerOrder& operator=(const CustomerOrder& co) = delete;
        CustomerOrder(CustomerOrder&& co) noexcept;
        CustomerOrder& operator=(CustomerOrder&& co) noexcept;
        ~CustomerOrder();
        bool isOrderFilled() const;
        bool isItemFilled(const string& itemName) const;
        void fillItem(Station& station, ostream& os);
        void display(ostream& os) const;
    };
}
#endif // !SDDS_CUSTOMERORDER_H