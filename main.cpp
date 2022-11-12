#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

struct node_Supply
{
	string status;
	string itemName;
	float quntityGram;
	int quntityItem;
	string origin;
	string Date1;
	string Date2;
	char localOrImported;
	string vehicle;
	node_Supply* next_Supply;
	node_Supply() : next_Supply(NULL), status("PENDING"),itemName("-"), quntityGram(0), quntityItem(0), origin(" "), Date1(" "), Date2(" "), localOrImported('-') {}
};

class linked_list_Supply
{
protected:
	node_Supply * head_Supply, * tail_Supply;

public:
	linked_list_Supply() :head_Supply(NULL), tail_Supply(NULL) {}

	void SavSupply() {
		node_Supply* tmp;
		tmp = head_Supply;
		ofstream output;
		char file[20];
		char input;

		cout << endl << "Save Supply Data? (Y)/(N): ";
		cin >> input;

		if ((input == 'y') || (input == 'Y')) {
			cout << endl << "Save as: ";
			cin >> file;
			output.open(file);//open - function, file - name/char array
			output << " ODER OF THE BELLOW DETAILS : STATUS , ITEM_NAME , QUNTITY(GRAM) , QUNTITY(ITEM) , ORIGIN , DATE1 , DATE2 , LOCAL/IMPORTED , VEHICLE " << endl<<endl;
			output << " IF LOCAL - DATE1 = DATE OF DEPARTURE FROM FACTORY/FARM " << endl;
			output << " IF LOCAL - DATE2 = DATE OF ARRIVAL TO THE SUPPERMARKET " << endl;
			output << " IF LOCAL - ORIGIN = NAME OF FACTORY/FARM " << endl;
			output << " IF LOCAL - VEHICLE = VEHICLE NUMBER " << endl<<endl;
			output << " IF IMPORTED - DATE1 = DATE ARRIVED AT LOCAL HARBOUR " << endl;
			output << " IF IMPORTED - DATE2 = DATE TRANSPORTED TO THE STORE " << endl;
			output << " IF IMPORTED - ORIGIN = NAME OF COUNTRY " << endl;
			output << " IF IMPORTED - VEHICLE = SHIP NUMBER " << endl << endl;
			while (tmp != NULL)
			{
				output << tmp->status<<","<<tmp->itemName << "," << tmp->quntityGram << "," << tmp->quntityItem << "," << tmp->origin <<
					"," << tmp->Date1 << "," << tmp->Date2 << "," << tmp->localOrImported << "," << tmp->vehicle;
				output << endl;
				tmp = tmp->next_Supply;
			}
			cout << endl;
			cout << "Supply data has been saved to" << "\"" << file << "\"" << endl;
			output.close();
		}
	}
};

struct node_Stock
{
	string itemName;
	float quntityGram;
	int quntityItem;
	float retialPrice;
	float Discount;
	float Promotion;
	string brand;
	char localOrImported;
	node_Stock* next_Stock;
	node_Stock() : next_Stock(NULL), itemName("-"), quntityGram(0), quntityItem(0), retialPrice(0), Discount(0), Promotion(0), brand("-"), localOrImported('-') {}
};

class linked_list_Stock
{
protected:
	node_Stock* head_Stock, * tail_Stock;

public:
	linked_list_Stock() :head_Stock(NULL), tail_Stock(NULL) {}

	void SaveStock() {
		node_Stock* tmp;
		tmp = head_Stock;
		ofstream output;
		char file[20];
		char input;

		cout << endl << "Save Stock Data? (Y)/(N): ";
		cin >> input;

		if ((input == 'y') || (input == 'Y')) {
			cout << endl << "Save as: ";
			cin >> file;
			output.open(file);
			output << " ODER OF THE BELLOW DETAILS :  ITEM_NAME , QUNTITY(GRAM) , QUNTITY(ITEM) , RETIAL_PRICE , DISCOUNT , PROMOTION , LOCAL/IMPORTED , BRAND " << endl;
			while (tmp != NULL)
			{
				output << tmp->itemName << "," << tmp->quntityGram << "," << tmp->quntityItem << "," << tmp->retialPrice <<
					"," << tmp->Discount << "," << tmp->Promotion << "," << tmp->localOrImported << "," << tmp->brand;
				output << endl;
				tmp = tmp->next_Stock;
			}
			cout << endl;
			cout << "Stock data has been saved to" << "\"" << file << "\"" << endl;
			output.close();
		}
	}
};

struct node_Transaction
{
	int countTrans;
	string Customer;
	string itemName;
	float quntityGram;
	int quntityItem;
	float retialPrice;
	float finalPrice;
	float Discount;
	float Promotion;
	string brand;
	char localOrImported;
	node_Transaction* next_Transaction;
	node_Transaction() :next_Transaction(NULL), countTrans(0),Customer("-"), itemName("-"), quntityGram(0), quntityItem(0), retialPrice(0), finalPrice(0), Discount(0), Promotion(0), brand("-"), localOrImported('-') {}
};


class linked_list_Transaction
{
protected:
	node_Transaction* head_Transaction, * tail_Transaction;


public:
	linked_list_Transaction() :head_Transaction(NULL), tail_Transaction(NULL) {}

