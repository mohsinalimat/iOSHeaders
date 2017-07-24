//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextStorage.h>

#import <NotesUI/TTMergeableStringDelegate-Protocol.h>
#import <NotesUI/TTTextUndoTarget-Protocol.h>

@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSObject, NSString, NSUndoManager, TTMergeableAttributedString, TTMergeableStringUndoGroup, TTMergeableStringVersionedDocument;
@protocol TTTextStorageStyler, TTTextUndoTarget;

@interface TTTextStorage : NSTextStorage <TTMergeableStringDelegate, TTTextUndoTarget>
{
    NSMutableAttributedString *_attributedString;
    unsigned long long _temporaryAttributeEditing;
    _Bool _directlyEditing;
    _Bool _previouslyHadMarkedText;
    _Bool _wantsUndoCommands;
    _Bool _convertAttributes;
    _Bool _shouldConvertTablesToTabs;
    _Bool _retainOriginalFormatting;
    _Bool _filterSubstringAttributes;
    _Bool _filterPastedAttributes;
    _Bool _filterSubstringAttributesForPlainText;
    _Bool _disableUndoCoalesceBreaking;
    _Bool _isDictating;
    _Bool _isHandlingTextCheckingResults;
    _Bool _isTypingOrMarkingText;
    _Bool _isSelectingText;
    _Bool _isDragging;
    _Bool _isResettingBaseWritingDirection;
    _Bool _isReadingSelectionFromPasteboard;
    _Bool _isChangingSelectionByGestures;
    _Bool _isEndingEditing;
    _Bool _isFixing;
    _Bool _isApplyingUndoCommand;
    _Bool _pendingFixupAfterEditing;
    _Bool _delayedFixupAfterEditingWantsUndoCommand;
    NSUndoManager *_undoManager;
    NSObject<TTTextUndoTarget> *_overrideUndoTarget;
    id <TTTextStorageStyler> _styler;
    NSMutableArray *_deletedRanges;
    TTMergeableStringVersionedDocument *_document;
    NSArray *_pasteboardTypes;
    NSMutableArray *_undoCommands;
    TTMergeableStringUndoGroup *_coalescingUndoGroup;
    unsigned long long _editingCount;
    unsigned long long _ttEditedMask;
    long long _ttChangeInLength;
    struct _NSRange _beforeEndEditedRange;
    struct _NSRange _lastUndoEditRange;
    struct _NSRange _ttEditedRange;
}

