//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMFWeakObject : HMFObject
{
    id _object;
    unsigned long long _objectHash;
}

@property(readonly, nonatomic) unsigned long long objectHash; // @synthesize objectHash=_objectHash;
@property(readonly) __weak id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithWeakObject:(id)arg1;
- (id)init;

@end

