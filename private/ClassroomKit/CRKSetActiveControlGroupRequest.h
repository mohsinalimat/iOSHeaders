//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class DMFControlGroupIdentifier;

@interface CRKSetActiveControlGroupRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_groupIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) DMFControlGroupIdentifier *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