	void SaveTransaction() {
		node_Transaction* tmp;
		tmp = head_Transaction;
		ofstream output;
		char file[20];
		char input;

		cout << endl << "Save Transaction Data? (Y)/(N): ";
		cin >> input;

		if ((input == 'y') || (input == 'Y')) {
			cout << endl << "Save as: ";
			cin >> file;
			output.open(file);
			output << " ODER OF THE BELLOW DETAILS : CUSTOMER_NAME ,  ITEM_NAME , QUNTITY(GRAM) , QUNTITY(ITEM) , RETIAL_PRICE , DISCOUNT , PROMOTION , FINAL_PRICE , LOCAL/IMPORTED , BRAND " << endl;
			while (tmp != NULL)
			{
				output << tmp->Customer << "," << tmp->itemName << "," << tmp->quntityGram << "," << tmp->quntityItem << "," << tmp->retialPrice <<
					"," << tmp->Discount << "," << tmp->Promotion << "," << tmp->finalPrice << "," << tmp->localOrImported << "," << tmp->brand;
				output << endl;
				tmp = tmp->next_Transaction;
			}
			cout << endl;
			cout << "Transaction data has been saved to" << "\"" << file << "\"" << endl;
			output.close();
		}
	}
};


struct node_Staff
{
	string userName;
	string password;
	string fullName;
	string position;
	string joinDate;
	node_Staff* next_Staff;
	node_Staff() :next_Staff(NULL) {}
};

class linked_list_Staff
{
protected:
	node_Staff* head_Staff, * tail_Staff;

public:
	linked_list_Staff() :head_Staff(NULL), tail_Staff(NULL) {}

	void SaveStaff() {
		node_Staff* tmp;
		tmp = head_Staff;
		ofstream output;
		char file[20];
		char input;

		cout << endl << "Save Staff Data? (Y)/(N): ";
		cin >> input;

		if ((input == 'y') || (input == 'Y')) {
			cout << endl << "Save as: ";
			cin >> file;
			output.open(file);
			output << " ODER OF THE BELLOW DETAILS : USER_NAME , PASSWORD , FULLNAME , POSITION , JOINDATE" << endl;
			while (tmp != NULL)
			{
				output << tmp->userName << "," << tmp->password << "," << tmp->fullName << "," << tmp->position << "," << tmp->joinDate;
				output << endl;
				tmp = tmp->next_Staff;
			}
			cout << endl;
			cout << "Staff data has been saved to" << "\"" << file << "\"" << endl;
			output.close();
		}
	}

	char login()
	{
		bool ok = 0;
		while (ok != 1)
		{
			node_Staff* tmp;
			tmp = head_Staff;
			string Uname, pw;
			cout << "\n\n\n\t\t_____________WELCOME____________\n\n";
			cout << "\t\tPlease Enter Your Login Details,\n\n";
			cout << "\t\tUSERNAME : ";
			cin >> Uname;
			cout << "\t\tPASSWORD : ";
			cin >> pw;
			cout << endl;
			while (tmp != NULL)
			{
				if (tmp->userName == Uname)
				{
					if (tmp->password == pw)
					{
						system("CLS");
						if (tmp->position == "OWNER")
							return 'O';
						else if (tmp->position == "MANAGER")
							return 'M';
						if (tmp->position == "CASHIER")
							return 'C';
						if (tmp->position == "FLOORWORKER")
							return 'F';
					}

				}
				tmp = tmp->next_Staff;
			}
			system("CLS");
			cout << endl;
			cout << "\t\t\tERROR : Invalid input.";
			ok = 0;
		}
	}
};

