//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BSZeroingWeakReference : NSObject
{
    id _object;
    Class _objectClass;
    unsigned long long _objectAddress;
}

+ (id)referenceWithObject:(id)arg1;
@property(nonatomic) unsigned long long objectAddress; // @synthesize objectAddress=_objectAddress;
@property(nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(readonly, nonatomic) id object;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithObject:(id)arg1;

@end

