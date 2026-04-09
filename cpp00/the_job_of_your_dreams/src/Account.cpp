#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) : _amount{initial_deposit} {}
Account::~Account(void) {}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) { return _nbAccounts; }
int Account::getTotalAmount(void) { return _totalAmount; }
int Account::getNbDeposits(void) { return _totalNbDeposits; }
int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }
void Account::displayAccountsInfos(void) {
  std::cout << "nb of acc : " << getNbAccounts() << std::endl;
  std::cout << "total amount : " << getTotalAmount() << std::endl;
  std::cout << "nb of dep : " << getNbDeposits() << std::endl;
  std::cout << "nb of withd : " << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit) {
  _amount = _amount + deposit;
  _nbDeposits += 1;
}

bool Account::makeWithdrawal(int withdrawal) {
  if (_amount >= withdrawal) {
    _amount -= withdrawal;
    _nbWithdrawals += 1;
    return true;
  } else {
    return false;
  }
}

int Account::checkAmount(void) const { return _amount; }

void Account::displayStatus(void) const {}
