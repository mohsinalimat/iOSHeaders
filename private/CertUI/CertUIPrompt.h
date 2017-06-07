//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CertUIPrompt : NSObject
{
    struct __SecTrust *_trust;
    NSString *_host;
    NSString *_service;
    NSString *_connectionDisplayName;
    CDUnknownBlockType _responseBlock;
}

+ (id)promptQueue;
+ (id)stringForResponse:(int)arg1;
@property(copy, nonatomic) NSString *connectionDisplayName; // @synthesize connectionDisplayName=_connectionDisplayName;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (int)showAndWaitForResponse;
- (void)_informConsumerOfResponse:(int)arg1;
- (void)showPromptWithOptions:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)showPromptWithResponseBlock:(CDUnknownBlockType)arg1;
- (int)_sendRemoteMessageWithPromptOptions:(id)arg1;
- (int)_sendRemoteMessage;
- (int)_responseFromReplyDict:(id)arg1;
- (id)_messagingCenter;
- (id)_newUserInfoWithHostname:(id)arg1 trust:(struct __SecTrust *)arg2 options:(id)arg3;
- (id)_digestFromTrust:(struct __SecTrust *)arg1;
- (_Bool)_isRootCertificateFromTrust:(struct __SecTrust *)arg1;
- (id)_expirationFromTrust:(struct __SecTrust *)arg1;
- (id)_purposeFromTrustProperties:(id)arg1;
- (id)_propertyNamed:(id)arg1 ofType:(id)arg2 inProperties:(id)arg3;
- (id)_subtitleFromTrust:(struct __SecTrust *)arg1;
- (id)_issuerFromTrust:(struct __SecTrust *)arg1;
- (id)_titleFromTrust:(struct __SecTrust *)arg1;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust *)arg1;
- (id)_copyPropertiesFromTrust:(struct __SecTrust *)arg1;
- (id)_sendablePropertiesFromProperties:(id)arg1;
- (id)_sendablePropertyFromProperty:(id)arg1;
- (struct __SecTrust *)trust;
- (void)setTrust:(struct __SecTrust *)arg1;
- (id)description;
- (void)dealloc;

@end