class Cashier : virtual public linked_list_Stock, public linked_list_Transaction
{
public:
	void trans(int cn, int nof)
	{
		cout << "DONT USE SPACE. USE UNDERSCORE(_) FOR IT." << endl;
		string customer;
		if (cn == 0)
		{
			cout << "\nEnter customer name : ";
			cin >> customer;
		}
		cn = 0;
		char iType;
		string iName;
		float qunGram = 0;
		int qunItem = 0;
		float rp;
		float dis;
		float pro;
		string bnd;
		char LocalOrImported = NULL;
		string customerName;
		cout << "\n item types,";
		cout << "\n1 . Fruits and Vegetbles";
		cout << "\n2 . Meat and sea food";
		cout << "\n3 . Grains";
		cout << "\n4 . Bakery Foods";
		cout << "\n5 . Froozen foods";
		cout << "\n6 . Dairy Products";
		cout << "\n7 . Snacks and sweets";
		cout << "\n8 . Bevarages";
		cout << "\n9 . Health and Beauty";
		cout << "\n10 . Condiments and spices";
		cout << "\n\nEnter below details about brought item,\n";
		cout << "Item Type    : ";
		cin >> iType;
		cout << "Item Name    : ";
		cin >> iName;
		if (iType == '1' || iType == '2' || iType == '3')
		{
			cout << "Quntity      : ";
			cin >> qunGram;
		}
		else if (iType == '4' || iType == '5' || iType == '6' || iType == '7' || iType == '8' || iType == '9' || iType == '10')
		{
			cout << "Quntity      : ";
			cin >> qunItem;
		}
		cout << "Ratial price : ";
		cin >> rp;

		cout << "Discount     : ";
		cin >> dis;
		cout << "Promotions   : ";
		cin >> pro;
		if (iType == '3' || iType == '4' || iType == '5' || iType == '6' || iType == '7' || iType == '8' || iType == '9' || iType == '10')
		{
			cout << "Brand        : ";
			cin >> bnd;
		}
		if (iType == '3' || iType == '4' || iType == '5' || iType == '6' || iType == '7' || iType == '8' || iType == '9' || iType == '10')
		{
			cout << "Local(L)/Imported(I) : ";
			cin >> LocalOrImported;
		}
		else
		{
			system("CLS");
			cout << endl;
			cout << "\t\t\tERROR : Invalid input.";
			cn++;
		}

		node_Stock* tmp;
		tmp = linked_list_Stock::head_Stock;
		while (tmp != NULL)
		{
			if (tmp->itemName == iName)
			{
				if (iType == '1' || iType == '2' || iType == '3')
				{
					if (tmp->quntityGram >= qunGram)
					{
						tmp->quntityGram = tmp->quntityGram - qunGram;
						float finalPrice = (rp - rp * (dis / 100) - rp * (pro / 100)) * qunGram;
						node_Transaction* tmp2 = new node_Transaction;
						tmp2->Customer = customer;
						tmp2->itemName = iName;
						tmp2->quntityGram = qunGram;
						tmp2->retialPrice = rp;
						tmp2->Discount = dis;
						tmp2->Promotion = pro;
						tmp2->brand = bnd;
						tmp2->finalPrice = finalPrice;
						tmp2->countTrans = tmp2->countTrans + 1;
						nof = tmp2->countTrans;
						tmp2->next_Transaction = NULL;

						if (linked_list_Transaction::head_Transaction == NULL)
						{
							linked_list_Transaction::head_Transaction = tmp2;
							linked_list_Transaction::tail_Transaction = tmp2;
						}
						else
						{
							linked_list_Transaction::tail_Transaction->next_Transaction = tmp2;
							linked_list_Transaction::tail_Transaction = linked_list_Transaction::tail_Transaction->next_Transaction;
						}
						cout << "\nTransaction added to the system successfully.";
						cn++;
						break;
					}
					else
					{
						cout << "\nNot enough stock";
						cn++;
					}
				}
				else if (iType == '4' || iType == '5' || iType == '6' || iType == '7' || iType == '8' || iType == '9' || iType == '10')
				{
					if (tmp->quntityItem >= qunItem)
					{
						tmp->quntityItem = tmp->quntityItem - qunItem;
						float finalPrice = (rp - rp * (dis / 100) - rp * (pro / 100)) * qunItem;
						node_Transaction* tmp1 = new node_Transaction;
						tmp1->Customer = customer;
						tmp1->itemName = iName;
						tmp1->quntityItem = qunItem;
						tmp1->retialPrice = rp;
						tmp1->Discount = dis;
						tmp1->Promotion = pro;
						tmp1->brand = bnd;
						tmp1->finalPrice = finalPrice;
						tmp1->countTrans = tmp1->countTrans + 1;
						nof = tmp1->countTrans;
						tmp1->next_Transaction = NULL;

						if (linked_list_Transaction::head_Transaction == NULL)
						{
							linked_list_Transaction::head_Transaction = tmp1;
							linked_list_Transaction::tail_Transaction = tmp1;
						}
						else
						{
							linked_list_Transaction::tail_Transaction->next_Transaction = tmp1;
							linked_list_Transaction::tail_Transaction = linked_list_Transaction::tail_Transaction->next_Transaction;
						}
						cout << "\nTransaction added to the system successfully.";
						cn++;
						break;
					}
					else
					{
						cout << "\nNot enough stock";
						cn++;
					}
				}
			}
			tmp = tmp->next_Stock;
		}
		if (cn == 0)
		{
			cout << "\nItem does not exists.";
		}
		char choice = NULL;
		cout << "\n\nN : Add another item";
		cout << "\nP : print final bill";
		cout << "\nEnter your decision : ";
		cin >> choice;
		if (choice == 'N')
		{
			system("CLS");
			trans(1, nof);
		}
		else if (choice == 'P')
		{
			system("CLS");
			cout << "_____BILL_____";
			cout << "\nCUSTOMER NAME : " << customer << endl;
			float lastPrice = 0, total = 0;
			node_Transaction* tmp3;
			tmp3 = linked_list_Transaction::head_Transaction;
			for (int n = 1; n <= nof; n++)
			{
				while (tmp3 != NULL)
				{
					if (tmp3->countTrans = n)
					{
						cout << "NO             : " << tmp3->countTrans << endl;
						cout << "Item Name      : " << tmp3->itemName << endl;
						cout << "Quantity(Gram) : " << tmp3->quntityGram << endl;
						cout << "Quantity(Item) : " << tmp3->quntityItem << endl;
						cout << "Ratial Price   : " << tmp3->retialPrice << endl;
						cout << "Discount       : " << tmp3->Discount << endl;
						cout << "Promotion      : " << tmp3->Promotion << endl;
						cout << "Brand          : " << tmp3->brand << endl;
						cout << "Local/Import   : " << tmp3->localOrImported << endl;
						cout << "Final Price    : " << tmp3->finalPrice << endl;
						cout << endl;

						lastPrice = lastPrice + tmp3->finalPrice;
					}

					tmp3 = tmp3->next_Transaction;
				}
			}
			cout << "\nTotal Payble : " << lastPrice;
		}
		else
		{
			system("CLS");
			cout << endl;
			cout << "\t\t\tERROR : Invalid input.";
			trans(1, nof);
		}
	}

};

