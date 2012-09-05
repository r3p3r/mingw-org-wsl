/**
 * @file ntdsapi.h
 * @copy 2012 MinGW.org project
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
/*
 * ntdsapi.h - Active Directory
 *
 * THIS SOFTWARE IS NOT COPYRIGHTED
 *
 * This source code is offered for use in the public domain.  You may use,
 * modify or distribute it freely.
 *
 * This code is distributed in the hope that it will be useful but
 * WITHOUT ANY WARRANTY.  ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 * DISCLAIMED.  This includes but is not limited to warranties of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */
#ifndef _NTDSAPI_H
#define _NTDSAPI_H
#pragma GCC system_header

#ifdef __cplusplus
extern "C" {
#endif

/*--- Active Directory Reference - Active Directory Enumerations */
#if (_WIN32_WINNT >= 0x0501)
typedef enum _DS_MANGLE_FOR {
	DS_MANGLE_UNKNOWN = 0,
	DS_MANGLE_OBJECT_RDN_FOR_DELETION = 1,
	DS_MANGLE_OBJECT_RDN_FOR_NAME_CONFLICT = 2
} DS_MANGLE_FOR;
#endif /* (_WIN32_WINNT >= 0x0501) */
#if (_WIN32_WINNT >= 0x0500)
typedef enum {
	DS_NAME_NO_ERROR = 0,
	DS_NAME_ERROR_RESOLVING = 1,
	DS_NAME_ERROR_NOT_FOUND = 2,
	DS_NAME_ERROR_NOT_UNIQUE = 3,
	DS_NAME_ERROR_NO_MAPPING = 4,
	DS_NAME_ERROR_DOMAIN_ONLY = 5,
	DS_NAME_ERROR_NO_SYNTACTICAL_MAPPING = 6,
	DS_NAME_ERROR_TRUST_REFERRAL = 7
} DS_NAME_ERROR;
typedef enum {
	DS_NAME_NO_FLAGS = 0x0,
	DS_NAME_FLAG_SYNTACTICAL_ONLY = 0x1,
	DS_NAME_FLAG_EVAL_AT_DC = 0x2,
	DS_NAME_FLAG_GCVERIFY = 0x4,
	DS_NAME_FLAG_TRUST_REFERRAL = 0x8
} DS_NAME_FLAGS;
typedef enum {
	DS_UNKNOWN_NAME = 0,
	DS_FQDN_1779_NAME = 1,
	DS_NT4_ACCOUNT_NAME = 2,
	DS_DISPLAY_NAME = 3,
	DS_UNIQUE_ID_NAME = 6,
	DS_CANONICAL_NAME = 7,
	DS_USER_PRINCIPAL_NAME = 8,
	DS_CANONICAL_NAME_EX = 9,
	DS_SERVICE_PRINCIPAL_NAME = 10,
	DS_SID_OR_SID_HISTORY_NAME = 11,
	DS_DNS_DOMAIN_NAME = 12
} DS_NAME_FORMAT;
typedef enum _DS_REPL_INFO_TYPE {
	DS_REPL_INFO_NEIGHBORS = 0,
	DS_REPL_INFO_CURSORS_FOR_NC = 1,
	DS_REPL_INFO_METADATA_FOR_OBJ = 2,
	DS_REPL_INFO_KCC_DSA_CONNECT_FAILURES = 3,
	DS_REPL_INFO_KCC_DSA_LINK_FAILURES = 4,
	DS_REPL_INFO_PENDING_OPS = 5,
	DS_REPL_INFO_METADATA_FOR_ATTR_VALUE = 6,
	DS_REPL_INFO_CURSORS_2_FOR_NC = 7,
	DS_REPL_INFO_CURSORS_3_FOR_NC = 8,
	DS_REPL_INFO_METADATA_2_FOR_OBJ = 9,
	DS_REPL_INFO_METADATA_2_FOR_ATTR_VALUE = 10
} DS_REPL_INFO_TYPE;
typedef enum {
	DS_REPL_OP_TYPE_SYNC = 0,
	DS_REPL_OP_TYPE_ADD,
	DS_REPL_OP_TYPE_DELETE,
	DS_REPL_OP_TYPE_MODIFY,
	DS_REPL_OP_TYPE_UPDATE_REFS
} DS_REPL_OP_TYPE;
typedef enum {
	DS_REPSYNCALL_WIN32_ERROR_CONTACTING_SERVER = 0,
	DS_REPSYNCALL_WIN32_ERROR_REPLICATING = 1,
	DS_REPSYNCALL_SERVER_UNREACHABLE = 2
} DS_REPSYNCALL_ERROR;
typedef enum {
	DS_REPSYNCALL_EVENT_ERROR = 0,
	DS_REPSYNCALL_EVENT_SYNC_STARTED = 1,
	DS_REPSYNCALL_EVENT_SYNC_COMPLETED = 2,
	DS_REPSYNCALL_EVENT_FINISHED = 3
} DS_REPSYNCALL_EVENT;
typedef enum {
	DS_SPN_DNS_HOST = 0,
	DS_SPN_DN_HOST = 1,
	DS_SPN_NB_HOST = 2,
	DS_SPN_DOMAIN = 3,
	DS_SPN_NB_DOMAIN = 4,
	DS_SPN_SERVICE = 5
} DS_SPN_NAME_TYPE;
typedef enum {
	DS_SPN_ADD_SPN_OP = 0,
	DS_SPN_REPLACE_SPN_OP = 1,
	DS_SPN_DELETE_SPN_OP = 2
} DS_SPN_WRITE_OP;


#endif /* (_WIN32_WINNT >= 0x0500) */

#ifdef __cplusplus
}
#endif
#endif
