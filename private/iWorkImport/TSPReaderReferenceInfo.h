//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSPReaderReferenceInfo : NSObject
{
    long long _objectIdentifier;
    long long _componentIdentifier;
}

+ (id)newReferenceInfoWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2;
@property(readonly, nonatomic) long long componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(readonly, nonatomic) long long objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
- (id)initWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2;
- (id)init;

@end

