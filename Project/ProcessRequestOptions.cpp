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