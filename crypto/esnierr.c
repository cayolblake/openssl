/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/esnierr.h>

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA ESNI_str_reasons[] = {
    {ERR_PACK(ERR_LIB_ESNI, 0, ESNI_R_ASCIIHEX_DECODE_ERROR),
    "asciihex decode error"},
    {ERR_PACK(ERR_LIB_ESNI, 0, ESNI_R_BAD_INPUT), "bad input"},
    {ERR_PACK(ERR_LIB_ESNI, 0, ESNI_R_BASE64_DECODE_ERROR),
    "base64 decode error"},
    {ERR_PACK(ERR_LIB_ESNI, 0, ESNI_R_NOT_IMPL), "not implemented"},
    {ERR_PACK(ERR_LIB_ESNI, 0, ESNI_R_RR_DECODE_ERROR),
    "can't decode DNS resource record"},
    {0, NULL}
};

#endif

int ERR_load_ESNI_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_func_error_string(ESNI_str_reasons[0].error) == NULL)
        ERR_load_strings_const(ESNI_str_reasons);
#endif
    return 1;
}