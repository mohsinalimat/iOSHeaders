//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol OS_dispatch_queue;

@interface IDSValidationSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    long long _stateFlags;
    NSData *_helloMessage;
    NSString *_UDID;
    NSString *_serialNumber;
    NSString *_IMEI;
    NSString *_MEID;
    NSData *_scoringNonce;
}

+ (_Bool)isScoringSupported;
+ (_Bool)isSigningSupported;
@property(copy, nonatomic) NSData *scoringNonce; // @synthesize scoringNonce=_scoringNonce;
@property(copy, nonatomic) NSString *MEID; // @synthesize MEID=_MEID;
@property(copy, nonatomic) NSString *IMEI; // @synthesize IMEI=_IMEI;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property(copy, nonatomic) NSData *helloMessage; // @synthesize helloMessage=_helloMessage;
@property(nonatomic) long long stateFlags; // @synthesize stateFlags=_stateFlags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)deviceAbsintheMEID;
- (id)deviceAbsintheIMEI;
- (id)deviceAbsintheSerialNumber;
- (id)deviceAbsintheUDID;
@property(readonly, nonatomic) _Bool isUsingBAA;
@property(readonly, nonatomic) _Bool isUsingAbsintheV4;
@property(readonly, nonatomic) _Bool isInitializedForScoring;
@property(readonly, nonatomic) _Bool isInitializedForSigning;
- (void)invalidate;
- (void)deviceScoreWithCompletion:(CDUnknownBlockType)arg1;
- (id)signData:(id)arg1;
- (id)activateWithValidationData:(id)arg1 serverKey:(id)arg2 scoringNonce:(id)arg3;
- (id)initialize;
- (void)dealloc;
- (id)description;
- (id)initWithQueue:(id)arg1;

@end

