//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPShapeInfo.h>

#import <iWorkImport/TSWPTextualEquivalentProvider-Protocol.h>

@class NSArray, NSSet, NSString, TSWPTOCPartitioner, TSWPTOCSettings;
@protocol TSWPTOCController;

__attribute__((visibility("hidden")))
@interface TSWPTOCInfo : TSWPShapeInfo <TSWPTextualEquivalentProvider>
{
    TSWPTOCPartitioner *_partitioner;
    NSArray *_tocEntries;
    id <TSWPTOCController> _tocController;
    TSWPTOCSettings *_tocSettings;
    NSArray *_pageNumberRanges;
}

+ (_Bool)canPartition;
@property(retain, nonatomic) NSArray *pageNumberRanges; // @synthesize pageNumberRanges=_pageNumberRanges;
@property(retain, nonatomic, setter=setTOCSettings:) TSWPTOCSettings *tocSettings; // @synthesize tocSettings=_tocSettings;
@property(nonatomic) __weak id <TSWPTOCController> tocController; // @synthesize tocController=_tocController;
@property(retain, nonatomic, setter=setTOCEntries:) NSArray *tocEntries; // @synthesize tocEntries=_tocEntries;
- (void).cxx_destruct;
- (id)textualEquivalent;
- (void)saveTOCInfoMessage:(struct TOCInfoArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadTOCInfoMessage:(const struct TOCInfoArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)supportsAttachedComments;
- (void)acceptVisitor:(id)arg1;
- (id)referencedStyles;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)regenerateStorageContent;
- (_Bool)p_startingTOCIsRTLForEntries:(id)arg1;
- (id)containedStorageFormattedUsingParagraphStyle:(id)arg1;
@property(readonly, nonatomic) NSSet *paragraphStylesShownInTOC;
@property(readonly, nonatomic) NSArray *visibleTOCEntries;
- (id)partitioner;
- (int)elementKind;
- (Class)repClass;
- (id)copyWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

