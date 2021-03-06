//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>

@class NSString;

@interface RPCompanionLinkDevice : NSObject <NSSecureCoding>
{
    NSString *_groupID;
    NSString *_identifier;
    NSString *_model;
    NSString *_name;
    NSString *_role;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

