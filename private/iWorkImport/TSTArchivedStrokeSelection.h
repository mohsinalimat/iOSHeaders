//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSKSelection, TSTStrokeSelection;

__attribute__((visibility("hidden")))
@interface TSTArchivedStrokeSelection : TSPObject <TSKArchivedSelection>
{
    TSTStrokeSelection *mStrokeSelection;
}

@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=mStrokeSelection;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

