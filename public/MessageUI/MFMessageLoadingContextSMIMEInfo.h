//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFMessageLoadingContext, MFMessageLoadingContextEvent, MFMessageSigner, NSArray;

@interface MFMessageLoadingContextSMIMEInfo : NSObject
{
    MFMessageLoadingContextEvent *_loadEvent;
}

+ (id)smimeInfoForLoadEvent:(id)arg1;
@property(readonly, nonatomic) MFMessageLoadingContextEvent *loadEvent; // @synthesize loadEvent=_loadEvent;
- (struct __SecCertificate *)copySigningCertificate;
- (void)removeSavedEncryptionCertificate;
- (void)saveEncryptionCertificate;
- (_Bool)isCertificateStoredInKeychain;
- (unsigned long long)keychainCertificateStatus;
- (id)_firstSender;
@property(readonly, nonatomic, getter=isMessageEncrypted) _Bool messageEncrypted;
@property(readonly, nonatomic, getter=isMessageSigned) _Bool messageSigned;
@property(readonly, nonatomic) MFMessageSigner *firstSigner;
@property(readonly, nonatomic) NSArray *signers;
@property(readonly, nonatomic) __weak MFMessageLoadingContext *context;
- (id)initWithLoadEvent:(id)arg1;
- (void)dealloc;

@end

