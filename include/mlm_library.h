/*  =========================================================================
    malamute - MALAMUTE wrapper

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of the Malamute Project.                         
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           

    #################################################################
    #   GENERATED SOURCE CODE, DO NOT EDIT EXCEPT EXPERIMENTALLY    #
    #   Please read the README.txt file                             #
    #################################################################
    =========================================================================
*/

#ifndef __mlm_library_H_INCLUDED__
#define __mlm_library_H_INCLUDED__

//  External dependencies
#include <czmq.h>

//  MALAMUTE version macros for compile-time API detection

#define MALAMUTE_VERSION_MAJOR 1
#define MALAMUTE_VERSION_MINOR 1
#define MALAMUTE_VERSION_PATCH 0

#define MALAMUTE_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define MALAMUTE_VERSION \
    MALAMUTE_MAKE_VERSION(MALAMUTE_VERSION_MAJOR, MALAMUTE_VERSION_MINOR, MALAMUTE_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined LIBMLM_STATIC
#       define MLM_EXPORT
#   elif defined LIBMLM_EXPORTS
#       define MLM_EXPORT __declspec(dllexport)
#   else
#       define MLM_EXPORT __declspec(dllimport)
#   endif
#else
#   define MLM_EXPORT
#endif

//  Opaque class structures to allow forward references
typedef struct _mlm_msg_t mlm_msg_t;
#define MLM_MSG_T_DEFINED
typedef struct _mlm_client_t mlm_client_t;
#define MLM_CLIENT_T_DEFINED
typedef struct _mlm_server_t mlm_server_t;
#define MLM_SERVER_T_DEFINED


//  Public API classes
#include "mlm_msg.h"
#include "mlm_client.h"
#include "mlm_server.h"

#endif
/*
    #################################################################
    #   GENERATED SOURCE CODE, DO NOT EDIT EXCEPT EXPERIMENTALLY    #
    #   Please read the README.txt file in the model directory.     #
    #################################################################
*/    
