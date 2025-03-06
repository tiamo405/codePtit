#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(){
		}
		PhanSo(ll a, ll b){
			this->tu = a;
			this->mau = b;
		}

		friend PhanSo operator + (const PhanSo a, const PhanSo b){
			ll mc = a.mau/__gcd(a.mau,b.mau)*b.mau;
			PhanSo tong;
			tong.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
			tong.mau = mc;
			ll g = __gcd(tong.tu, tong.mau);
			tong.tu /= g;
			tong.mau /= g;
			return tong;
		}

		friend ostream& operator << (ostream& out, const PhanSo a){
			out << a.tu << "/" << a.mau << endl;
			return out;
		}

		friend istream& operator >> (istream& in, PhanSo& a){
			in >> a.tu >> a.mau;
			return in;
		}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
