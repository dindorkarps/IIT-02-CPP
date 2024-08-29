#include <iostream>
using namespace std;
#include "../include/menu.h"
#include "../include/menuoptions.h"
#include "../include/maintainance.h"
#include "../include/oil.h"
#include "../include/bill.h"

void mainMenuOptions(ServiceStation &serviceStation)
{
	serviceStation.loadCustomerDetails();
	// serviceStation.displayCustomerList();
	E_Menu choice;
	while ((choice = mainMenu()) != EXIT)
	{
		switch (choice)
		{
		case NEWCUSTOMER:
			serviceStation.newCustomer();
			break;
		case NEWSERVICEREQUEST:
			subMenuServiceRequestOptions(serviceStation);
			break;
		case TODAYSBUSINESS:
			todaysBusiness(serviceStation.getBillList());
			break;
		case TOTALBUSINESS:
			totalBusiness();
			break;
		default:
			cout << "Wrong Choice entered..Please enter once again.." << endl;
			break;
		}
	}
}

void subMenuServiceRequestOptions(ServiceStation &serviceStation)
{
	Customer *customer = NULL;
	E_SubMenuServiceRequest choice;
	string vehicleNumber = "";
	ServiceRequest *serviceRequest = NULL;
	Bill *bill = NULL;
	while ((choice = subMenuServiceRequest()) != E_Menu::EXIT)
	{
		switch (choice)
		{
		case EXISTINGCUSTOMER:
			customer = serviceStation.findCustomer();
			if (customer != NULL)
			{
				cout << "Customer Found - " << customer->getName() << endl;
				customer->getVehList().clear();
				customer->loadVehicleDetails();
			}
			else
				cout << "Customer Not Found :( " << endl;

			break;
		case DISPLAYVEHICAL:
			if (customer != NULL)
			{
				customer->diplayVehicles();
			}
			else
				cout << "Select Customer first" << endl;
			break;
		case CHOOSE_INPUT_VEHICAL:
			if (customer != NULL)
				vehicleNumber = subMenuChooseVehicalOptions(customer);
			else
				cout << "Select Customer first" << endl;
			break;
		case PROCESSREQUEST:
			if (vehicleNumber != "")
			{
				serviceRequest = new ServiceRequest(customer->getMobile(), vehicleNumber);
				subMenuProcessRequestOptions(serviceRequest);
			}
			else
				cout << "Select Vehicle first" << endl;
			break;
		case PREPARE_DISPLAY_BILL:
			if (serviceRequest != NULL)
			{
				bill = new Bill(serviceRequest);
				cout << "**************" << serviceStation.getName() << "**************" << endl;
				bill->print();
			}
			else
				cout << "Process a request first..." << endl;
			break;
		case GETPAYMENT:
			if (bill != NULL)
			{
				double paidAmount;
				cout << "Bill amount to Pay - " << bill->getAmount() << endl;
				cout << "Enter the amount paid by the customer - ";
				cin >> paidAmount;
				bill->setPaidAmount(paidAmount);
				serviceStation.getBillList().push_back(*bill);
				cout << "Bill Paid ..." << endl;
				bill->storeBill();
				delete bill;
				bill = NULL;
				return;
			}
			else
				cout << "No bills pending generate one first ..." << endl;

			break;
		default:
			cout << "Wrong Choice entered..Please enter once again.." << endl;
			break;
		}
	}
}

string subMenuChooseVehicalOptions(Customer *customer)
{
	E_SubMenuChooseVehical choice;
	string vehicleNumber = "";
	while ((choice = subMenuChooseVehicle()) != E_Menu::EXIT)
	{
		switch (choice)
		{
		case CHOOSE_VEHICAL:
			customer->diplayVehicles();
			cout << "Enter vehicle number - ";
			cin >> vehicleNumber;
			for (int i = 0; i < customer->getVehList().size(); i++)
			{
				if (customer->getVehList()[i].getNumber() == vehicleNumber)
					return vehicleNumber;
			}
			return "";

			break;
		case INPUT_VEHICAL:
			vehicleNumber = customer->newVehicle()->getNumber();
			return vehicleNumber;
			break;
		default:
			cout << "Wrong Choice entered..Please enter once again.." << endl;
			break;
		}
	}
}
void subMenuProcessRequestOptions(ServiceRequest *serviceRequest)
{
	E_SubMenuProcessRequest choice;
	Service *service = NULL;
	while ((choice = subMenuProcessRequest()) != E_Menu::EXIT)
	{
		switch (choice)
		{
		case MAINTAINANCE:
			service = new Maintainance();
			break;
		case REPARING:
			service = new Maintainance();
			((Maintainance *)service)->addPart();
			break;
		case OILCHANGE_ADDITIVES:
			service = new Oil();
			break;
		default:
			cout << "Wrong Choice entered..Please enter once again.." << endl;
			break;
		}
		if (service != NULL)
		{
			service->input();
			serviceRequest->getServiceList().push_back(service);
		}
	}
}
void todaysBusiness(list<Bill> &billList)
{
	double total = 0;
	for (list<Bill>::iterator it = billList.begin(); it != billList.end(); it++)
		total += it->getPaidAmount();
	cout << "Todays Business - " << total << endl;
}
void totalBusiness()
{
	double billTotal = 0;
	double paidTotal = 0;
	string data;
	string amount, paidAmount;
	ifstream fin("../datafiles/bill.txt");
	while (getline(fin, data))
	{
		stringstream line(data);
		getline(line, amount, ',');
		getline(line, paidAmount, ',');
		billTotal += stod(amount);
		paidTotal += stod(paidAmount);
	}
	fin.close();
	cout << "******************************" << endl;
	cout << "Total Business - " << endl;
	cout << "Total Billed Amount - " << billTotal << endl;
	cout << "Total Paid Amount - " << paidTotal << endl;
	cout << "******************************" << endl;
}