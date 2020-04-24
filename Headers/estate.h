#ifndef ESTATE_H
#define ESTATE_H
#include <QObject>
class Estate : public QObject
{
 Q_OBJECT
public:
 enum EstateType {
 ECONOM,
 LUXURIOUS,
 TOWN_HOUSE,
 COTTAGE
 };
 Estate();
 explicit Estate(QObject *parent = nullptr);
 EstateType getType() const;
 int getAge();
 int getArea();
 int getResidents();
 int getMonths();
private:
 int age;
 int area;
 int residents;
 int months;
 EstateType type;
 QString owner;
};
#endif // ESTATE_H
