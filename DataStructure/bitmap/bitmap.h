#pragma once
#include<vector>
using namespace std;
class bitmap
{
private:
	vector<int> _bits;
	
public:
	void set(int value) {
		int seq = value / 32;
		int _bit = value % 32;
		_bits[seq] |= (1 << _bit);
	}
	void reset(int value) {
		int seq = value / 32;
		int _bit = value % 32;
		_bits[seq] &= ~(1 << _bit);
	}
	bool get(int value) {
		int seq = value / 32;
		int _bit = value % 32;
		if (_bits[seq]&(1<<_bit)) {
			return true;
		}
		else {
			return false;
		}
	}
	bitmap(size_t num) { _bits.resize(num); }
	~bitmap() {}
};

