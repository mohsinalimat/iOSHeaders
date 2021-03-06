//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDHealthWrapCodableMessageHeader, NSMutableData, NSOutputStream, NSUUID;

@interface HDHealthWrapEncryptor : NSObject
{
    NSOutputStream *_outputStream;
    struct __SecCertificate *_certificate;
    unsigned int _algorithm;
    unsigned int _options;
    unsigned int _keySize;
    struct _CCCryptor *_cryptor;
    unsigned int _hmacAlgorithm;
    struct {
        unsigned int ctx[96];
    } _hmacContext;
    struct CC_SHA256state_st _sha256Context;
    NSMutableData *_buffer;
    NSUUID *_uuid;
    HDHealthWrapCodableMessageHeader *_header;
    unsigned long long _encryptedBytesCount;
}

- (void).cxx_destruct;
- (_Bool)finalizeWithError:(id *)arg1;
- (_Bool)appendData:(id)arg1 error:(id *)arg2;
- (_Bool)_finalizeCryptorWithError:(id *)arg1;
- (_Bool)_updateCryptorWithData:(id)arg1 error:(id *)arg2;
- (_Bool)_appendEncryptedBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_writeStream:(const char *)arg1 length:(unsigned long long)arg2 hash:(_Bool)arg3 error:(id *)arg4;
- (_Bool)startWithError:(id *)arg1;
- (_Bool)_startCryptorWithError:(id *)arg1;
- (_Bool)_updateHeaderWithKey:(id)arg1 iv:(id)arg2 hmacKey:(id)arg3 error:(id *)arg4;
- (id)_encryptData:(id)arg1 withCertificate:(struct __SecCertificate *)arg2 error:(id *)arg3;
- (struct __SecKey *)_copyAndVerifyPublicKeyFromCertificate:(struct __SecCertificate *)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1 certificate:(struct __SecCertificate *)arg2 algorithm:(unsigned int)arg3 options:(unsigned int)arg4 keySize:(unsigned int)arg5 uuid:(id)arg6;

@end

