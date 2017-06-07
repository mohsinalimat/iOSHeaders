//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Engram/NSCopying-Protocol.h>
#import <Engram/NSSecureCoding-Protocol.h>

@class ENStableGroupID, NSData;

@interface ENGroupID : NSObject <NSSecureCoding, NSCopying>
{
    int _generation;
    ENStableGroupID *_stableGroupID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int generation; // @synthesize generation=_generation;
@property(readonly, nonatomic) ENStableGroupID *stableGroupID; // @synthesize stableGroupID=_stableGroupID;
- (void).cxx_destruct;
- (_Bool)compare:(id)arg1 withResult:(long long *)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSData *dataRepresentation;
- (id)description;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStableGroupID:(id)arg1 generation:(int)arg2;
- (id)initWithDataRepresentation:(id)arg1;

@end
