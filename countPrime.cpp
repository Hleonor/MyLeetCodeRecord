#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<bool>prime(999999, false);

bool isPrime(int number)
{
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrime(int n)
{
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == false) // Ĭ�϶����Ǻ���
        {
            cnt++;
            for (int j = i + i; j < n; j += i) // ���Ǻ�������������ע�⣬j�ĳ�ʼֵ����Ϊi*i��Ȼ���Լ���ѭ�����������ǻᵼ��j���
            {
                prime[j] = true;
            }
        }
    }
    return cnt;
}

int main()
{
    int primeNumber;
    scanf("%d", &primeNumber);
    printf("%d" , countPrime(primeNumber));
    return 0;
}