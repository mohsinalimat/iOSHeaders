//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableIndexSet;

@interface PLImportSessionInfo : NSObject
{
    NSMutableIndexSet *_importIndexes;
    NSMutableIndexSet *_importInProgressIndexes;
    NSMutableIndexSet *_importErrorIndexes;
    NSMutableIndexSet *_importCompleteIndexes;
    _Bool _importComplete;
    _Bool _importStopped;
    _Bool _importingSelection;
}

@property(nonatomic) _Bool importingSelection; // @synthesize importingSelection=_importingSelection;
@property(readonly, retain, nonatomic) NSIndexSet *completedIndexes; // @synthesize completedIndexes=_importCompleteIndexes;
@property(readonly, retain, nonatomic) NSIndexSet *errorIndexes; // @synthesize errorIndexes=_importErrorIndexes;
@property(readonly, retain, nonatomic) NSIndexSet *inProgressIndexes; // @synthesize inProgressIndexes=_importInProgressIndexes;
@property(readonly, retain, nonatomic) NSIndexSet *importIndexes; // @synthesize importIndexes=_importIndexes;
@property(nonatomic) _Bool importStopped; // @synthesize importStopped=_importStopped;
@property(nonatomic) _Bool importComplete; // @synthesize importComplete=_importComplete;
- (void)shiftIndexesStartingAtIndex:(unsigned long long)arg1 by:(unsigned long long)arg2;
- (void)removeIndex:(unsigned long long)arg1;
- (void)completeImportForIndex:(unsigned long long)arg1 error:(_Bool)arg2;
- (void)beginImportForIndex:(unsigned long long)arg1;
- (_Bool)_isImportCompleteForIndex:(unsigned long long)arg1;
- (void)addIndexToImport:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithImportIndexes:(id)arg1;

@end

