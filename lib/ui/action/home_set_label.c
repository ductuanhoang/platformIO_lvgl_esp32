/**
 *
 */

/***********************************************************************************************************************
 * Pragma directive
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes <System Includes>
 ***********************************************************************************************************************/
#include "action.h"
#include "ui.h"
#include "common_config.h"
/***********************************************************************************************************************
 * Macro definitions
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * Typedef definitions
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * Private global variables and functions
 ***********************************************************************************************************************/
// SCREEN: home screen
static uint8_t home_screen_load_items_value(void);
static uint8_t home_screen_load_items_cannon_value(void);
static uint8_t home_screen_load_items_delivery_value(void);
/***********************************************************************************************************************
 * Exported global variables and functions (to be accessed by other files)
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * Imported global variables and functions (from other files)
 ***********************************************************************************************************************/

// SCREEN: home screen
void home_screen_set_lable_value(void)
{
    uint8_t number_items = 0;
    number_items = home_screen_load_items_value();
    char str[20];
    sprintf(str, "%d items", number_items);
    // set text short pass
    lv_label_set_text(ui_Label15, str);
    memset(str, 0, sizeof(str));
    // set text cannon
    number_items = home_screen_load_items_cannon_value();
    sprintf(str, "%d items", number_items);
    lv_label_set_text(ui_Label4, str);
    memset(str, 0, sizeof(str));
    // set text delivery
    number_items = home_screen_load_items_delivery_value();
    sprintf(str, "%d items", number_items);
    lv_label_set_text(ui_Label29, str);
    memset(str, 0, sizeof(str));
}

/***********************************************************************************************************************
 * static functions
 ***********************************************************************************************************************/
static uint8_t home_screen_load_items_shortPass_value(void)
{
    uint8_t number_items = 0;
    return number_items;
}

static uint8_t home_screen_load_items_cannon_value(void)
{
    uint8_t number_items = 0;
    return number_items;
}

static uint8_t home_screen_load_items_delivery_value(void)
{
    uint8_t number_items = 0;
    return number_items;
}
/***********************************************************************************************************************
 * End of file
 ***********************************************************************************************************************/