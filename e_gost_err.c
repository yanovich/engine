/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include "e_gost_err.h"

#ifndef OPENSSL_NO_ERR

static ERR_STRING_DATA GOST_str_functs[] = {
    {ERR_PACK(0, GOST_F_DECODE_GOST_ALGOR_PARAMS, 0),
     "decode_gost_algor_params"},
    {ERR_PACK(0, GOST_F_ENCODE_GOST_ALGOR_PARAMS, 0),
     "encode_gost_algor_params"},
    {ERR_PACK(0, GOST_F_FILL_GOST_EC_PARAMS, 0), "fill_GOST_EC_params"},
    {ERR_PACK(0, GOST_F_GET_ENCRYPTION_PARAMS, 0), "get_encryption_params"},
    {ERR_PACK(0, GOST_F_GOST2015_GET_ASN1_PARAMS, 0),
     "gost2015_get_asn1_params"},
    {ERR_PACK(0, GOST_F_GOST2015_SET_ASN1_PARAMS, 0),
     "gost2015_set_asn1_params"},
    {ERR_PACK(0, GOST_F_GOST89_GET_ASN1_PARAMETERS, 0),
     "gost89_get_asn1_parameters"},
    {ERR_PACK(0, GOST_F_GOST89_SET_ASN1_PARAMETERS, 0),
     "gost89_set_asn1_parameters"},
    {ERR_PACK(0, GOST_F_GOST_CIPHER_CTL, 0), "gost_cipher_ctl"},
    {ERR_PACK(0, GOST_F_GOST_CMS_SET_KARI_SHARED_INFO, 0),
     "gost_cms_set_kari_shared_info"},
    {ERR_PACK(0, GOST_F_GOST_CMS_SET_KTRI_SHARED_INFO, 0),
     "gost_cms_set_ktri_shared_info"},
    {ERR_PACK(0, GOST_F_GOST_CMS_SET_SHARED_INFO, 0),
     "gost_cms_set_shared_info"},
    {ERR_PACK(0, GOST_F_GOST_EC_COMPUTE_PUBLIC, 0), "gost_ec_compute_public"},
    {ERR_PACK(0, GOST_F_GOST_EC_KEYGEN, 0), "gost_ec_keygen"},
    {ERR_PACK(0, GOST_F_GOST_EC_SIGN, 0), "gost_ec_sign"},
    {ERR_PACK(0, GOST_F_GOST_EC_VERIFY, 0), "gost_ec_verify"},
    {ERR_PACK(0, GOST_F_GOST_ENCODE_CMS_PARAMS, 0), "gost_encode_cms_params"},
    {ERR_PACK(0, GOST_F_GOST_GRASSHOPPER_CIPHER_CTL, 0),
     "gost_grasshopper_cipher_ctl"},
    {ERR_PACK(0, GOST_F_GOST_GRASSHOPPER_CIPHER_DO_CTRACPKM_OMAC, 0),
     "gost_grasshopper_cipher_do_ctracpkm_omac"},
    {ERR_PACK(0, GOST_F_GOST_GRASSHOPPER_CIPHER_DO_MGM, 0),
     "gost_grasshopper_cipher_do_mgm"},
    {ERR_PACK(0, GOST_F_GOST_GRASSHOPPER_CIPHER_INIT, 0),
     "gost_grasshopper_cipher_init"},
    {ERR_PACK(0, GOST_F_GOST_GRASSHOPPER_CIPHER_INIT_CTRACPKM_OMAC, 0),
     "gost_grasshopper_cipher_init_ctracpkm_omac"},
    {ERR_PACK(0, GOST_F_GOST_GRASSHOPPER_MGM_CTRL, 0),
     "gost_grasshopper_mgm_ctrl"},
    {ERR_PACK(0, GOST_F_GOST_GRASSHOPPER_SET_ASN1_PARAMETERS, 0),
     "gost_grasshopper_set_asn1_parameters"},
    {ERR_PACK(0, GOST_F_GOST_IMIT_CTRL, 0), "gost_imit_ctrl"},
    {ERR_PACK(0, GOST_F_GOST_IMIT_FINAL, 0), "gost_imit_final"},
    {ERR_PACK(0, GOST_F_GOST_IMIT_UPDATE, 0), "gost_imit_update"},
    {ERR_PACK(0, GOST_F_GOST_KDFTREE2012_256, 0), "gost_kdftree2012_256"},
    {ERR_PACK(0, GOST_F_GOST_KEXP15, 0), "gost_kexp15"},
    {ERR_PACK(0, GOST_F_GOST_KIMP15, 0), "gost_kimp15"},
    {ERR_PACK(0, GOST_F_GOST_MAGMA_CIPHER_DO_MGM, 0),
     "gost_magma_cipher_do_mgm"},
    {ERR_PACK(0, GOST_F_GOST_MAGMA_MGM_CTRL, 0), "gost_magma_mgm_ctrl"},
    {ERR_PACK(0, GOST_F_GOST_MGM128_AAD, 0), "gost_mgm128_aad"},
    {ERR_PACK(0, GOST_F_GOST_MGM128_DECRYPT, 0), "gost_mgm128_decrypt"},
    {ERR_PACK(0, GOST_F_GOST_MGM128_ENCRYPT, 0), "gost_mgm128_encrypt"},
    {ERR_PACK(0, GOST_F_MAGMA_CIPHER_CTL, 0), "magma_cipher_ctl"},
    {ERR_PACK(0, GOST_F_MAGMA_CIPHER_CTL_ACPKM_OMAC, 0),
     "magma_cipher_ctl_acpkm_omac"},
    {ERR_PACK(0, GOST_F_MAGMA_CIPHER_INIT_CTR_ACPKM_OMAC, 0),
     "magma_cipher_init_ctr_acpkm_omac"},
    {ERR_PACK(0, GOST_F_OMAC_ACPKM_IMIT_CTRL, 0), "omac_acpkm_imit_ctrl"},
    {ERR_PACK(0, GOST_F_OMAC_ACPKM_IMIT_FINAL, 0), "omac_acpkm_imit_final"},
    {ERR_PACK(0, GOST_F_OMAC_ACPKM_IMIT_UPDATE, 0), "omac_acpkm_imit_update"},
    {ERR_PACK(0, GOST_F_OMAC_ACPKM_KEY, 0), "omac_acpkm_key"},
    {ERR_PACK(0, GOST_F_OMAC_IMIT_CTRL, 0), "omac_imit_ctrl"},
    {ERR_PACK(0, GOST_F_OMAC_IMIT_FINAL, 0), "omac_imit_final"},
    {ERR_PACK(0, GOST_F_OMAC_IMIT_UPDATE, 0), "omac_imit_update"},
    {ERR_PACK(0, GOST_F_OMAC_KEY, 0), "omac_key"},
    {ERR_PACK(0, GOST_F_PARAM_COPY_GOST_EC, 0), "param_copy_gost_ec"},
    {ERR_PACK(0, GOST_F_PKEY_GOST2001_PARAMGEN, 0), "pkey_gost2001_paramgen"},
    {ERR_PACK(0, GOST_F_PKEY_GOST2012_PARAMGEN, 0), "pkey_gost2012_paramgen"},
    {ERR_PACK(0, GOST_F_PKEY_GOST2018_DECRYPT, 0), "pkey_gost2018_decrypt"},
    {ERR_PACK(0, GOST_F_PKEY_GOST2018_ENCRYPT, 0), "pkey_gost2018_encrypt"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_CTRL, 0), "pkey_gost_ctrl"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_DECRYPT, 0), "pkey_gost_decrypt"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_ECCP_DECRYPT, 0), "pkey_GOST_ECcp_decrypt"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_ECCP_ENCRYPT, 0), "pkey_GOST_ECcp_encrypt"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_EC_CTRL_STR_256, 0),
     "pkey_gost_ec_ctrl_str_256"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_EC_CTRL_STR_512, 0),
     "pkey_gost_ec_ctrl_str_512"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_EC_CTRL_STR_COMMON, 0),
     "pkey_gost_ec_ctrl_str_common"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_EC_DERIVE, 0), "pkey_gost_ec_derive"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_ENCRYPT, 0), "pkey_gost_encrypt"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_GRASSHOPPER_MAC_SIGNCTX_INIT, 0),
     "pkey_gost_grasshopper_mac_signctx_init"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_MAC_CTRL, 0), "pkey_gost_mac_ctrl"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_MAC_CTRL_STR, 0), "pkey_gost_mac_ctrl_str"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_MAC_KEYGEN_BASE, 0),
     "pkey_gost_mac_keygen_base"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_MAC_SIGNCTX_INIT, 0),
     "pkey_gost_mac_signctx_init"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_MAGMA_MAC_SIGNCTX_INIT, 0),
     "pkey_gost_magma_mac_signctx_init"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_OMAC_CTRL, 0), "pkey_gost_omac_ctrl"},
    {ERR_PACK(0, GOST_F_PKEY_GOST_OMAC_CTRL_STR, 0), "pkey_gost_omac_ctrl_str"},
    {ERR_PACK(0, GOST_F_PRINT_GOST_EC_PUB, 0), "print_gost_ec_pub"},
    {ERR_PACK(0, GOST_F_PRIV_DECODE_GOST, 0), "priv_decode_gost"},
    {ERR_PACK(0, GOST_F_PUB_DECODE_GOST_EC, 0), "pub_decode_gost_ec"},
    {ERR_PACK(0, GOST_F_PUB_ENCODE_GOST_EC, 0), "pub_encode_gost_ec"},
    {ERR_PACK(0, GOST_F_UNPACK_CP_SIGNATURE, 0), "unpack_cp_signature"},
    {ERR_PACK(0, GOST_F_VKO_COMPUTE_KEY, 0), "VKO_compute_key"},
    {0, NULL}
};