class FloorWorker : virtual public linked_list_Stock, public linked_list_Supply,public linked_list_Staff
{
public:
	void IncreaseStock()
	{
		cout << "DONT USE SPACE. USE UNDERSCORE(_) FOR IT." << endl;
		string itemName=" ";
		char exist= 'N';
		cout << "Item name : ";
		cin >> itemName;
		node_Stock* tmp;
		node_Stock* tmp3;
		tmp = head_Stock;
		tmp3 = tmp;
		while (tmp != NULL)
		{
			if (tmp->itemName == itemName)
			{
				exist = 'Y';
				break;
			}
			tmp3 = tmp;
			tmp = tmp->next_Stock;
		}
		if (exist == 'N')
		{
			cout << "Item does not exist" << endl;
			char posi;
			cout << "Are you Owner or Manager(Y/N) : ";
			cin >> posi;
			if(posi=='Y')
			{
				node_Staff* tmp1;
				tmp1 = head_Staff;
				string Uname, pw;
						cout << "Please Enter Your Login Details,\n\n";
						cout << "USERNAME : ";
						cin >> Uname;
						cout << "PASSWORD : ";
						cin >> pw;
						cout << endl;
						while (tmp1 != NULL)
						{
							if (tmp1->userName == Uname)
							{
								if (tmp1->password == pw)
								{
									if (tmp1->position == "OWNER"|| tmp1->position == "MANGER")
									{
										cout << "Thank you.";
										Sleep(1000);
										system("CLS");

										cout << "Please enter below details about new Suooly,\n\n";
										node_Supply* tmp2 = new node_Supply;
										cout << "ITEM NAME : ";
										cin >> tmp2->itemName;
										tmp3->itemName = tmp2->itemName;
										cout << "QUNTITY IN GRAMS : ";
										cin >> tmp2->quntityGram;
										tmp3->quntityGram = tmp2->quntityGram;
										cout << "QUNTITY IN nUMBER OF ITEMS : ";
										cin >> tmp2->quntityItem;
										tmp3->quntityItem = tmp2->quntityItem;
										cout << "LOCAL(L) OR IMPORTED(I)  : ";
										cin >> tmp2->localOrImported;
										tmp3->localOrImported = tmp2->localOrImported;
										if(tmp2->localOrImported == 'I')
										{
											cout << "COUNTRY OF ORIGIN : ";
											cin >> tmp2->origin;
											cout << "SHIP NUMBER : ";
											cin >> tmp2->vehicle;
											cout << "DATE ARRIVED AT LOCAL HARBOUR : ";
											cin >> tmp2->Date1;
											cout << "DATE TRANSPORTED TO THE STORE : ";
											cin >> tmp2->Date2;
										}
										if (tmp2->localOrImported == 'L')
										{
											cout << "ORIGIN (NAME OF THE FARM/FACTORY) : ";
											cin >> tmp2->origin;
											cout << "VEHICLE NUMBER : ";
											cin >> tmp2->vehicle;
											cout << "DATE OF DEPARTURE FROM FACTORY/FARM : ";
											cin >> tmp2->Date1;
											cout << "DATE ARRIVAL AT THE STORE : ";
											cin >> tmp2->Date2;
										}
										tmp2->next_Supply = NULL;
										tmp3->next_Stock = NULL;

										if (linked_list_Supply::head_Supply == NULL)
										{
											linked_list_Supply::head_Supply = tmp2;
											linked_list_Supply::tail_Supply = tmp2;
										}
										else
										{
											linked_list_Supply::tail_Supply->next_Supply = tmp2;
											linked_list_Supply::tail_Supply = linked_list_Supply::tail_Supply->next_Supply;
										}

										if (linked_list_Stock::head_Stock == NULL)
										{
											linked_list_Stock::head_Stock = tmp3;
											linked_list_Stock::tail_Stock = tmp3;
										}
										else
										{
											linked_list_Stock::tail_Stock->next_Stock = tmp3;
											linked_list_Stock::tail_Stock = linked_list_Stock::tail_Stock->next_Stock;
										}
										tmp2->status = "APPROVED";
										cout << "\nNew Supply added to the system successfully.";
										return;
									}
								}
							}
							tmp1 = tmp1->next_Staff;
						}

						cout << endl;
						cout << "Sorry.You haven't access.\n\n";
						return;
			}
			else if (posi == 'N')
			{
				cout << "Contact manager" << endl;
				return;
			}
			cout << "\nUser does not exists.";
			return;
		}
		else if (exist == 'Y')
		{
			cout << "Please enter below details about new Suooly,\n\n";
			node_Supply* tmp2 = new node_Supply;
			cout << "ITEM NAME : ";
			cin >> tmp2->itemName;
			cout << "QUNTITY IN GRAMS : ";
			cin >> tmp->quntityGram;
			tmp3->quntityGram = tmp3->quntityGram+tmp2->quntityGram;
			cout << "QUNTITY IN nUMBER OF ITEMS : ";
			cin >> tmp->quntityItem;
			tmp3->quntityItem = tmp3->quntityItem+ tmp2->quntityItem;
			cout << "LOCAL(L) OR IMPORTED(I)  : ";
			cin >> tmp2->localOrImported;
			if (tmp2->localOrImported == 'I')
			{
				cout << "COUNTRY OF ORIGIN : ";
				cin >> tmp2->origin;
				cout << "SHIP NUMBER : ";
				cin >> tmp2->vehicle;
				cout << "DATE ARRIVED AT LOCAL HARBOUR : ";
				cin >> tmp2->Date1;
				cout << "DATE TRANSPORTED TO THE STORE : ";
				cin >> tmp2->Date2;
			}
			if (tmp2->localOrImported == 'L')
			{
				cout << "ORIGIN (NAME OF THE FARM/FACTORY) : ";
				cin >> tmp2->origin;
				cout << "VEHICLE NUMBER : ";
				cin >> tmp2->vehicle;
				cout << "DATE OF DEPARTURE FROM FACTORY/FARM : ";
				cin >> tmp2->Date1;
				cout << "DATE ARRIVAL AT THE STORE : ";
				cin >> tmp2->Date2;
			}
			tmp2->next_Supply = NULL;

			if (linked_list_Supply::head_Supply == NULL)
			{
				linked_list_Supply::head_Supply = tmp2;
				linked_list_Supply::tail_Supply = tmp2;
			}
			else
			{
				linked_list_Supply::tail_Supply->next_Supply = tmp2;
				linked_list_Supply::tail_Supply = linked_list_Supply::tail_Supply->next_Supply;
			}
			tmp2->status = "APPROVED";
			cout << "\nNew Supply added to the system successfully.";
			return;
		}
	}
};

