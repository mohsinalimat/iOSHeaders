//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSDictionary, TSPComponentObjectUUIDMap;

__attribute__((visibility("hidden")))
@interface TSPDeepCopyMetadata : TSPObject
{
    long long _rootObjectIdentifier;
    unsigned long long _version;
    TSPComponentObjectUUIDMap *_componentObjectUUIDMap;
    NSDictionary *_cachedDataMap;
}

@property(readonly, nonatomic) NSDictionary *cachedDataMap; // @synthesize cachedDataMap=_cachedDataMap;
@property(readonly, nonatomic) TSPComponentObjectUUIDMap *componentObjectUUIDMap; // @synthesize componentObjectUUIDMap=_componentObjectUUIDMap;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) long long rootObjectIdentifier; // @synthesize rootObjectIdentifier=_rootObjectIdentifier;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithRootObject:(id)arg1 version:(unsigned long long)arg2 componentObjectUUIDMap:(id)arg3 cachedDataMap:(id)arg4;
- (id)initWithContext:(id)arg1;

@end

