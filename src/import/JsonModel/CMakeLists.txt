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
    QMLDIR        DIR
    QML_FILES     FILES
    TYPEINFO      TYPES
    PLUGIN_TARGET TARGET
)

install(FILES ${DIR} ${FILES} ${TYPES} DESTINATION ${INSTALL_DIR})
