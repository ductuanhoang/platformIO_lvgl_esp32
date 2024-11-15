/**
 *
 */

#ifndef DEVICE_DATA_H
#define DEVICE_DATA_H

#include "stdint.h"

#ifdef __cplusplus
extern "C"
{
#endif

    typedef enum
    {
        E_ITEM_NONE,
        E_ITEM_SHORT_PASS,
        E_ITEM_CANNON,
        E_ITEM_BUTLER_DELIVERY // Butler Delivery
    } e_items_slected;

    typedef struct
    {
        char item_name[20];
        char item_category[50]; // item type
        char item_manufacturer[20];
        char item_type[20];
        float item_abv;
    } item_data_t;

    typedef struct
    {
        e_items_slected item_selected;
        uint8_t item_count;
        item_data_t item_data;
    } device_data_t;
    extern device_data_t device_data;

    void device_data_init(void);
    void device_data_set_item_selected(e_items_slected item_selected);
    e_items_slected device_data_get_item_selected(void);
    void device_data_set_item_count(uint8_t item_count);
    uint8_t device_data_get_item_count(void);
#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif // #ifndef DEVICE_DATA_H
