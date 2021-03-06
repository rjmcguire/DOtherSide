#pragma once

// std
#include <vector>
// Qt
#include <QtCore/QObject>
#include <QtCore/QString>
#include <QtCore/QVariant>
#include <QtCore/QMetaObject>

namespace DOS {

class DosIQObjectImpl
{
public:
    /// Destructor
    virtual ~DosIQObjectImpl() = default;

    /// Emit the signal with the given name and arguments
    virtual bool emitSignal(QObject *emitter, const QString &name, const std::vector<QVariant> &argumentsValues) = 0;

    /// Return the metaObject
    virtual const QMetaObject *metaObject() const = 0;

    /// The qt_metacall implementation
    virtual int qt_metacall(QMetaObject::Call, int, void **) = 0;
};

} // namespace dos