static ERR_STRING_DATA GOST_str_reasons[] = {
    {ERR_PACK(0, 0, GOST_R_BAD_KEY_PARAMETERS_FORMAT),
    "bad key parameters format"},
    {ERR_PACK(0, 0, GOST_R_BAD_MAC), "bad mac"},
    {ERR_PACK(0, 0, GOST_R_BAD_ORDER), "bad order"},
    {ERR_PACK(0, 0, GOST_R_BAD_PKEY_PARAMETERS_FORMAT),
    "bad pkey parameters format"},
    {ERR_PACK(0, 0, GOST_R_CANNOT_PACK_EPHEMERAL_KEY),
    "cannot pack ephemeral key"},
    {ERR_PACK(0, 0, GOST_R_CANNOT_UNPACK_EPHEMERAL_KEY),
    "cannot unpack ephemeral key"},
    {ERR_PACK(0, 0, GOST_R_CIPHER_NOT_FOUND), "cipher not found"},
    {ERR_PACK(0, 0, GOST_R_CTRL_CALL_FAILED), "ctrl call failed"},
    {ERR_PACK(0, 0, GOST_R_DATA_TOO_LARGE), "data too large"},
    {ERR_PACK(0, 0, GOST_R_ERROR_COMPUTING_EXPORT_KEYS),
    "error computing export keys"},
    {ERR_PACK(0, 0, GOST_R_ERROR_COMPUTING_SHARED_KEY),
    "error computing shared key"},
    {ERR_PACK(0, 0, GOST_R_ERROR_DECODING_PUBLIC_KEY),
    "error decoding public key"},
    {ERR_PACK(0, 0, GOST_R_ERROR_PARSING_KEY_TRANSPORT_INFO),
    "error parsing key transport info"},
    {ERR_PACK(0, 0, GOST_R_ERROR_POINT_MUL), "error point mul"},
    {ERR_PACK(0, 0, GOST_R_ERROR_SETTING_PEER_KEY), "error setting peer key"},
    {ERR_PACK(0, 0, GOST_R_INCOMPATIBLE_ALGORITHMS), "incompatible algorithms"},
    {ERR_PACK(0, 0, GOST_R_INCOMPATIBLE_PEER_KEY), "incompatible peer key"},
    {ERR_PACK(0, 0, GOST_R_INVALID_CIPHER), "invalid cipher"},
    {ERR_PACK(0, 0, GOST_R_INVALID_CIPHER_PARAMS), "invalid cipher params"},
    {ERR_PACK(0, 0, GOST_R_INVALID_CIPHER_PARAM_OID),
    "invalid cipher param oid"},
    {ERR_PACK(0, 0, GOST_R_INVALID_DIGEST_TYPE), "invalid digest type"},
    {ERR_PACK(0, 0, GOST_R_INVALID_IV_LENGTH), "invalid iv length"},
    {ERR_PACK(0, 0, GOST_R_INVALID_MAC_KEY_LENGTH), "invalid mac key length"},
    {ERR_PACK(0, 0, GOST_R_INVALID_MAC_KEY_SIZE), "invalid mac key size"},
    {ERR_PACK(0, 0, GOST_R_INVALID_MAC_PARAMS), "invalid mac params"},
    {ERR_PACK(0, 0, GOST_R_INVALID_MAC_SIZE), "invalid mac size"},
    {ERR_PACK(0, 0, GOST_R_INVALID_PARAMSET), "invalid paramset"},
    {ERR_PACK(0, 0, GOST_R_INVALID_TAG_LENGTH), "invalid tag length"},
    {ERR_PACK(0, 0, GOST_R_KEY_IS_NOT_INITIALIZED), "key is not initialized"},
    {ERR_PACK(0, 0, GOST_R_KEY_PARAMETERS_MISSING), "key parameters missing"},
    {ERR_PACK(0, 0, GOST_R_MAC_KEY_NOT_SET), "mac key not set"},
    {ERR_PACK(0, 0, GOST_R_NO_PARAMETERS_SET), "no parameters set"},
    {ERR_PACK(0, 0, GOST_R_NO_PEER_KEY), "no peer key"},
    {ERR_PACK(0, 0, GOST_R_NO_PRIVATE_PART_OF_NON_EPHEMERAL_KEYPAIR),
    "no private part of non ephemeral keypair"},
    {ERR_PACK(0, 0, GOST_R_PUBLIC_KEY_UNDEFINED), "public key undefined"},
    {ERR_PACK(0, 0, GOST_R_RNG_ERROR), "rng error"},
    {ERR_PACK(0, 0, GOST_R_SIGNATURE_MISMATCH), "signature mismatch"},
    {ERR_PACK(0, 0, GOST_R_SIGNATURE_PARTS_GREATER_THAN_Q),
    "signature parts greater than q"},
    {ERR_PACK(0, 0, GOST_R_UKM_NOT_SET), "ukm not set"},
    {ERR_PACK(0, 0, GOST_R_UNSUPPORTED_CIPHER_CTL_COMMAND),
    "unsupported cipher ctl command"},
    {ERR_PACK(0, 0, GOST_R_UNSUPPORTED_PARAMETER_SET),
    "unsupported parameter set"},
    {ERR_PACK(0, 0, GOST_R_UNSUPPORTED_RECIPIENT_INFO),
    "unsupported recipient info"},
    {0, NULL}
};

#endif

static int lib_code = 0;
static int error_loaded = 0;

int ERR_load_GOST_strings(void)
{
    if (lib_code == 0)
        lib_code = ERR_get_next_error_library();

    if (!error_loaded) {
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(lib_code, GOST_str_functs);
        ERR_load_strings(lib_code, GOST_str_reasons);
#endif
        error_loaded = 1;
    }
    return 1;
}

void ERR_unload_GOST_strings(void)
{
    if (error_loaded) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(lib_code, GOST_str_functs);
        ERR_unload_strings(lib_code, GOST_str_reasons);
#endif
        error_loaded = 0;
    }
}

void ERR_GOST_error(int function, int reason, char *file, int line)
{
    if (lib_code == 0)
        lib_code = ERR_get_next_error_library();
    ERR_PUT_error(lib_code, function, reason, file, line);
}
