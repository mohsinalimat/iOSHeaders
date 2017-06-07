//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFMessageDestination.h>

@class HMDAccount;

@interface HMDRemoteAccountMessageDestination : HMFMessageDestination
{
    _Bool _multicast;
    HMDAccount *_account;
}

+ (id)shortDescription;
+ (id)allMessageDestinations;
@property(readonly, nonatomic, getter=isMulticast) _Bool multicast; // @synthesize multicast=_multicast;
@property(readonly, nonatomic) HMDAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(_Bool)arg3;
- (id)initWithTarget:(id)arg1;

@end

