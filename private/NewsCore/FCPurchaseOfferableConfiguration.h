//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCPurchaseOfferableConfiguration : NSObject
{
    _Bool _allowsPublisherPhoneApp;
    _Bool _allowsPublisherPadApp;
    _Bool _allowsPublisherWebsite;
    _Bool _preferredOffer;
    NSString *_purchaseID;
}

@property(nonatomic) _Bool preferredOffer; // @synthesize preferredOffer=_preferredOffer;
@property(nonatomic) _Bool allowsPublisherWebsite; // @synthesize allowsPublisherWebsite=_allowsPublisherWebsite;
@property(nonatomic) _Bool allowsPublisherPadApp; // @synthesize allowsPublisherPadApp=_allowsPublisherPadApp;
@property(nonatomic) _Bool allowsPublisherPhoneApp; // @synthesize allowsPublisherPhoneApp=_allowsPublisherPhoneApp;
@property(copy, nonatomic) NSString *purchaseID; // @synthesize purchaseID=_purchaseID;
- (void).cxx_destruct;
- (id)initWithPurchaseID:(id)arg1 allowsPublisherPhoneApp:(_Bool)arg2 allowsPublisherPadApp:(_Bool)arg3 allowsPublisherWebsite:(_Bool)arg4 preferredOffer:(_Bool)arg5;

@end

