/**
  * @file   Data.h
  * @brief  This is a brief description.
  * @author 73954
  * @date   2021/7/25 15:53
  */

#ifndef SQLITE_WRAPPER_DATA_H
#define SQLITE_WRAPPER_DATA_H

#include "global.h"
#include "Value.h"

namespace db {

    union Value {
        int8_t cValue;
        int16_t sValue;
        int32_t iValue;
        int64_t lValue;
        float fValue;
        double dValue;
        const char *strValue;
    };

    class Data {

    private:
        Value value_{};
        string typeName_;

    public:
        explicit Data(int8_t t) {
            *this = t;
        }

        explicit Data(int16_t t) {
            *this = t;
        }

        explicit Data(int32_t t) {
            *this = t;
        }

        explicit Data(int64_t t) {
            *this = t;
        }

        explicit Data(float t) {
            *this = t;
        }

        explicit Data(double t) {
            *this = t;
        }

        explicit Data(const char *t) {
            *this = t;
        }

        explicit Data(const string& t) {
            *this = t;
        }

        const Value &getValue() const {
            return value_;
        }

        void setValue(const Value &value) {
            value_ = value;
        }

        const string &getTypeName() const {
            return typeName_;
        }

        void setTypeName(const string &typeName) {
            typeName_ = typeName;
        }

        int8_t getChar() const {
            return value_.cValue;
        }

        void setChar(int8_t t) {
            value_.cValue = t;
            typeName_ = typeid(value_.cValue).name();
        }

        int16_t getShort() const {
            return value_.sValue;
        }

        void setShort(int16_t t) {
            value_.sValue = t;
            typeName_ = typeid(value_.sValue).name();
        }

        int32_t getInt() const {
            return value_.iValue;
        }

        void setInt(int32_t t) {
            value_.iValue = t;
            typeName_ = typeid(value_.iValue).name();
        }

        int64_t getLong() const {
            return value_.lValue;
        }

        void setLong(int64_t t) {
            value_.lValue = t;
            typeName_ = typeid(value_.lValue).name();
        }

        float getFloat() const {
            return value_.fValue;
        }

        void setFloat(float t) {
            value_.fValue = t;
            typeName_ = typeid(value_.fValue).name();
        }

        double getDouble() const {
            return value_.dValue;
        }

        void setDouble(double t) {
            value_.dValue = t;
            typeName_ = typeid(value_.dValue).name();
        }

        string getString() const {
            return string(value_.strValue);
        }

        void setString(const char *t) {
            value_.strValue = t;
            typeName_ = typeid(value_.strValue).name();
        }

        void setString(const string& t) {
            value_.strValue = t.c_str();
            typeName_ = typeid(value_.strValue).name();
        }

        Data& operator=(const int8_t &t) {
            setChar(t);
            return *this;
        }

        Data& operator=(const int16_t &t) {
            setShort(t);
            return *this;
        }

        Data& operator=(const int32_t &t) {
            setInt(t);
            return *this;
        }

        Data& operator=(const int64_t &t) {
            setLong(t);
            return *this;
        }

        Data& operator=(const float &t) {
            setFloat(t);
            return *this;
        }

        Data& operator=(const double &t) {
            setDouble(t);
            return *this;
        }

        Data& operator=(const char *t) {
            setString(t);
            return *this;
        }

        Data& operator=(const string &t) {
            setString(t);
            return *this;
        }

        explicit operator int8_t() const {
            return getChar();
        }

        explicit operator int16_t() const {
            return getShort();
        }

        explicit operator int32_t() const {
            return getInt();
        }

        explicit operator int64_t() const {
            return getLong();
        }

        explicit operator float() const {
            return getFloat();
        }

        explicit operator double() const {
            return getDouble();
        }

        explicit operator string() const {
            return getString();
        }

        friend ostream &operator<<(ostream &os, const Data &data) {
            cout << data.getTypeName() << endl;
            if (typeid(data.value_.cValue).name() == data.getTypeName())
                os << data.getChar();
            else if (typeid(data.value_.sValue).name() == data.getTypeName())
                os << data.getShort();
            else if (typeid(data.value_.iValue).name() == data.getTypeName())
                os << data.getInt();
            else if (typeid(data.value_.lValue).name() == data.getTypeName())
                os << data.getLong();
            else if (typeid(data.value_.fValue).name() == data.getTypeName())
                os << data.getFloat();
            else if (typeid(data.value_.dValue).name() == data.getTypeName())
                os << data.getDouble();
            else if (typeid(data.value_.strValue).name() == data.getTypeName())
                os << data.getString();
            return os;
        }
    };
}


#endif //SQLITE_WRAPPER_DATA_H
