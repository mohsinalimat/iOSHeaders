//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface TSPSaveOperationState : NSObject
{
    NSMapTable *_newDataStorages;
    int _sampleID;
    unsigned long long _updateType;
}

@property(nonatomic) int sampleID; // @synthesize sampleID=_sampleID;
@property(readonly, nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldUpdate;
- (void)enumerateDatasAndStoragesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasNewStorageForData:(id)arg1;
- (void)addNewStorage:(id)arg1 forData:(id)arg2;
- (id)initWithUpdateType:(unsigned long long)arg1;
- (id)init;

@end

