// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINII_SCRIPT_BITCOINIICONSENSUS_H
#define BITCOINII_SCRIPT_BITCOINIICONSENSUS_H

#include <stdint.h>

#if defined(BUILD_BITCOINII_INTERNAL) && defined(HAVE_CONFIG_H)
#include <config/bitcoinII-config.h>
  #if defined(_WIN32)
    #if defined(HAVE_DLLEXPORT_ATTRIBUTE)
      #define EXPORT_SYMBOL __declspec(dllexport)
    #else
      #define EXPORT_SYMBOL
    #endif
  #elif defined(HAVE_DEFAULT_VISIBILITY_ATTRIBUTE)
    #define EXPORT_SYMBOL __attribute__ ((visibility ("default")))
  #endif
#elif defined(MSC_VER) && !defined(STATIC_LIBBITCOINIICONSENSUS)
  #define EXPORT_SYMBOL __declspec(dllimport)
#endif

#ifndef EXPORT_SYMBOL
  #define EXPORT_SYMBOL
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define BITCOINIICONSENSUS_API_VER 2

typedef enum bitcoinIIconsensus_error_t
{
    bitcoinIIconsensus_ERR_OK = 0,
    bitcoinIIconsensus_ERR_TX_INDEX,
    bitcoinIIconsensus_ERR_TX_SIZE_MISMATCH,
    bitcoinIIconsensus_ERR_TX_DESERIALIZE,
    bitcoinIIconsensus_ERR_AMOUNT_REQUIRED,
    bitcoinIIconsensus_ERR_INVALID_FLAGS,
    bitcoinIIconsensus_ERR_SPENT_OUTPUTS_REQUIRED,
    bitcoinIIconsensus_ERR_SPENT_OUTPUTS_MISMATCH
} bitcoinIIconsensus_error;

/** Script verification flags */
enum
{
    bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_NONE                = 0,
    bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_P2SH                = (1U << 0), // evaluate P2SH (BIP16) subscripts
    bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_DERSIG              = (1U << 2), // enforce strict DER (BIP66) compliance
    bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_NULLDUMMY           = (1U << 4), // enforce NULLDUMMY (BIP147)
    bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_CHECKLOCKTIMEVERIFY = (1U << 9), // enable CHECKLOCKTIMEVERIFY (BIP65)
    bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_CHECKSEQUENCEVERIFY = (1U << 10), // enable CHECKSEQUENCEVERIFY (BIP112)
    bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_WITNESS             = (1U << 11), // enable WITNESS (BIP141)
    bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_TAPROOT             = (1U << 17), // enable TAPROOT (BIPs 341 & 342)
    bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_ALL                 = bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_P2SH | bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_DERSIG |
                                                               bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_NULLDUMMY | bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_CHECKLOCKTIMEVERIFY |
                                                               bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_CHECKSEQUENCEVERIFY | bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_WITNESS |
                                                               bitcoinIIconsensus_SCRIPT_FLAGS_VERIFY_TAPROOT
};

typedef struct {
    const unsigned char *scriptPubKey;
    unsigned int scriptPubKeySize;
    int64_t value;
} UTXO;

/// Returns 1 if the input nIn of the serialized transaction pointed to by
/// txTo correctly spends the scriptPubKey pointed to by scriptPubKey under
/// the additional constraints specified by flags.
/// If not nullptr, err will contain an error/success code for the operation
EXPORT_SYMBOL int bitcoinIIconsensus_verify_script(const unsigned char *scriptPubKey, unsigned int scriptPubKeyLen,
                                                 const unsigned char *txTo        , unsigned int txToLen,
                                                 unsigned int nIn, unsigned int flags, bitcoinIIconsensus_error* err);

EXPORT_SYMBOL int bitcoinIIconsensus_verify_script_with_amount(const unsigned char *scriptPubKey, unsigned int scriptPubKeyLen, int64_t amount,
                                    const unsigned char *txTo        , unsigned int txToLen,
                                    unsigned int nIn, unsigned int flags, bitcoinIIconsensus_error* err);

EXPORT_SYMBOL int bitcoinIIconsensus_verify_script_with_spent_outputs(const unsigned char *scriptPubKey, unsigned int scriptPubKeyLen, int64_t amount,
                                    const unsigned char *txTo        , unsigned int txToLen,
                                    const UTXO *spentOutputs, unsigned int spentOutputsLen,
                                    unsigned int nIn, unsigned int flags, bitcoinIIconsensus_error* err);

EXPORT_SYMBOL unsigned int bitcoinIIconsensus_version();

#ifdef __cplusplus
} // extern "C"
#endif

#undef EXPORT_SYMBOL

#endif // BITCOINII_SCRIPT_BITCOINIICONSENSUS_H
