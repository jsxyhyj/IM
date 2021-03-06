#ifndef DATAINFO_H
#define DATAINFO_H

#include <QString>
#include <QMap>

/**
 * function： 数据包
 * @brief The DataInfo class
 */
template <typename T>
class DataInfo
{
public:
    DataInfo();
    QString getActionType(){
        return actionType;
    }
    void setActionType(QString actionType){
        this->actionType = actionType;
    }

    QString getIp(){
        return this->ip;
    }

    void setIp(QString ip){
        this->ip = ip;
    }

    QString getDesk(){
        return this->desk;
    }
    void setDesk(QString desk){
        this->desk = desk;
    }

    QString getPort(){
        this->port = port;
    }

    void setPort(QString port){
        this->port = port;
    }


    T getData(){
        return this->data;
    }

    void setData(T data){
        this->data = data;
    }

private:
    QString actionType;
    T data;
    QString ip;
    QString desk; //机器名
    QString port;
};

#endif // DATAINFO_H
