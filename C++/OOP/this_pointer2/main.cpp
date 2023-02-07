#include <iostream>

using namespace std;

struct Transaction
{
    const int txID; // tx -> Transaction 줄임말
    const int fromID;
    const int toID;
    const int value;
    class Builder
    {
    private:
        int _fromID;
        int _toID;
        int _value;
    public:
        Transaction build()
        {
            int txID = _fromID ^ _toID ^ _value;
            return Transaction{txID, _fromID, _toID, _value};
        }
        Builder& setFromID(int fromID)
        {
            _fromID = fromID;
            return *this;
        }
        Builder& setToID(int toID)
        {
            _toID = toID;
            return *this;
        }
        Builder& setValue(int value)
        {
            _value = value;
            return *this;
        }
    };
};

class TransactionBuilder
{
private:
    int _fromID;
    int _toID;
    int _value;
public:
    Transaction build()
    {
        int txID = _fromID ^ _toID ^ _value;
        return Transaction{txID, _fromID, _toID, _value};
    }
    TransactionBuilder& setFromID(int fromID)
    {
        _fromID = fromID;
        return *this;
    }
    TransactionBuilder& setToID(int toID)
    {
        _toID = toID;
        return *this;
    }
    TransactionBuilder& setValue(int value)
    {
        _value = value;
        return *this;
    }
};

int main() {
    Transaction tx0 = TransactionBuilder()
            .setFromID(1212)
            .setToID(4321)
            .setValue(4321)
            .build();
//    TransactionBuilder builder;
//    Transaction TX = builder.setFromID(1111).setToID(1234).setValue(1231).build();
    Transaction tx1 = Transaction::Builder()
            .setFromID(1212)
            .setToID(4321)
            .setValue(4321)
            .build();


}
