#include<iostream>
#include<string>


const int M {26}; 


bool check(std::string str){
	for(int i = 0; i < str.size(); i++)
		if ('A' <= str[i] && str[i] <= 'Z')
			return false;
	return true;
}


bool gcd(int a){
	int b {M}, r {a % b};
	while(r){
		a = b;
		b = r;
		r = a % b;
	}
	if (b == 1)
		return false;
	else
		return true;
}

void encrypt(std::string &s, int a, int b)
{
	for (int i = 0; i < s.size(); i++)
	{
		char S{s[i]};
		s[i] = char(a * s[i] + b + 'A');
		int S_i{int(s[i])};
		std::cout << S_i << " " << s[i] << std::endl;
		while (S_i % M > M)
		{
			S_i = S_i % M;
			std::cout << S_i << std::endl;
		}
		s[i] = char(s[i] + 'A');
		std::cout << S_i << " " << s[i] << std::endl;
	}
	std::cout << std::endl;
}

void decipher(std::string &s, int d, int b)
{
	for(int i=0; i < s.size(); i++){
		int r = s[i]-'A'-b;
		while(r < 0) r += M;
		s[i] = char(d*r + 'A');
		std::cout << s[i] << std::endl;
	}
}

void swap(int &a, int &b){
	int tmp {a};
	a = b;
	b = tmp;
}


int ext_Euclid(int a){
	int x {1}, y {0}, u {0}, v {1}, s {a}, t {M}, k;
	do{
		k = s / t;
		s -= k * t;
		swap(s,t);
		x -= k * u;
		while(x < 0) x += M;
		swap(x,u);
		y -= k * v;
		while(y < 0) y += M;
		swap(y,v);
	}while(t != 0);
	return x;
}


int main(){
	std::string s;
	while(std::cout << "Input a word : " && std::cin >> s && check(s))
		std::cout << "Please input a word consisting of only uppercase letters." << std::endl;

	int a, b;
	while (std::cout << "Input a and b : " && std::cin >> a >> b && (a < 0 || b < 0 || gcd(a)))
		std::cout << "Two integers a and b must be positive and a must be coprime to M=26." << std::endl;

	char ct; 
	while(std::cout << "Input E(encrypt) or D(decipher) : " && std::cin >> ct && ct != 'E' && ct != 'D')
		std::cout << "Please input E or D." << std::endl;
	
	std::cout << s << " -> ";
	if(ct == 'E') encrypt(s, a, b);
	else decipher(s, b, ext_Euclid(a));
	std::cout << s;
	
	return 0;
}