class Manger :  public Cashier, public FloorWorker
{
public:
	void addItem(string IName, float qunGram,int qunItem,float rPrice,float dis,float pro,string bnd,char LocalOrImported)
	{
		node_Stock* tmp = new node_Stock;
		tmp->itemName = IName;
		tmp->quntityGram = qunGram;
		tmp->quntityItem = qunItem;
		tmp->retialPrice = rPrice;
		tmp->Discount = dis;
		tmp->Promotion = pro;
		tmp->brand = bnd;
		tmp->localOrImported = LocalOrImported;
		tmp->next_Stock = NULL;

		if (linked_list_Stock::head_Stock == NULL)
		{
			linked_list_Stock::head_Stock = tmp;
			linked_list_Stock::tail_Stock = tmp;
		}
		else
		{
			linked_list_Stock::tail_Stock->next_Stock = tmp;
			linked_list_Stock::tail_Stock = linked_list_Stock::tail_Stock->next_Stock;
		}
	}
	void addItem()
	{
		{
			cout << "DONT USE SPACE. USE UNDERSCORE(_) FOR IT." << endl;
			char iType=NULL;
			string IName = " ";
			float qunGram = 0;
			int qunItem = 0;
			float rPrice = 0;
			float dis = 0;
			float pro = 0;
			string bnd = " ";
			cout << "\n item types,";
			cout << "\n1 . Fruits and Vegetbles";
			cout << "\n2 . Meat and sea food";
			cout << "\n3 . Grains";
			cout << "\n4 . Bakery Foods";
			cout << "\n5 . Froozen foods";
			cout << "\n6 . Dairy Products";
			cout << "\n7 . Snacks and sweets";
			cout << "\n8 . Bevarages";
			cout << "\n9 . Health and Beauty";
			cout << "\n10 . Condiments and spices";
			cout << "\n\nEnter below details ,\n";
			cout << "Item Type    : ";
			cin >> iType;

			char LocalOrImported=NULL;

			cout << "ITEM NAME    : ";
			cin >> IName;
			if (iType == '1' || iType == '2' || iType == '3')
			{
				cout << "INITIAL QUANTITY : ";
				cin >> qunGram;
			}
			else if (iType == '4' || iType == '5' || iType == '6' || iType == '7' || iType == '8' || iType == '9' || iType == '10')
			{
				cout << "INITIAL QUANTITY : ";
				cin >> qunItem;
			}

			cout << "RETIAL PRICE : ";
			cin >> rPrice;
			cout << "dISCOUNT     : ";
			cin >> dis;
			cout << "Promotions   : ";
			cin >> pro;
			if (iType == '3' || iType == '4' || iType == '5' || iType == '6' || iType == '7' || iType == '8' || iType == '9' || iType == '10')
			{
				cout << "Brand        : ";
				cin >> bnd;
			}
			if (iType == '3' || iType == '4' || iType == '5' || iType == '6' || iType == '7' || iType == '8' || iType == '9' || iType == '10')
			{
				cout << "Local(L)/Imported(I) : ";
				cin >> LocalOrImported;
			}
			node_Stock* tmp = new node_Stock;
			tmp->itemName = IName;
			tmp->quntityGram = qunGram;
			tmp->quntityItem = qunItem;
			tmp->retialPrice = rPrice;
			tmp->Discount = dis;
			tmp->Promotion = pro;
			tmp->brand = bnd;
			tmp->localOrImported = LocalOrImported;
			tmp->next_Stock = NULL;

			if (linked_list_Stock::head_Stock == NULL)
			{
				linked_list_Stock::head_Stock = tmp;
				linked_list_Stock::tail_Stock = tmp;
			}
			else
			{
				linked_list_Stock::tail_Stock->next_Stock = tmp;
				linked_list_Stock::tail_Stock = linked_list_Stock::tail_Stock->next_Stock;
			}
			cout << "\nItem added to the system successfully.";
		}
	}
	void removeItem()
	{
		cout << "DONT USE SPACE. USE UNDERSCORE(_) FOR IT." << endl;
		string IName;
		cout << "Enter Item Name you wnat to remove : ";
		cin >> IName;
		char decision = NULL;
		node_Stock* temp;
		temp = linked_list_Stock::head_Stock;
		while (temp != NULL)
		{
			if (temp->itemName == IName)
			{
				cout << "\nItem Details,";
				cout << "Item Name      : " << temp->itemName << endl;
				cout << "Quantity(Gram) : " << temp->quntityGram << endl;
				cout << "Quantity(Item) : " << temp->quntityItem << endl;
				cout << "Ratial Price   : " << temp->retialPrice << endl;
				cout << "Discount       : " << temp->Discount<< endl;
				cout << "Local/Imported : " << temp->localOrImported << endl;
				cout << "Brand          : " << temp->brand << endl;
				cout << "\nDO YOU WANT TO REMOVE THIS ITEM(Y/N) : ";
				cin >> decision;
				if (decision == 'Y')
				{
					linked_list_Stock::head_Stock->next_Stock = temp->next_Stock;
					delete temp;
					cout << "\nItem removed from the system successfully.";
					return;
				}
				else if (decision == 'N')
				{
					cout << "\nItem did not remove from the system.";
					return;
				}
			}
			else
				temp = temp->next_Stock;
		}
		cout << "\nItem does not exists.";
		return;
	}
	void checkStaff()
	{
		cout << "DONT USE SPACE. USE UNDERSCORE(_) FOR IT." << endl;
		string checkUser;
		cout << "Enter User Name you wnat to check : ";
		cin >> checkUser;
		node_Staff* tmp;
		tmp = linked_list_Staff::head_Staff;
		while (tmp != NULL)
		{
			if (tmp->userName == checkUser)
			{
				if (tmp->position == "OWNER" || tmp->position == "MANAGER")
				{
					node_Staff* tmp1;
					tmp1 = linked_list_Staff::head_Staff;
					string Uname, pw;
					cout << "Limited access User.\n\n";
					cout << "Please Enter Your Login Details,\n\n";
					cout << "USERNAME : ";
					cin >> Uname;
					cout << "PASSWORD : ";
					cin >> pw;
					cout << endl;
					while (tmp1 != NULL)
					{
						if (tmp1->userName == Uname)
						{
							if (tmp1->password == pw)
							{
								if (tmp1->position == "OWNER")
								{
									cout << "Thank you.";
									Sleep(1000);
									system("CLS");
									cout << "User Name : " << tmp->userName << endl;
									cout << "Password  : " << tmp->password << endl;
									cout << "Full Name : " << tmp->fullName << endl;
									cout << "Position  : " << tmp->position << endl;
									cout << "Join Date : " << tmp->joinDate << endl;
									return;
								}
							}
						}
						tmp1 = tmp1->next_Staff;
					}

					cout << endl;
					cout << "Sorry.You haven't access.\n\n";
					return;
				}
				else
				{
					cout << "User Name : " << tmp->userName << endl;
					cout << "Password  : " << tmp->password << endl;
					cout << "Full Name : " << tmp->fullName << endl;
					cout << "Position  : " << tmp->position << endl;
					cout << "Join Date : " << tmp->joinDate << endl;
					return;
				}
			}
			tmp = tmp->next_Staff;
		}
		cout << "\nUser does not exists.";
		return;
	}

