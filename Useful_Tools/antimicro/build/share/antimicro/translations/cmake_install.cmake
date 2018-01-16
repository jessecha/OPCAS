# Install script for directory: /home/ubuntu/antimicro-master/share/antimicro/translations

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/antimicro/translations" TYPE FILE FILES
    "/home/ubuntu/antimicro-master/build/share/antimicro/translations/antimicro_zh_CN.qm"
    "/home/ubuntu/antimicro-master/build/share/antimicro/translations/antimicro_ru.qm"
    "/home/ubuntu/antimicro-master/build/share/antimicro/translations/antimicro_br.qm"
    "/home/ubuntu/antimicro-master/build/share/antimicro/translations/antimicro_de.qm"
    "/home/ubuntu/antimicro-master/build/share/antimicro/translations/antimicro_uk.qm"
    "/home/ubuntu/antimicro-master/build/share/antimicro/translations/antimicro_fr.qm"
    "/home/ubuntu/antimicro-master/build/share/antimicro/translations/antimicro_ja.qm"
    "/home/ubuntu/antimicro-master/build/share/antimicro/translations/antimicro_sr.qm"
    "/home/ubuntu/antimicro-master/build/share/antimicro/translations/antimicro_en.qm"
    "/home/ubuntu/antimicro-master/build/share/antimicro/translations/antimicro.qm"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

