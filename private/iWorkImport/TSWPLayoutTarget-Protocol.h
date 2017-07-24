//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSArray, NSMutableArray, NSObject, TSDCanvas, TSDDrawableInfo, TSDLayout, TSPObject, TSUBezierPath, TSWPStorage;
@protocol TSDHint, TSDInfo, TSWPColumnMetrics, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn, TSWPTopicNumberHints;

@protocol TSWPLayoutTarget <NSObject>
@property(readonly, nonatomic) double maxAnchorY;
@property(readonly, nonatomic) _Bool shouldWrapAroundExternalDrawables;
@property(readonly, nonatomic) _Bool layoutIsValid;
@property(readonly, nonatomic) _Bool textIsVertical;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) unsigned long long pageNumber;
@property(readonly, nonatomic) _Bool wantsLineFragments;
@property(readonly, nonatomic) int naturalDirection;
@property(readonly, nonatomic) int naturalAlignment;
@property(readonly, nonatomic) int verticalAlignment;
@property(readonly, nonatomic) unsigned int autosizeFlags;
@property(readonly, nonatomic) struct CGPoint anchorPoint;
@property(readonly, nonatomic) struct CGPoint position;
@property(readonly, nonatomic) struct CGSize currentSize;
@property(readonly, nonatomic) struct CGSize maxSize;
@property(readonly, nonatomic) struct CGSize minSize;
@property(readonly, nonatomic) _Bool isInstructional;
@property(readonly, nonatomic) TSWPStorage *storage;
@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property(readonly, nonatomic) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumbers;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) NSObject<TSWPTopicNumberHints> *previousTargetTopicNumbers;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;
@property(readonly, retain, nonatomic) NSMutableArray *columns;
- (_Bool)isLayoutOffscreen;
- (void)addAttachmentLayout:(TSDLayout *)arg1;
- (NSArray *)currentAnchoredDrawableLayouts;
- (NSArray *)currentInlineDrawableLayouts;
- (TSDLayout *)validatedLayoutForAnchoredDrawable:(id <TSDInfo>)arg1;
- (TSDLayout *)validatedLayoutForInlineDrawable:(id <TSDInfo>)arg1;
- (struct CGRect)targetRectForCanvasRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;
- (_Bool)isLastTarget;
- (NSObject<TSWPColumnMetrics> *)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;

@optional
@property(readonly, nonatomic) _Bool isLinked;
@property(readonly, nonatomic) _Bool repShouldPreventCaret;
@property(readonly, nonatomic) struct __CFLocale *hyphenationLocale;
@property(readonly, nonatomic) _Bool shouldHyphenate;
@property(readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
@property(readonly, nonatomic) TSDCanvas *canvas;
@property(retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property(readonly, nonatomic) struct CGRect maskRect;
- (_Bool)siblingTargetIsManipulatingDrawable:(TSDDrawableInfo *)arg1;
- (TSUBezierPath *)interiorClippingPath;
- (_Bool)invalidateForPageCountChange;
- (unsigned int)pageIndex;
- (struct CGPoint)anchoredAttachmentPositionFromLayoutPosition:(struct CGPoint)arg1;
- (struct CGPoint)layoutPositionFromAnchoredAttachmentPosition:(struct CGPoint)arg1;
- (struct CGPoint)layoutPositionFromInlineAttachmentPosition:(struct CGPoint)arg1;
@end