	void checkItem()
	{
		cout << "DONT USE SPACE. USE UNDERSCORE(_) FOR IT." << endl;
		string checkItem;
		cout << "Enter Item Name you wnat to check : ";
		cin >> checkItem;
		node_Stock* tmp;
		tmp = linked_list_Stock::head_Stock;
		while (tmp != NULL)
		{
			if (tmp->itemName == checkItem)
			{
				cout << "Item Name      : " << tmp->itemName << endl;
				cout << "Quantity(Gram) : " << tmp->quntityGram << endl;
				cout << "Quantity(Item) : " << tmp->quntityItem << endl;
				cout << "Ratial Price   : " << tmp->retialPrice << endl;
				cout << "Discount       : " << tmp->Discount << endl;
				cout << "Local/Imported : " << tmp->localOrImported << endl;
				cout << "Brand          : " << tmp->brand << endl;
				return;
			}
			tmp = tmp->next_Stock;
		}
		cout << "\nItem does not exists.";
		return;
	}
};

class Owner :public Manger
{
public:
	void addStaff()
	{
		cout << "DONT USE SPACE. USE UNDERSCORE(_) FOR IT." << endl;
		cout << "Please enter below details about new staff member,\n\n";
		node_Staff* tmp = new node_Staff;
		cout << "USER NAME : ";
		cin >> tmp->userName;
		cout << "PASSWORD  : ";
		cin >> tmp->password;
		cout << "FULL NAME : ";
		cin >> tmp->fullName;
		cout << "POSITION  : ";
		cin >> tmp->position;
		cout << "JOIN DATE : ";
		cin >> tmp->joinDate;
		tmp->next_Staff = NULL;
		if (tmp->position == "OWNER")
		{
			cout << "Can't add a OWNER";
			return;
		}
		if (linked_list_Staff::head_Staff == NULL)
		{
			linked_list_Staff::head_Staff = tmp;
			linked_list_Staff::tail_Staff = tmp;
		}
		else
		{
			linked_list_Staff::tail_Staff->next_Staff = tmp;
			linked_list_Staff::tail_Staff = linked_list_Staff::tail_Staff->next_Staff;
		}
		cout << "\nUser added to the system successfully.";
	}
	void addStaff(string un, string pw, string fn, string pos, string jd)
	{
		node_Staff* tmp = new node_Staff;
		tmp->userName = un;
		tmp->password = pw;
		tmp->fullName = fn;
		tmp->position = pos;
		tmp->joinDate = jd;
		tmp->next_Staff = NULL;

		if (linked_list_Staff::head_Staff == NULL)
		{
			linked_list_Staff::head_Staff = tmp;
			linked_list_Staff::tail_Staff = tmp;
		}
		else
		{
			linked_list_Staff::tail_Staff->next_Staff = tmp;
			linked_list_Staff::tail_Staff = linked_list_Staff::tail_Staff->next_Staff;
		}
	}
	void removeStaff()
	{
		cout << "DONT USE SPACE. USE UNDERSCORE(_) FOR IT." << endl;
		string UName;
		cout << "Enter User Name you wnat to remove : ";
		cin >> UName;
		char decision = NULL;
		node_Staff* temp;
		temp = linked_list_Staff::head_Staff;
		while (temp != NULL)
		{
			if (temp->userName == UName)
			{
				cout << "\nUser Details,";
				cout << "User Name : " << temp->userName << endl;
				cout << "Password  : " << temp->password << endl;
				cout << "Full Name : " << temp->fullName << endl;
				cout << "Position  : " << temp->position << endl;
				cout << "Join Date : " << temp->joinDate << endl;
				if (temp->position == "OWNER")
				{
					cout << "Can't remove a OWNER";
					return;
				}
				cout << "\nDO YOU WANT TO REMOVE THIS USER(Y/N) : ";
				cin >> decision;

				if (decision == 'Y')
				{
					linked_list_Staff::head_Staff->next_Staff = temp->next_Staff;
					delete temp;
					cout << "\nUser removed from the system successfully.";
					return;
				}
				else if (decision == 'N')
				{
					cout << "\nUser did not remove from the system.";
					return;
				}
			}
			else
				temp = temp->next_Staff;
		}
		cout << "\nUser does not exists.";
		return;
	}
	void removeStaff(string UName)
	{
		cout << "DONT USE SPACE. USE UNDERSCORE(_) FOR IT." << endl;
		node_Staff* temp;
		temp = linked_list_Staff::head_Staff;
		while (temp != NULL)
		{
			if (temp->userName == UName)
			{
				linked_list_Staff::head_Staff->next_Staff = temp->next_Staff;
				delete temp;
				return;
			}
			else
				temp = temp->next_Staff;
		}
	}
};

