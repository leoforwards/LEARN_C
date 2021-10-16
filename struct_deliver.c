#include <stdio.h>
#include <stdlib.h>

typedef struct _account
{
	char *bankName;
	char *userName;
	double limit;
	double billAmount;

}Account;

//传递结构变量时，是复制整个结构变量的值到函数之中 - 效率低
/*double GetRepayment(Account account)
{
	account.bankName = "招商银行";
	return account.limit - account.billAmount;
}*/

//传递结构指针 - 递名片
double GetRepayment( const Account *account) //参数中增加const后,会让指针更加安全
{
	//传递指针，非常危险
	//account->bankName = "招商银行";
	return account->limit - account->billAmount;
}

int main()
{
	Account account = {"建设银行","杰克森",30000,20000};
	double result = GetRepayment(&account);
	printf("%s应还款为: %.2lf\n",account.bankName,result);
	return 0;
}
