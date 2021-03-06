﻿/*
 * PROJECT:   NSudo Devil Mode
 * FILE:      NSudoDevilModeVersion.h
 * PURPOSE:   NSudo Devil Mode Version Definition
 *
 * LICENSE:   The MIT License
 *
 * DEVELOPER: Mouri_Naruto (Mouri_Naruto AT Outlook.com)
 */

#ifndef NSUDO_DEVIL_MODE_VERSION
#define NSUDO_DEVIL_MODE_VERSION

// Compliant with the Semantic Versioning 2.0.0 specification.

#define NSUDO_DEVIL_MODE_VERSION_MAJOR 8
#define NSUDO_DEVIL_MODE_VERSION_MINOR 1
#define NSUDO_DEVIL_MODE_VERSION_PATCH 0

//#define NSUDO_DEVIL_MODE_VERSION_TAG L"alpha.1"

#endif


#ifndef MACRO_TO_STRING
#define _MACRO_TO_STRING(arg) L#arg
#define MACRO_TO_STRING(arg) _MACRO_TO_STRING(arg)
#endif

#ifndef DEFINE_FILE_VERSION_WITH_COMMA_FORMAT
#define DEFINE_FILE_VERSION_WITH_COMMA_FORMAT(MAJOR,MINOR,BUILD,REVISION) \
    MAJOR,MINOR,BUILD,REVISION
#endif

#ifndef DEFINE_FILE_VERSION_WITH_DOT_FORMAT
#define DEFINE_FILE_VERSION_WITH_DOT_FORMAT(MAJOR,MINOR,BUILD,REVISION) \
    MAJOR.MINOR.BUILD.REVISION
#endif

#ifndef DEFINE_SEMANTIC_VERSION
#define DEFINE_SEMANTIC_VERSION(MAJOR,MINOR,PATCH) MAJOR.MINOR.PATCH
#endif

#ifndef NSUDO_DEVIL_MODE_FILE_VERSION_WITH_COMMA_FORMAT
#define NSUDO_DEVIL_MODE_FILE_VERSION_WITH_COMMA_FORMAT \
    DEFINE_FILE_VERSION_WITH_COMMA_FORMAT( \
        NSUDO_DEVIL_MODE_VERSION_MAJOR, \
        NSUDO_DEVIL_MODE_VERSION_MINOR, \
        NSUDO_DEVIL_MODE_VERSION_PATCH, \
        0)
#endif

#ifndef NSUDO_DEVIL_MODE_FILE_VERSION_WITH_DOT_FORMAT
#define NSUDO_DEVIL_MODE_FILE_VERSION_WITH_DOT_FORMAT \
    DEFINE_FILE_VERSION_WITH_DOT_FORMAT( \
        NSUDO_DEVIL_MODE_VERSION_MAJOR, \
        NSUDO_DEVIL_MODE_VERSION_MINOR, \
        NSUDO_DEVIL_MODE_VERSION_PATCH, \
        0)
#endif

#ifndef NSUDO_DEVIL_MODE_SEMANTIC_VERSION
#define NSUDO_DEVIL_MODE_SEMANTIC_VERSION \
    DEFINE_SEMANTIC_VERSION( \
        NSUDO_DEVIL_MODE_VERSION_MAJOR, \
        NSUDO_DEVIL_MODE_VERSION_MINOR, \
        NSUDO_DEVIL_MODE_VERSION_PATCH)
#endif

#ifndef NSUDO_DEVIL_MODE_FILE_VERSION_STRING_WITH_COMMA_FORMAT
#define NSUDO_DEVIL_MODE_FILE_VERSION_STRING_WITH_COMMA_FORMAT \
    MACRO_TO_STRING(NSUDO_DEVIL_MODE_FILE_VERSION_WITH_COMMA_FORMAT)
#endif

#ifndef NSUDO_DEVIL_MODE_FILE_VERSION_STRING_WITH_DOT_FORMAT
#define NSUDO_DEVIL_MODE_FILE_VERSION_STRING_WITH_DOT_FORMAT \
    MACRO_TO_STRING(NSUDO_DEVIL_MODE_FILE_VERSION_WITH_DOT_FORMAT)
#endif

#ifndef NSUDO_DEVIL_MODE_SEMANTIC_VERSION_STRING
#define NSUDO_DEVIL_MODE_SEMANTIC_VERSION_STRING \
    MACRO_TO_STRING(NSUDO_DEVIL_MODE_SEMANTIC_VERSION)
#endif

#ifdef NSUDO_DEVIL_MODE_VERSION_TAG
#define NSUDO_DEVIL_MODE_VERSION_TAG_STRING L"-" NSUDO_DEVIL_MODE_VERSION_TAG
#else
#define NSUDO_DEVIL_MODE_VERSION_TAG_STRING
#endif

#ifndef NSUDO_DEVIL_MODE_VERSION_STRING
#define NSUDO_DEVIL_MODE_VERSION_STRING \
    NSUDO_DEVIL_MODE_SEMANTIC_VERSION_STRING \
    NSUDO_DEVIL_MODE_VERSION_TAG_STRING
#endif
