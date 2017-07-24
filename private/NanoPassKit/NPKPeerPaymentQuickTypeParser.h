//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface NPKPeerPaymentQuickTypeParser : NSObject
{
    NSSet *_supportedCurrencyCodes;
    NSSet *_allowedPayloadIDs;
}

@property(readonly, nonatomic) NSSet *allowedPayloadIDs; // @synthesize allowedPayloadIDs=_allowedPayloadIDs;
@property(readonly, nonatomic) NSSet *supportedCurrencyCodes; // @synthesize supportedCurrencyCodes=_supportedCurrencyCodes;
- (void).cxx_destruct;
- (id)parsePayload:(id)arg1 payloadID:(id)arg2 maxCount:(unsigned long long)arg3;
- (id)parsePayload:(id)arg1 payloadID:(id)arg2;
- (id)initWithSupportedCurrencyCodes:(id)arg1 allowedPayloadIDs:(id)arg2;

@end

