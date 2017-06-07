//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKPaymentSetupProductPaymentOption : NSObject <NSSecureCoding>
{
    unsigned long long _priority;
    long long _cardType;
    long long _supportedProtocols;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;
@property(readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentOptionDictionary:(id)arg1;

@end

