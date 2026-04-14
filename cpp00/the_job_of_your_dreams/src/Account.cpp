#include "Account.hpp"
#include <ctime>
#include <iostream>

Account::Account(int initial_deposit) : _amount{initial_deposit} {
  _accountIndex = _nbAccounts;
  _nbAccounts += 1;
  _totalAmount += initial_deposit;
  Account::_displayTimestamp();
  std::cout << " index:" << _accountIndex << ';';
  std::cout << "amount:" << _amount << ';';
  std::cout << "created";
  std::cout << std::endl;
}
Account::~Account(void) {
  Account::_displayTimestamp();
  std::cout << " index:" << _accountIndex << ';';
  std::cout << "amount:" << _amount << ';';
  std::cout << "closed";
  std::cout << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) { return _nbAccounts; }
int Account::getTotalAmount(void) { return _totalAmount; }
int Account::getNbDeposits(void) { return _totalNbDeposits; }
int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

void Account::displayAccountsInfos(void) {
  Account::_displayTimestamp();
  std::cout << " accounts:" << getNbAccounts() << ';';
  std::cout << "total:" << getTotalAmount() << ';';
  std::cout << "deposit:" << getNbDeposits() << ';';
  std::cout << "withdrawals:" << getNbWithdrawals();
  std::cout << std::endl;
}

void Account::makeDeposit(int deposit) {
  _amount = _amount + deposit;
  _nbDeposits += 1;
  _totalNbDeposits += 1;
  _totalAmount += deposit;

  Account::_displayTimestamp();
  std::cout << " index:" << _accountIndex << ';';
  std::cout << "p_amount:" << _amount - deposit << ';';
  std::cout << "deposit:" << deposit << ';';
  std::cout << "amount:" << _amount << ';';
  std::cout << "nb_deposits:" << _nbDeposits;
  std::cout << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  if (_amount >= withdrawal) {
    _amount -= withdrawal;
    _nbWithdrawals += 1;
    _totalNbWithdrawals += 1;
    _totalAmount -= withdrawal;
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ';';
    std::cout << "p_amount:" << _amount + withdrawal << ';';
    std::cout << "withdrawal:" << withdrawal << ';';
    std::cout << "amount:" << _amount << ';';
    std::cout << "nb_withdrawals:" << _nbWithdrawals;
    std::cout << std::endl;
    return true;
  } else {
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ';';
    std::cout << "p_amount:" << _amount + withdrawal << ';';
    std::cout << "withdrawal:" << "refused" << ';';
    std::cout << std::endl;
    return false;
  }
}

int Account::checkAmount(void) const { return _amount; }

void Account::displayStatus(void) const {

  Account::_displayTimestamp();
  std::cout << " index:" << _accountIndex << ';';
  std::cout << "amount:" << _amount << ';';
  std::cout << "deposits:" << _nbDeposits << ';';
  std::cout << "withdrawals:" << _nbWithdrawals;
  std::cout << std::endl;
}

void Account::_displayTimestamp(void) {
  std::time_t timer = std::time(nullptr);
  std::tm local_timer;

  // locatime_r is threadsafe;
  localtime_r(&timer, &local_timer);
  // localtime_s(&timer, &local_timer); <- for windows

  char timestamp[16];
  strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", &local_timer);

  std::cout << "[" << timestamp << "]";
}
