//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCCommand.h>

@class NSArray;

@interface FCModifyRecordsCommand : FCCommand
{
    _Bool _merge;
    CDUnknownBlockType _localRecordsGenerator;
    NSArray *_localRecords;
}

+ (id)desiredKeys;
@property(nonatomic) _Bool merge; // @synthesize merge=_merge;
@property(copy, nonatomic) NSArray *localRecords; // @synthesize localRecords=_localRecords;
@property(copy, nonatomic) CDUnknownBlockType localRecordsGenerator; // @synthesize localRecordsGenerator=_localRecordsGenerator;
- (void).cxx_destruct;
- (void)handleBatchOfLocalRecords:(id)arg1 internalPrivateDataContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleLocalRecordsFromStream:(id)arg1 internalPrivateDataContext:(id)arg2 delegate:(id)arg3;
- (void)coalesceWithCommand:(id)arg1;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) NSArray *t_localRecords;
- (_Bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;
- (id)recordZoneName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalRecords:(id)arg1 merge:(_Bool)arg2;
- (id)initWithLocalRecordsGenerator:(CDUnknownBlockType)arg1 merge:(_Bool)arg2;
- (id)init;

@end

