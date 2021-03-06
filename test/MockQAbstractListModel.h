#pragma once

#include <Global.h>
#include <vector>
#include <string>

class MockQAbstractListModel
{
public:
    MockQAbstractListModel();

    DosQMetaObject *metaObject();
    DosQObject *data();

    std::string objectName() const;
    void setObjectName(const std::string& objectName);

    std::string name() const;
    void setName(const std::string& name);
    void nameChanged(const std::string& name);

private:
    static void onSlotCalled(void *selfVPtr, DosQVariant *dosSlotNameVariant, int dosSlotArgc, DosQVariant **dosSlotArgv);
    static void onRowCountCalled(void *selfVPtr, const DosQModelIndex *index, int *result);
    static void onColumnCountCalled(void *selfVPtr, const DosQModelIndex *index, int *result);
    static void onDataCalled(void *selfVPtr, const DosQModelIndex *index, int role, DosQVariant *result);
    static void onSetDataCalled(void *selfVPtr, const DosQModelIndex *index, const DosQVariant *value, int role, bool *result);
    static void onRoleNamesCalled(void *selfVPtr, DosQHashIntQByteArray *result);
    static void onFlagsCalled(void *selfVPtr, const DosQModelIndex *index, int *result);
    static void onHeaderDataCalled(void *selfVPtr, int section, int orientation, int role, DosQVariant *result);

    VoidPointer m_vptr;
    std::string m_name;
    std::vector<std::string> m_names;
};
