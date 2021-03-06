//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class DMFControlGroupIdentifier, NSString;

@interface CRKFetchUserImageRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_userIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

