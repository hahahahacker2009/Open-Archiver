
add_library(Qt5::AccessibleQuickFactory MODULE IMPORTED)

_populate_Quick_plugin_properties(AccessibleQuickFactory RELEASE "accessible/qtaccessiblequick.dll")

list(APPEND Qt5Quick_PLUGINS Qt5::AccessibleQuickFactory)
