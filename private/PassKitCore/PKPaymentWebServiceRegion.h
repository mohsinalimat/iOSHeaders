//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding>
{
    NSString *_lastUpdatedTag;
    NSArray *_certificates;
    NSURL *_brokerURL;
    NSURL *_paymentServicesURL;
    NSURL *_paymentServicesMerchantURL;
    NSURL *_trustedServiceManagerURL;
    NSString *_trustedServiceManagerPushTopic;
    long long _consistencyCheckBackoffLevel;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long consistencyCheckBackoffLevel; // @synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel;
@property(retain, nonatomic) NSString *trustedServiceManagerPushTopic; // @synthesize trustedServiceManagerPushTopic=_trustedServiceManagerPushTopic;
@property(retain, nonatomic) NSURL *trustedServiceManagerURL; // @synthesize trustedServiceManagerURL=_trustedServiceManagerURL;
@property(retain, nonatomic) NSURL *paymentServicesMerchantURL; // @synthesize paymentServicesMerchantURL=_paymentServicesMerchantURL;
@property(retain, nonatomic) NSURL *paymentServicesURL; // @synthesize paymentServicesURL=_paymentServicesURL;
@property(retain, nonatomic) NSURL *brokerURL; // @synthesize brokerURL=_brokerURL;
@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(retain, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

