#ifndef MENU_H
#define MENU_H
enum E_Menu
{
    EXIT,
    NEWCUSTOMER,
    NEWSERVICEREQUEST,
    TODAYSBUSINESS,
    TOTALBUSINESS
};

enum E_SubMenuServiceRequest
{
    EXISTINGCUSTOMER = 1,
    DISPLAYVEHICAL,
    CHOOSE_INPUT_VEHICAL,
    PROCESSREQUEST,
    PREPARE_DISPLAY_BILL,
    GETPAYMENT
};

enum E_SubMenuChooseVehical
{
    CHOOSE_VEHICAL = 1,
    INPUT_VEHICAL
};

enum E_SubMenuProcessRequest
{
    MAINTAINANCE = 1,
    REPARING,
    OILCHANGE_ADDITIVES
};

E_Menu mainMenu();
E_SubMenuServiceRequest subMenuServiceRequest();
E_SubMenuChooseVehical subMenuChooseVehicle();
E_SubMenuProcessRequest subMenuProcessRequest();

#endif