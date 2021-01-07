#ifndef MYCOOUNTER_H
#define MYCOOUNTER_H

#include <QObject>

class MyCoounter : public QObject
{
    Q_OBJECT
public:
    explicit MyCoounter(int value = 0, QObject *parent = nullptr);
    int value() const;

public Q_SLOTS:
    void setValue(int value);

Q_SIGNALS:
    void valueChanged(int value);

private:
    int _value;
};

#endif // MYCOOUNTER_H
