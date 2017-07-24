//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesUI/TTMergeableStringDelegate-Protocol.h>

@class NSMutableArray, NSString, NSUUID;
@protocol ICTableCellMergeableStringObserving;

@interface ICTableCellMergeableStringDelegate : NSObject <TTMergeableStringDelegate>
{
    id <ICTableCellMergeableStringObserving> _changeObserver;
    NSUUID *_columnID;
    NSUUID *_rowID;
    unsigned long long _editingCount;
    NSMutableArray *_undoCommands;
}

@property(retain, nonatomic) NSMutableArray *undoCommands; // @synthesize undoCommands=_undoCommands;
@property(nonatomic) unsigned long long editingCount; // @synthesize editingCount=_editingCount;
@property(readonly, nonatomic) NSUUID *rowID; // @synthesize rowID=_rowID;
@property(readonly, nonatomic) NSUUID *columnID; // @synthesize columnID=_columnID;
@property(readonly, nonatomic) __weak id <ICTableCellMergeableStringObserving> changeObserver; // @synthesize changeObserver=_changeObserver;
- (void).cxx_destruct;
- (_Bool)wantsUndoCommands;
- (void)addUndoCommand:(id)arg1;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)endEditing;
- (void)beginEditing;
- (id)initWithTableCellChangeObserver:(id)arg1 columnID:(id)arg2 rowID:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

