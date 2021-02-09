/*
 * Copyright 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <keymaster/keymaster_tags.h>

namespace keymaster {

#ifdef KEYMASTER_NAME_TAGS
const char* StringifyTag(keymaster_tag_t tag) {
    switch (tag) {
    case KM_TAG_INVALID:
        return "KM_TAG_INVALID";
    case KM_TAG_PURPOSE:
        return "KM_TAG_PURPOSE";
    case KM_TAG_ALGORITHM:
        return "KM_TAG_ALGORITHM";
    case KM_TAG_KEY_SIZE:
        return "KM_TAG_KEY_SIZE";
    case KM_TAG_BLOCK_MODE:
        return "KM_TAG_BLOCK_MODE";
    case KM_TAG_DIGEST:
        return "KM_TAG_DIGEST";
    case KM_TAG_PADDING:
        return "KM_TAG_PADDING";
    case KM_TAG_CALLER_NONCE:
        return "KM_TAG_CALLER_NONCE";
    case KM_TAG_MIN_MAC_LENGTH:
        return "KM_TAG_MIN_MAC_LENGTH";
    case KM_TAG_RSA_PUBLIC_EXPONENT:
        return "KM_TAG_RSA_PUBLIC_EXPONENT";
    case KM_TAG_BLOB_USAGE_REQUIREMENTS:
        return "KM_TAG_BLOB_USAGE_REQUIREMENTS";
    case KM_TAG_BOOTLOADER_ONLY:
        return "KM_TAG_BOOTLOADER_ONLY";
    case KM_TAG_ACTIVE_DATETIME:
        return "KM_TAG_ACTIVE_DATETIME";
    case KM_TAG_ORIGINATION_EXPIRE_DATETIME:
        return "KM_TAG_ORIGINATION_EXPIRE_DATETIME";
    case KM_TAG_USAGE_EXPIRE_DATETIME:
        return "KM_TAG_USAGE_EXPIRE_DATETIME";
    case KM_TAG_MIN_SECONDS_BETWEEN_OPS:
        return "KM_TAG_MIN_SECONDS_BETWEEN_OPS";
    case KM_TAG_MAX_USES_PER_BOOT:
        return "KM_TAG_MAX_USES_PER_BOOT";
    case KM_TAG_USAGE_COUNT_LIMIT:
        return "KM_TAG_USAGE_COUNT_LIMIT";
    case KM_TAG_ALL_USERS:
        return "KM_TAG_ALL_USERS";
    case KM_TAG_USER_ID:
        return "KM_TAG_USER_ID";
    case KM_TAG_USER_SECURE_ID:
        return "KM_TAG_USER_SECURE_ID";
    case KM_TAG_NO_AUTH_REQUIRED:
        return "KM_TAG_NO_AUTH_REQUIRED";
    case KM_TAG_USER_AUTH_TYPE:
        return "KM_TAG_USER_AUTH_TYPE";
    case KM_TAG_AUTH_TIMEOUT:
        return "KM_TAG_AUTH_TIMEOUT";
    case KM_TAG_ALL_APPLICATIONS:
        return "KM_TAG_ALL_APPLICATIONS";
    case KM_TAG_APPLICATION_ID:
        return "KM_TAG_APPLICATION_ID";
    case KM_TAG_APPLICATION_DATA:
        return "KM_TAG_APPLICATION_DATA";
    case KM_TAG_CREATION_DATETIME:
        return "KM_TAG_CREATION_DATETIME";
    case KM_TAG_ORIGIN:
        return "KM_TAG_ORIGIN";
    case KM_TAG_ROLLBACK_RESISTANCE:
        return "KM_TAG_ROLLBACK_RESISTANCE";
    case KM_TAG_ROLLBACK_RESISTANT:
        return "KM_TAG_ROLLBACK_RESISTANT";
    case KM_TAG_ROOT_OF_TRUST:
        return "KM_TAG_ROOT_OF_TRUST";
    case KM_TAG_ASSOCIATED_DATA:
        return "KM_TAG_ASSOCIATED_DATA";
    case KM_TAG_NONCE:
        return "KM_TAG_NONCE";
    case KM_TAG_AUTH_TOKEN:
        return "KM_TAG_AUTH_TOKEN";
    case KM_TAG_MAC_LENGTH:
        return "KM_TAG_MAC_LENGTH";
    case KM_TAG_KDF:
        return "KM_TAG_KDF";
    case KM_TAG_EC_CURVE:
        return "KM_TAG_EC_CURVE";
    case KM_TAG_ECIES_SINGLE_HASH_MODE:
        return "KM_TAG_ECIES_SINGLE_HASH_MODE";
    case KM_TAG_OS_VERSION:
        return "KM_TAG_OS_VERSION";
    case KM_TAG_OS_PATCHLEVEL:
        return "KM_TAG_OS_PATCHLEVEL";
    case KM_TAG_EXPORTABLE:
        return "KM_TAG_EXPORTABLE";
    case KM_TAG_UNIQUE_ID:
        return "KM_TAG_UNIQUE_ID";
    case KM_TAG_INCLUDE_UNIQUE_ID:
        return "KM_TAG_INCLUDE_UNIQUE_ID";
    case KM_TAG_RESET_SINCE_ID_ROTATION:
        return "KM_TAG_RESET_SINCE_ID_ROTATION";
    case KM_TAG_ALLOW_WHILE_ON_BODY:
        return "KM_TAG_ALLOW_WHILE_ON_BODY";
    case KM_TAG_TRUSTED_CONFIRMATION_REQUIRED:
        return "KM_TAG_TRUSTED_CONFIRMATION_REQUIRED";
    case KM_TAG_UNLOCKED_DEVICE_REQUIRED:
        return "KM_TAG_UNLOCKED_DEVICE_REQUIRED";
    case KM_TAG_ATTESTATION_CHALLENGE:
        return "KM_TAG_ATTESTATION_CHALLENGE";
    case KM_TAG_ATTESTATION_APPLICATION_ID:
        return "KM_TAG_ATTESTATION_APPLICATION_ID";
    case KM_TAG_ATTESTATION_ID_BRAND:
        return "KM_TAG_ATTESTATION_ID_BRAND";
    case KM_TAG_ATTESTATION_ID_DEVICE:
        return "KM_TAG_ATTESTATION_ID_DEVICE";
    case KM_TAG_ATTESTATION_ID_PRODUCT:
        return "KM_TAG_ATTESTATION_ID_PRODUCT";
    case KM_TAG_ATTESTATION_ID_SERIAL:
        return "KM_TAG_ATTESTATION_ID_SERIAL";
    case KM_TAG_ATTESTATION_ID_IMEI:
        return "KM_TAG_ATTESTATION_ID_IMEI";
    case KM_TAG_ATTESTATION_ID_MEID:
        return "KM_TAG_ATTESTATION_ID_MEID";
    case KM_TAG_ATTESTATION_ID_MANUFACTURER:
        return "KM_TAG_ATTESTATION_ID_MANUFACTURER";
    case KM_TAG_ATTESTATION_ID_MODEL:
        return "KM_TAG_ATTESTATION_ID_MODEL";
    case KM_TAG_EARLY_BOOT_ONLY:
        return "KM_TAG_EARLY_BOOT_ONLY";
    case KM_TAG_DEVICE_UNIQUE_ATTESTATION:
        return "KM_TAG_DEVICE_UNIQUE_ATTESTATION";
    case KM_TAG_IDENTITY_CREDENTIAL_KEY:
        return "KM_TAG_IDENTITY_CREDENTIAL_KEY";
    case KM_TAG_CONFIRMATION_TOKEN:
        return "KM_TAG_CONFIRMATION_TOKEN";
    case KM_TAG_CERTIFICATE_SERIAL:
        return "KM_TAG_CERTIFICATE_SERIAL";
    case KM_TAG_CERTIFICATE_SUBJECT:
        return "KM_TAG_CERTIFICATE_SUBJECT";
    case KM_TAG_CERTIFICATE_NOT_BEFORE:
        return "KM_TAG_CERTIFICATE_NOT_BEFORE";
    case KM_TAG_CERTIFICATE_NOT_AFTER:
        return "KM_TAG_CERTIFICATE_NOT_AFTER";
    case KM_TAG_STORAGE_KEY:
        return "KM_TAG_STORAGE_KEY";
    case KM_TAG_TRUSTED_USER_PRESENCE_REQUIRED:
        return "KM_TAG_TRUSTED_USER_PRESENCE_REQUIRED";
    case KM_TAG_BOOT_PATCHLEVEL:
        return "KM_TAG_BOOT_PATCHLEVEL";
    case KM_TAG_VENDOR_PATCHLEVEL:
        return "KM_TAG_VENDOR_PATCHLEVEL";
    case KM_TAG_RSA_OAEP_MGF_DIGEST:
        return "KM_TAG_RSA_OAEP_MGF_DIGEST";
    }
    return "<Unknown>";
}
#endif  // KEYMASTER_NAME_TAGS

// DEFINE_KEYMASTER_TAG is used to create TypedTag instances for each non-enum keymaster tag.
#define DEFINE_KEYMASTER_TAG(type, name) TypedTag<type, KM_##name> name

DEFINE_KEYMASTER_TAG(KM_INVALID, TAG_INVALID);
DEFINE_KEYMASTER_TAG(KM_UINT, TAG_KEY_SIZE);
DEFINE_KEYMASTER_TAG(KM_UINT, TAG_MAC_LENGTH);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_CALLER_NONCE);
DEFINE_KEYMASTER_TAG(KM_UINT, TAG_MIN_MAC_LENGTH);
DEFINE_KEYMASTER_TAG(KM_ULONG, TAG_RSA_PUBLIC_EXPONENT);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_ECIES_SINGLE_HASH_MODE);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_INCLUDE_UNIQUE_ID);
DEFINE_KEYMASTER_TAG(KM_DATE, TAG_ACTIVE_DATETIME);
DEFINE_KEYMASTER_TAG(KM_DATE, TAG_ORIGINATION_EXPIRE_DATETIME);
DEFINE_KEYMASTER_TAG(KM_DATE, TAG_USAGE_EXPIRE_DATETIME);
DEFINE_KEYMASTER_TAG(KM_UINT, TAG_MIN_SECONDS_BETWEEN_OPS);
DEFINE_KEYMASTER_TAG(KM_UINT, TAG_MAX_USES_PER_BOOT);
DEFINE_KEYMASTER_TAG(KM_UINT, TAG_USAGE_COUNT_LIMIT);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_ALL_USERS);
DEFINE_KEYMASTER_TAG(KM_UINT, TAG_USER_ID);
DEFINE_KEYMASTER_TAG(KM_ULONG_REP, TAG_USER_SECURE_ID);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_NO_AUTH_REQUIRED);
DEFINE_KEYMASTER_TAG(KM_UINT, TAG_AUTH_TIMEOUT);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_ALLOW_WHILE_ON_BODY);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_ALL_APPLICATIONS);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_APPLICATION_ID);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_APPLICATION_DATA);
DEFINE_KEYMASTER_TAG(KM_DATE, TAG_CREATION_DATETIME);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_ROLLBACK_RESISTANCE);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_ROLLBACK_RESISTANT);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_ROOT_OF_TRUST);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_ASSOCIATED_DATA);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_NONCE);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_AUTH_TOKEN);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_BOOTLOADER_ONLY);
DEFINE_KEYMASTER_TAG(KM_UINT, TAG_OS_VERSION);
DEFINE_KEYMASTER_TAG(KM_UINT, TAG_OS_PATCHLEVEL);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_UNIQUE_ID);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_ATTESTATION_CHALLENGE);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_ATTESTATION_APPLICATION_ID);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_ATTESTATION_ID_BRAND);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_ATTESTATION_ID_DEVICE);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_ATTESTATION_ID_PRODUCT);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_ATTESTATION_ID_SERIAL);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_ATTESTATION_ID_IMEI);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_ATTESTATION_ID_MEID);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_ATTESTATION_ID_MANUFACTURER);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_ATTESTATION_ID_MODEL);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_UNLOCKED_DEVICE_REQUIRED);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_TRUSTED_CONFIRMATION_REQUIRED);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_EARLY_BOOT_ONLY);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_DEVICE_UNIQUE_ATTESTATION);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_IDENTITY_CREDENTIAL_KEY);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_TRUSTED_USER_PRESENCE_REQUIRED);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_CONFIRMATION_TOKEN);
DEFINE_KEYMASTER_TAG(KM_BIGNUM, TAG_CERTIFICATE_SERIAL);
DEFINE_KEYMASTER_TAG(KM_BYTES, TAG_CERTIFICATE_SUBJECT);
DEFINE_KEYMASTER_TAG(KM_DATE, TAG_CERTIFICATE_NOT_BEFORE);
DEFINE_KEYMASTER_TAG(KM_DATE, TAG_CERTIFICATE_NOT_AFTER);
DEFINE_KEYMASTER_TAG(KM_BOOL, TAG_STORAGE_KEY);
DEFINE_KEYMASTER_TAG(KM_UINT, TAG_BOOT_PATCHLEVEL);
DEFINE_KEYMASTER_TAG(KM_UINT, TAG_VENDOR_PATCHLEVEL);

// DEFINE_KEYMASTER_ENUM_TAG is used to create TypedEnumTag instances for each enum keymaster tag.

#define DEFINE_KEYMASTER_ENUM_TAG(type, name, enumtype) TypedEnumTag<type, KM_##name, enumtype> name

DEFINE_KEYMASTER_ENUM_TAG(KM_ENUM_REP, TAG_PURPOSE, keymaster_purpose_t);
DEFINE_KEYMASTER_ENUM_TAG(KM_ENUM, TAG_ALGORITHM, keymaster_algorithm_t);
DEFINE_KEYMASTER_ENUM_TAG(KM_ENUM_REP, TAG_BLOCK_MODE, keymaster_block_mode_t);
DEFINE_KEYMASTER_ENUM_TAG(KM_ENUM_REP, TAG_DIGEST, keymaster_digest_t);
DEFINE_KEYMASTER_ENUM_TAG(KM_ENUM, TAG_DIGEST_OLD, keymaster_digest_t);
DEFINE_KEYMASTER_ENUM_TAG(KM_ENUM_REP, TAG_PADDING, keymaster_padding_t);
DEFINE_KEYMASTER_ENUM_TAG(KM_ENUM, TAG_PADDING_OLD, keymaster_padding_t);
DEFINE_KEYMASTER_ENUM_TAG(KM_ENUM, TAG_BLOB_USAGE_REQUIREMENTS,
                          keymaster_key_blob_usage_requirements_t);
DEFINE_KEYMASTER_ENUM_TAG(KM_ENUM, TAG_ORIGIN, keymaster_key_origin_t);
DEFINE_KEYMASTER_ENUM_TAG(KM_ENUM, TAG_USER_AUTH_TYPE, hw_authenticator_type_t);
DEFINE_KEYMASTER_ENUM_TAG(KM_ENUM_REP, TAG_KDF, keymaster_kdf_t);
DEFINE_KEYMASTER_ENUM_TAG(KM_ENUM, TAG_EC_CURVE, keymaster_ec_curve_t);
DEFINE_KEYMASTER_ENUM_TAG(KM_ENUM_REP, TAG_RSA_OAEP_MGF_DIGEST, keymaster_digest_t);

}  // namespace keymaster
