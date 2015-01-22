TEMPLATE = lib
CONFIG += warn_on plugin
QT += sql widgets
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtSql.pyd
    target.files = QtSql.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtSql.so
    target.files = QtSql.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtSql
sip.files = ../sip/QtSql/qsqlrelationaldelegate.sip ../sip/QtSql/qsqlquery.sip ../sip/QtSql/qsqldatabase.sip ../sip/QtSql/qsqltablemodel.sip ../sip/QtSql/qsqlerror.sip ../sip/QtSql/qsqlresult.sip ../sip/QtSql/QtSqlmod.sip ../sip/QtSql/qsqlrecord.sip ../sip/QtSql/qsql.sip ../sip/QtSql/qsqldriver.sip ../sip/QtSql/qsqlrelationaltablemodel.sip ../sip/QtSql/qsqlquerymodel.sip ../sip/QtSql/qsqlfield.sip ../sip/QtSql/qsqlindex.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtSql.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.4m

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"
}

TARGET = QtSql
HEADERS = sipAPIQtSql.h
SOURCES = sipQtSqlQSqlRelationalDelegate.cpp sipQtSqlQVector0100QVariant.cpp sipQtSqlQSqlIndex.cpp sipQtSqlcmodule.cpp sipQtSqlQSqlTableModel.cpp sipQtSqlQSqlResult.cpp sipQtSqlQSqlParamType.cpp sipQtSqlQSqlQuery.cpp sipQtSqlQSqlDatabase.cpp sipQtSqlQSqlError.cpp sipQtSqlQSql.cpp sipQtSqlQSqlRecord.cpp sipQtSqlQSqlDriver.cpp sipQtSqlQSqlRelationalTableModel.cpp sipQtSqlQSqlRelation.cpp sipQtSqlQSqlField.cpp sipQtSqlQSqlQueryModel.cpp sipQtSqlQSqlDriverCreatorBase.cpp
