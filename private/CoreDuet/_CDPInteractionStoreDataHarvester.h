//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDPDataHarvester-Protocol.h>

@class NSArray, NSMutableDictionary, NSPredicate, NSString, _CDInteractionStore;

@interface _CDPInteractionStoreDataHarvester : NSObject <_CDPDataHarvester>
{
    NSMutableDictionary *_identifierToContactMap;
    _CDInteractionStore *_store;
    NSPredicate *_predicate;
    NSArray *_interactions;
}

@property(readonly, nonatomic) NSArray *interactions; // @synthesize interactions=_interactions;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(retain, nonatomic) _CDInteractionStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)contactForIdentifier:(id)arg1;
- (void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