void instructions()
{
	cout << "1.ONY USE ENGLISH CAPITAL LETTERS.\n";
	cout << "2.DONT USE SPACE. USE UNDERSCORE(_) FOR IT." << endl;
}

int main()
{
	linked_list_Staff staff;
	Owner ow;

	ow.addStaff("M", "M", "M", "OWNER", "M");
	ow.addStaff("MANAGER1", "MANAGER1", "MANAGER1", "MANAGER", "MANAGER1");
	ow.addStaff("MANAGER2", "MANAGER2", "MANAGER2", "MANAGER", "MANAGER2");
	ow.addStaff("CASHIER1", "CASHIER1", "CASHIER1", "CASHIER", "CASHIER1");
	ow.addStaff("CASHIER2", "CASHIER2", "CASHIER2", "CASHIER", "CASHIER2");
	ow.addStaff("FLOORWORKER1", "FLOORWORKER1", "FLOORWORKER1", "FLOORWORKER", "FLOORWORKER1");
	ow.addStaff("FLOORWORKER2", "FLOORWORKER2", "FLOORWORKER2", "FLOORWORKER", "FLOORWORKER2");
	ow.addItem("ITEM1", 1000, 0, 0, 0, 0, "BRAND1", 'L');
	ow.addItem("ITEM2", 2000, 0, 0, 0, 0, "BRAND2", 'I');
	ow.addItem("ITEM3", 3000, 0, 0, 0, 0, " ", 'L');
	ow.addItem("ITEM4", 0, 100, 0, 0, 0, "BRAND4", 'I');
	ow.addItem("ITEM5", 0, 200, 0, 0, 0, "BRAND5", 'L');
	ow.addItem("ITEM6", 0, 300, 0, 0, 0, " ", 'I');

	system("CLS");

	cout << "\t*******************************************************************************\n";
	cout << "\t*                                                                             *\n";
	cout << "\t*                  SUPPER MARKET MANAGMENT SYSTEM                             *\n";
	cout << "\t*                                                                             *\n";
	cout << "\t*******************************************************************************\n";
	cout << "\n\n\n                             System will start soon";
	cout << "\n\n\n\n\n\n";
	cout << "\t*******************************************************************************\n";
	cout << "\t*                                                                             *\n";
	cout << "\t*                 CREATED BY : K.A.M.D.KARIYAWASAM                            *\n";
	cout << "\t*                              Y.A.S.S.JAYASINGHE                             *\n";
	cout << "\t*                              K.D.M.ANURADHA                                 *\n";
	cout << "\t*                                                                             *\n";
	cout << "\t*******************************************************************************\n";
	Sleep(3000);
	system("CLS");
	char choice=' ';
	char again = NULL;
	while (again != 'E')
	{
		char checkPosition = ow.linked_list_Staff::login();
		if (checkPosition == 'O')
		{
			while (again != 'E')
			{
				system("CLS");
				cout << "\n\n\n\t\t     WELCOME OWNER\n\n";
				cout << "\t\tA . ADD A STAFF MEMBER\n";
				cout << "\t\tB . REMOVE A STAFF MEMBER\n";
				cout << "\t\tC . ADD A NEW ITEM\n";
				cout << "\t\tD . REMOVE A ITEM\n";
				cout << "\t\tF . CHECK STAFF DETAILS\n";
				cout << "\t\tG . DO A TRASACTION\n";
				cout << "\t\tH . ADD A NEW SUPPLY\n";
				cout << "\t\tI . CHECK A ITEM IN STOCK\n\n";
				cout << "\t\tS : SAVE STAFF DATA TO A TEXT FILE\n";
				cout << "\t\tX : SAVE STOCK DATA TO A TEXT FILE\n";
				cout << "\t\tY : SAVE SUPPLY DATA TO A TEXT FILE\n";
				cout << "\t\tZ : SAVE TRANSACTION DATA TO A TEXT FILE\n\n";
				cout << "\t\tQ : INSTRUCTIONS\n";
				cout << "\t\tL : LOGIN SCREEN\n";
				cout << "\t\tE . EXIT\n";
				cout << "\n\t\tEnter correct capital letter\n";
				cout << "\n\t\tWHAT YOU WANT TO DO : ";
				cin >> choice;
				system("CLS");
				if (choice == 'A')
					ow.addStaff();
				else if (choice == 'B')
					ow.removeStaff();
				else if (choice == 'C')
					ow.addItem();
				else if (choice == 'D')
					ow.removeItem();
				else if (choice == 'F')
					ow.checkStaff();
				else if (choice == 'G')
					ow.trans(0, 0);
				else if (choice == 'H')
					ow.IncreaseStock();
				else if (choice == 'I')
					ow.checkItem();
				else if (choice == 'S')
					ow.SaveStaff();
				else if (choice == 'X')
					ow.SaveStock();
				else if (choice == 'Y')
					ow.SavSupply();
				else if (choice == 'Z')
					ow.SaveTransaction();
				else if (choice == 'Q')
					instructions();
				else if (choice == 'L')
					break;
				else if (choice == 'E')
					exit(0);
				else
				{
					cout << "\n\n\t\tERROR : Invalid input.";
				}
				cout << "\n\nClick an letter and click enter to go to main menu \n";
				cout << "E : EXIT\n";
				cout << "Enter your decision : ";
				cin >> again;
				if (again == 'E')
					exit(0);
			}
		}
		if (checkPosition == 'M')
		{
			while (again != 'E')
			{
				system("CLS");
				cout << "\n\n\n\t\tWELCOME MANAGER\n\n";
				cout << "\t\tA . ADD A NEW ITEM\n";
				cout << "\t\tB . REMOVE A ITEM\n";
				cout << "\t\tC . CHECK STAFF DETAILS\n";
				cout << "\t\tD . DO A TRASACTION\n";
				cout << "\t\tF . ADD A NEW SUPPLY\n";
				cout << "\t\tG . CHECK A ITEM IN STOCK\n\n";
				cout << "\t\tX : SAVE STOCK DATA TO A TEXT FILE\n";
				cout << "\t\tY : SAVE SUPPLY DATA TO A TEXT FILE\n";
				cout << "\t\tZ : SAVE TRANSACTION DATA TO A TEXT FILE\n\n";
				cout << "\t\tQ : INSTRUCTIONS\n";
				cout << "\t\tL : LOGIN SCREEN\n";
				cout << "\t\tE . EXIT\n";
				cout << "\t\t\nEnter correct capital letter\n";
				cout << "\t\t\nWHAT YOU WANT TO DO : ";
				cin >> choice;
				system("CLS");
				if (choice == 'A')
					ow.addItem();
				else if (choice == 'B')
					ow.removeItem();
				else if (choice == 'C')
					ow.checkStaff();
				else if (choice == 'D')
					ow.trans(0, 0);
				else if (choice == 'F')
					ow.IncreaseStock();
				else if (choice == 'G')
					ow.checkItem();
				else if (choice == 'X')
					ow.SaveStock();
				else if (choice == 'Y')
					ow.SavSupply();
				else if (choice == 'Z')
					ow.SaveTransaction();
				else if (choice == 'Q')
					instructions();
				else if (choice == 'L')
					break;
				else if (choice == 'E')
					exit(0);
				else
				{
					cout << "\n\n\t\tERROR : Invalid input.";
				}
				cout << "\n\nClick an letter and click enter to go to main menu \n";
				cout << "E : EXIT\n";
				cout << "Enter your decision : ";
				cin >> again;
				if (again == 'E')
					exit(0);
			}
		}
		if (checkPosition == 'C')
		{
			while (again != 'E')
			{
				system("CLS");
				cout << "\n\n\n\t\tWELCOME CASHIER\n\n";
				cout << "\t\tA . DO A TRASACTION\n\n";
				cout << "\t\tZ : SAVE TRANSACTION DATA TO A TEXT FILE\n\n";
				cout << "\t\tQ : INSTRUCTIONS\n";
				cout << "\t\tL : LOGIN SCREEN\n";
				cout << "\t\tE . EXIT\n";
				cout << "\t\t\nEnter correct capital letter\n";
				cout << "\t\t\nWHAT YOU WANT TO DO : ";
				cin >> choice;
				system("CLS");
				if (choice == 'A')
					ow.trans(0, 0);
				else if (choice == 'Z')
					ow.SaveTransaction();
				else if (choice == 'Q')
					instructions();
				else if (choice == 'L')
					break;
				else if (choice == 'E')
					exit(0);
				else
				{
					cout << "\n\n\t\tERROR : Invalid input.";
				}
				cout << "\n\nClick an letter and click enter to go to main menu \n";
				cout << "E : EXIT\n";
				cout << "Enter your decision : ";
				cin >> again;
				if (again == 'E')
					exit(0);
			}
		}
		if (checkPosition == 'F')
		{
			while (again != 'E')
			{
				system("CLS");
				cout << "\n\n\n\t\tWELCOME FLOOR WORKER\n\n";
				cout << "\t\tA . ADD A NEW SUPPLY\n\n";
				cout << "\t\tY : SAVE SUPPLY DATA TO A TEXT FILE\n\n";
				cout << "\t\tQ : INSTRUCTIONS\n";
				cout << "\t\tL : LOGIN SCREEN\n";
				cout << "\t\tE . EXIT\n";
				cout << "\t\t\nEnter correct capital letter\n";
				cout << "\t\t\nWHAT YOU WANT TO DO : ";
				cin >> choice;
				system("CLS");
				if (choice == 'A')
					ow.IncreaseStock();
				else if (choice == 'Y')
					ow.SavSupply();
				else if (choice == 'Q')
					instructions();
				else if (choice == 'L')
					break;
				else if (choice == 'E')
					exit(0);
				else
				{
					cout << "\n\n\t\tERROR : Invalid input.";
				}
				cout << "\n\nClick an letter and click enter to go to main menu \n";
				cout << "E : EXIT\n";
				cout << "Enter your decision : ";
				cin >> again;
				if (again == 'E')
					exit(0);
			}
		}
	}
	return 0;
}
