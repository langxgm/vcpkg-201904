/*
 * Copyright 2013 MongoDB Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef MONGOC_CONFIG_H
#define MONGOC_CONFIG_H

/* MONGOC_USER_SET_CFLAGS is set from config based on what compiler flags were
 * used to compile mongoc */
#define MONGOC_USER_SET_CFLAGS " /DWIN32 /D_WINDOWS /W3 /utf-8 /MP "

#define MONGOC_USER_SET_LDFLAGS "/machine:X86"

/* MONGOC_CC is used to determine what C compiler was used to compile mongoc */
#define MONGOC_CC "C:/Program Files (x86)/Microsoft Visual Studio/2017/Enterprise/VC/Tools/MSVC/14.16.27023/bin/Hostx64/x86/cl.exe"

/*
 * MONGOC_ENABLE_SSL_SECURE_CHANNEL is set from configure to determine if we are
 * compiled with Native SSL support on Windows
 */
#define MONGOC_ENABLE_SSL_SECURE_CHANNEL 1

#if MONGOC_ENABLE_SSL_SECURE_CHANNEL != 1
#  undef MONGOC_ENABLE_SSL_SECURE_CHANNEL
#endif


/*
 * MONGOC_ENABLE_CRYPTO_CNG is set from configure to determine if we are
 * compiled with Native Crypto support on Windows
 */
#define MONGOC_ENABLE_CRYPTO_CNG 1

#if MONGOC_ENABLE_CRYPTO_CNG != 1
#  undef MONGOC_ENABLE_CRYPTO_CNG
#endif


/*
 * MONGOC_ENABLE_SSL_SECURE_TRANSPORT is set from configure to determine if we are
 * compiled with Native SSL support on Darwin
 */
#define MONGOC_ENABLE_SSL_SECURE_TRANSPORT 0

#if MONGOC_ENABLE_SSL_SECURE_TRANSPORT != 1
#  undef MONGOC_ENABLE_SSL_SECURE_TRANSPORT
#endif


/*
 * MONGOC_ENABLE_CRYPTO_COMMON_CRYPTO is set from configure to determine if we are
 * compiled with Native Crypto support on Darwin
 */
#define MONGOC_ENABLE_CRYPTO_COMMON_CRYPTO 0

#if MONGOC_ENABLE_CRYPTO_COMMON_CRYPTO != 1
#  undef MONGOC_ENABLE_CRYPTO_COMMON_CRYPTO
#endif


/*
 * MONGOC_ENABLE_SSL_LIBRESSL is set from configure to determine if we are
 * compiled with LibreSSL support.
 */
#define MONGOC_ENABLE_SSL_LIBRESSL 0

#if MONGOC_ENABLE_SSL_LIBRESSL != 1
#  undef MONGOC_ENABLE_SSL_LIBRESSL
#endif


/*
 * MONGOC_ENABLE_SSL_OPENSSL is set from configure to determine if we are
 * compiled with OpenSSL support.
 */
#define MONGOC_ENABLE_SSL_OPENSSL 0

#if MONGOC_ENABLE_SSL_OPENSSL != 1
#  undef MONGOC_ENABLE_SSL_OPENSSL
#endif


/*
 * MONGOC_ENABLE_CRYPTO_LIBCRYPTO is set from configure to determine if we are
 * compiled with OpenSSL support.
 */
#define MONGOC_ENABLE_CRYPTO_LIBCRYPTO 0

#if MONGOC_ENABLE_CRYPTO_LIBCRYPTO != 1
#  undef MONGOC_ENABLE_CRYPTO_LIBCRYPTO
#endif


/*
 * MONGOC_ENABLE_SSL is set from configure to determine if we are
 * compiled with any SSL support.
 */
#define MONGOC_ENABLE_SSL 1

#if MONGOC_ENABLE_SSL != 1
#  undef MONGOC_ENABLE_SSL
#endif


/*
 * MONGOC_ENABLE_CRYPTO is set from configure to determine if we are
 * compiled with any crypto support.
 */
#define MONGOC_ENABLE_CRYPTO 1

#if MONGOC_ENABLE_CRYPTO != 1
#  undef MONGOC_ENABLE_CRYPTO
#endif


/*
 * Use system crypto profile
 */
#define MONGOC_ENABLE_CRYPTO_SYSTEM_PROFILE 0

#if MONGOC_ENABLE_CRYPTO_SYSTEM_PROFILE != 1
#  undef MONGOC_ENABLE_CRYPTO_SYSTEM_PROFILE
#endif


/*
 * Use ASN1_STRING_get0_data () rather than the deprecated ASN1_STRING_data
 */
#define MONGOC_HAVE_ASN1_STRING_GET0_DATA 0

#if MONGOC_HAVE_ASN1_STRING_GET0_DATA != 1
#  undef MONGOC_HAVE_ASN1_STRING_GET0_DATA
#endif


/*
 * MONGOC_ENABLE_SASL is set from configure to determine if we are
 * compiled with SASL support.
 */
#define MONGOC_ENABLE_SASL 1

#if MONGOC_ENABLE_SASL != 1
#  undef MONGOC_ENABLE_SASL
#endif


/*
 * MONGOC_ENABLE_SASL_CYRUS is set from configure to determine if we are
 * compiled with Cyrus SASL support.
 */
#define MONGOC_ENABLE_SASL_CYRUS 0

#if MONGOC_ENABLE_SASL_CYRUS != 1
#  undef MONGOC_ENABLE_SASL_CYRUS
#endif