+ (id)filteredAttributedSubstring:(id)arg1 fromRange:(struct _NSRange)arg2 forPlainText:(_Bool)arg3 fixAttachments:(_Bool)arg4;
+ (void)fixAttachmentsForRenderingInAttributedString:(id)arg1 forPlainText:(_Bool)arg2;
+ (id)removeTextAttachmentsForAttributedString:(id)arg1 translateTTFont:(_Bool)arg2;
+ (id)removeDataDetectorLinksForAttributedString:(id)arg1;
+ (id)standardizedAttributedStringFromAttributedString:(id)arg1 withStyler:(id)arg2 fixAttachments:(_Bool)arg3 translateTTFont:(_Bool)arg4;
+ (double)listItemGlyphPointSizeForUnorderedListStyle:(unsigned int)arg1 withStyler:(id)arg2;
+ (id)bulletTextAttributesWithTextFont:(struct UIFont *)arg1 paragraphStyle:(id)arg2 letterpress:(_Bool)arg3 withStyler:(id)arg4;
@property(nonatomic) _Bool delayedFixupAfterEditingWantsUndoCommand; // @synthesize delayedFixupAfterEditingWantsUndoCommand=_delayedFixupAfterEditingWantsUndoCommand;
@property(nonatomic) long long ttChangeInLength; // @synthesize ttChangeInLength=_ttChangeInLength;
@property(nonatomic) unsigned long long ttEditedMask; // @synthesize ttEditedMask=_ttEditedMask;
@property(nonatomic) struct _NSRange ttEditedRange; // @synthesize ttEditedRange=_ttEditedRange;
@property(nonatomic) _Bool pendingFixupAfterEditing; // @synthesize pendingFixupAfterEditing=_pendingFixupAfterEditing;
@property(nonatomic) _Bool isApplyingUndoCommand; // @synthesize isApplyingUndoCommand=_isApplyingUndoCommand;
@property(nonatomic) _Bool isFixing; // @synthesize isFixing=_isFixing;
@property(nonatomic) unsigned long long editingCount; // @synthesize editingCount=_editingCount;
@property(nonatomic) struct _NSRange lastUndoEditRange; // @synthesize lastUndoEditRange=_lastUndoEditRange;
@property(retain, nonatomic) TTMergeableStringUndoGroup *coalescingUndoGroup; // @synthesize coalescingUndoGroup=_coalescingUndoGroup;
@property(retain, nonatomic) NSMutableArray *undoCommands; // @synthesize undoCommands=_undoCommands;
@property(nonatomic) _Bool isEndingEditing; // @synthesize isEndingEditing=_isEndingEditing;
@property(nonatomic) _Bool isChangingSelectionByGestures; // @synthesize isChangingSelectionByGestures=_isChangingSelectionByGestures;
@property(nonatomic) _Bool isReadingSelectionFromPasteboard; // @synthesize isReadingSelectionFromPasteboard=_isReadingSelectionFromPasteboard;
@property(nonatomic) _Bool isResettingBaseWritingDirection; // @synthesize isResettingBaseWritingDirection=_isResettingBaseWritingDirection;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) _Bool isSelectingText; // @synthesize isSelectingText=_isSelectingText;
@property(nonatomic) _Bool isTypingOrMarkingText; // @synthesize isTypingOrMarkingText=_isTypingOrMarkingText;
@property(nonatomic) _Bool isHandlingTextCheckingResults; // @synthesize isHandlingTextCheckingResults=_isHandlingTextCheckingResults;
@property(nonatomic) _Bool isDictating; // @synthesize isDictating=_isDictating;
@property(nonatomic) _Bool disableUndoCoalesceBreaking; // @synthesize disableUndoCoalesceBreaking=_disableUndoCoalesceBreaking;
@property(nonatomic) _Bool filterSubstringAttributesForPlainText; // @synthesize filterSubstringAttributesForPlainText=_filterSubstringAttributesForPlainText;
@property(nonatomic) _Bool filterPastedAttributes; // @synthesize filterPastedAttributes=_filterPastedAttributes;
@property(nonatomic) _Bool filterSubstringAttributes; // @synthesize filterSubstringAttributes=_filterSubstringAttributes;
@property(nonatomic) _Bool retainOriginalFormatting; // @synthesize retainOriginalFormatting=_retainOriginalFormatting;
@property(copy, nonatomic) NSArray *pasteboardTypes; // @synthesize pasteboardTypes=_pasteboardTypes;
@property(nonatomic) _Bool shouldConvertTablesToTabs; // @synthesize shouldConvertTablesToTabs=_shouldConvertTablesToTabs;
@property(nonatomic) _Bool convertAttributes; // @synthesize convertAttributes=_convertAttributes;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) TTMergeableStringVersionedDocument *document; // @synthesize document=_document;
@property(nonatomic) struct _NSRange beforeEndEditedRange; // @synthesize beforeEndEditedRange=_beforeEndEditedRange;
@property(readonly, nonatomic) NSMutableArray *deletedRanges; // @synthesize deletedRanges=_deletedRanges;
@property(retain, nonatomic) id <TTTextStorageStyler> styler; // @synthesize styler=_styler;
@property(nonatomic) _Bool wantsUndoCommands; // @synthesize wantsUndoCommands=_wantsUndoCommands;
@property __weak NSObject<TTTextUndoTarget> *overrideUndoTarget; // @synthesize overrideUndoTarget=_overrideUndoTarget;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSAttributedString *_icaxUnfilteredAttributedString;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (id)filteredAttributedSubstringFromRange:(struct _NSRange)arg1;
- (id)dataFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;
- (id)standardizedAttributedStringFixingTextAttachments;
- (void)styleTextInRange:(struct _NSRange)arg1;
- (_Bool)isEditing;
@property(readonly, nonatomic) _Bool isEditingTemporaryAttributes;
- (void)endTemporaryAttributeEditing;
- (void)beginTemporaryAttributeEditing;
- (void)endTemporaryAttributes;
- (void)beginTemporaryAttributes;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (_Bool)ic_containsAttribute:(id)arg1 InRange:(struct _NSRange)arg2;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;
- (void)dd_resetResults;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2;
- (_Bool)_shouldSetOriginalFontAttribute;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)convertNSTablesToTabs:(id)arg1;
- (_Bool)shouldBreakUndoCoalescingWithReplacementRange:(struct _NSRange)arg1 replacementLength:(unsigned long long)arg2;
- (_Bool)isDeletingContentAttachmentWithReplacementRange:(struct _NSRange)arg1 replacementLength:(unsigned long long)arg2;
- (_Bool)textViewHasMarkedText:(struct UITextView *)arg1;
- (_Bool)isEditingOrConvertingMarkedText:(_Bool)arg1;
- (_Bool)isDeletingDictationAttachmentWithReplacementRange:(struct _NSRange)arg1 replacementLength:(unsigned long long)arg2;
- (void)preReplaceCharactersInRange:(struct _NSRange)arg1 withStringLength:(unsigned long long)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)replaceWithDocument:(id)arg1;
- (unsigned long long)mergeWithDocument:(id)arg1;
- (void)saveSelectionDuringBlock:(CDUnknownBlockType)arg1 affinity:(unsigned long long)arg2;
- (void)saveSelectionDuringBlock:(CDUnknownBlockType)arg1;
- (void)restoreSelection:(id)arg1;
- (id)savedSelectionWithSelectionAffinity:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *textViews;
- (void)beginEditing;
- (void)coordinateAccess:(CDUnknownBlockType)arg1;
- (void)coordinateEditing:(CDUnknownBlockType)arg1;
- (void)coordinateReading:(CDUnknownBlockType)arg1;
- (_Bool)mergeableStringIsEqualAfterSerialization:(id)arg1;
- (void)endEditing;
- (void)fixupAfterEditingDelayedToEndOfRunLoop;
- (void)executeDelayedFixupAfterEditing;
- (void)forceFixupAfterEditingIfDelayed;
- (void)fixupAfterEditing;
- (void)resetUndoManager;
- (void)breakUndoCoalescing;
- (id)newCoalescingUndoGroup;
- (void)applyUndoWithBlock:(CDUnknownBlockType)arg1;
- (void)applyUndoGroup:(id)arg1;
- (void)addUndoCommand:(id)arg1;
@property(readonly, nonatomic) NSObject<TTTextUndoTarget> *undoTarget;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
@property(readonly, nonatomic) TTMergeableAttributedString *mergeableString;
- (struct _NSRange)logicalRangeForLocation:(unsigned long long)arg1;
- (id)string;
- (void)editedAttributeRange:(struct _NSRange)arg1;
- (void)editedRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (_Bool)_usesSimpleTextEffects;
- (void)resetTTEdits;
- (id)initWithAttributedString:(id)arg1 replicaID:(id)arg2 sourceZoomController:(id)arg3 keepSourceZoomController:(_Bool)arg4;
- (id)initWithAttributedString:(id)arg1 replicaID:(id)arg2;
- (id)initWithDocument:(id)arg1;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithReplicaID:(id)arg1;
- (id)copyDataForUTI:(id)arg1 range:(struct _NSRange)arg2 persistenceHelper:(id)arg3;
- (id)customPasteboardDataFromRange:(struct _NSRange)arg1 persistenceHelper:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

