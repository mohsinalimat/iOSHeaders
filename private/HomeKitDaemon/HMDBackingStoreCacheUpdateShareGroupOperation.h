//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class CKShare, HMDBackingStoreCacheShareGroup, NSArray;

@interface HMDBackingStoreCacheUpdateShareGroupOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheShareGroup *_record;
    CKShare *_share;
    NSArray *_users;
}

@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithShareGroup:(id)arg1 share:(id)arg2 users:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;

@end