/*
 * MONGOC_ENABLE_SASL_SSPI is set from configure to determine if we are
 * compiled with SSPI support.
 */
#define MONGOC_ENABLE_SASL_SSPI 1

#if MONGOC_ENABLE_SASL_SSPI != 1
#  undef MONGOC_ENABLE_SASL_SSPI
#endif


/*
 * MONGOC_ENABLE_SASL_GSSAPI is set from configure to determine if we are
 * compiled with GSSAPI support.
 */
#define MONGOC_ENABLE_SASL_GSSAPI 0

#if MONGOC_ENABLE_SASL_GSSAPI != 1
#  undef MONGOC_ENABLE_SASL_GSSAPI
#endif


/*
 * MONGOC_HAVE_SASL_CLIENT_DONE is set from configure to determine if we
 * have SASL and its version is new enough to use sasl_client_done (),
 * which supersedes sasl_done ().
 */
#define MONGOC_HAVE_SASL_CLIENT_DONE 0

#if MONGOC_HAVE_SASL_CLIENT_DONE != 1
#  undef MONGOC_HAVE_SASL_CLIENT_DONE
#endif


/*
 * MONGOC_HAVE_WEAK_SYMBOLS is set from configure to determine if the
 * compiler supports the (weak) annotation. We use it to prevent
 * Link-Time-Optimization (LTO) in our constant-time mongoc_memcmp()
 * This is known to work with GNU GCC and Solaris Studio
 */
#define MONGOC_HAVE_WEAK_SYMBOLS 0

#if MONGOC_HAVE_WEAK_SYMBOLS != 1
#  undef MONGOC_HAVE_WEAK_SYMBOLS
#endif


/*
 * Disable automatic calls to mongoc_init() and mongoc_cleanup()
 * before main() is called, and after exit() (respectively).
 */
#define MONGOC_NO_AUTOMATIC_GLOBALS 0

#if MONGOC_NO_AUTOMATIC_GLOBALS != 1
#  undef MONGOC_NO_AUTOMATIC_GLOBALS
#endif

/*
 * MONGOC_HAVE_SOCKLEN is set from configure to determine if we
 * need to emulate the type.
 */
#define MONGOC_HAVE_SOCKLEN 1

#if MONGOC_HAVE_SOCKLEN != 1
#  undef MONGOC_HAVE_SOCKLEN
#endif


/*
 * MONGOC_HAVE_DNSAPI is set from configure to determine if we should use the
 * Windows dnsapi for SRV record lookups.
 */
#define MONGOC_HAVE_DNSAPI 1

#if MONGOC_HAVE_DNSAPI != 1
#  undef MONGOC_HAVE_DNSAPI
#endif


/*
 * MONGOC_HAVE_RES_NSEARCH is set from configure to determine if we
 * have thread-safe res_nsearch().
 */
#define MONGOC_HAVE_RES_NSEARCH 0

#if MONGOC_HAVE_RES_NSEARCH != 1
#  undef MONGOC_HAVE_RES_NSEARCH
#endif


/*
 * MONGOC_HAVE_RES_NDESTROY is set from configure to determine if we
 * have BSD / Darwin's res_ndestroy().
 */
#define MONGOC_HAVE_RES_NDESTROY 0

#if MONGOC_HAVE_RES_NDESTROY != 1
#  undef MONGOC_HAVE_RES_NDESTROY
#endif


/*
 * MONGOC_HAVE_RES_NCLOSE is set from configure to determine if we
 * have Linux's res_nclose().
 */
#define MONGOC_HAVE_RES_NCLOSE 0

#if MONGOC_HAVE_RES_NCLOSE != 1
#  undef MONGOC_HAVE_RES_NCLOSE
#endif


/*
 * MONGOC_HAVE_RES_SEARCH is set from configure to determine if we
 * have thread-unsafe res_search(). It's unset if we have the preferred
 * res_nsearch().
 */
#define MONGOC_HAVE_RES_SEARCH 0

#if MONGOC_HAVE_RES_SEARCH != 1
#  undef MONGOC_HAVE_RES_SEARCH
#endif


/*
 * Set from configure, see
 * https://curl.haxx.se/mail/lib-2009-04/0287.html
 */
#define MONGOC_SOCKET_ARG2 struct sockaddr
#define MONGOC_SOCKET_ARG3 socklen_t

/*
 * Enable wire protocol compression negotiation
 *
 */
#define MONGOC_ENABLE_COMPRESSION 1

#if MONGOC_ENABLE_COMPRESSION != 1
#  undef MONGOC_ENABLE_COMPRESSION
#endif

/*
 * Set if we have snappy compression support
 *
 */
#define MONGOC_ENABLE_COMPRESSION_SNAPPY 0

#if MONGOC_ENABLE_COMPRESSION_SNAPPY != 1
#  undef MONGOC_ENABLE_COMPRESSION_SNAPPY
#endif


/*
 * Set if we have zlib compression support
 *
 */
#define MONGOC_ENABLE_COMPRESSION_ZLIB 1

#if MONGOC_ENABLE_COMPRESSION_ZLIB != 1
#  undef MONGOC_ENABLE_COMPRESSION_ZLIB
#endif


/*
 * NOTICE:
 * If you're about to update this file and add a config flag, make sure to
 * update:
 * o The bitfield in mongoc-handshake-private.h
 * o _get_config_bitfield() in mongoc-handshake.c
 * o examples/parse_handshake_cfg.py
 */

#endif /* MONGOC_CONFIG_H */
