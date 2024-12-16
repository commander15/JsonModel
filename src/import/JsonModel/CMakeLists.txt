qt_add_qml_module(JsonModel
    URI JsonModel
    QML_FILES
        JsonListModelRole.qml
        JsonListModel.qml
    SOURCES
        jsonlistmodel.cpp
    PLUGIN_TARGET JsonModel
)

set(INSTALL_DIR qml/JsonModel)

install(TARGETS JsonModel
    ARCHIVE DESTINATION ${INSTALL_DIR}
    LIBRARY DESTINATION ${INSTALL_DIR}
    RUNTIME DESTINATION ${INSTALL_DIR}
)

qt_query_qml_module(JsonModel
    QMLDIR    QMLDIR
    TYPEINFO  TYPEINFO
    QML_FILES QML_FILES
)

install(FILES ${QMLDIR} ${TYPEINFO} ${QML_FILES}
    DESTINATION ${INSTALL_DIR}
)
