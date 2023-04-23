#include "Account.hpp"
#include "iostream"
#include "ctime"
#include "chrono"
#include "iomanip"

// init base 

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


void Account::_displayTimestamp(){
    std::time_t current_time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::cout << "[" << std::put_time(std::localtime(&current_time), "%Y%m%d_%H%M%S") << "] ";
    return ;
}

int	Account::getNbAccounts( void ){
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" <<_nbAccounts << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals()  << std::endl;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	std::cout << "_amount:" << _amount << ";";
	_nbDeposits++;
	std::cout << "nb_deposit:" << _nbDeposits << std::endl;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (withdrawal > _amount){
		std::cout << "withdrawal:refused" << std::endl;
		return 1 ;
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	_amount -= withdrawal;
	std::cout << "amount:" << _amount << ";";
	_nbWithdrawals++;
	std::cout << "nb_withdrawal:" << _nbWithdrawals << ";" << std::endl;
	_totalNbWithdrawals++;
	return 0;
}
int		Account::checkAmount( void ) const{
	return _amount;
}


Account::Account( void ){

	;
}

Account::Account(int initial_deposit){

	this->_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts;
//	checkAmount();
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
	_nbAccounts++;
}

Account::~Account( void ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}
