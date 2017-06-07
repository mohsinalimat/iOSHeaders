//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/KNAbstractSlide.h>

#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>

@class KNMasterSlide, KNNoteInfo, NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface KNSlide : KNAbstractSlide <TSKModel, TSKTransformableObject>
{
    KNMasterSlide *mMaster;
    KNNoteInfo *mNote;
    NSMutableSet *mInfosUsingObjectPlaceholderGeometry;
}

+ (id)blankSlideWithSlideNode:(id)arg1 master:(id)arg2 andShow:(id)arg3;
@property(retain, nonatomic) KNNoteInfo *note; // @synthesize note=mNote;
@property(readonly, nonatomic) NSSet *infosUsingObjectPlaceholderGeometry; // @synthesize infosUsingObjectPlaceholderGeometry=mInfosUsingObjectPlaceholderGeometry;
- (void)p_checkMaster;
- (void)addMapForStorage:(id)arg1 forHyperlink:(id)arg2;
- (void)removeMapForStorage:(id)arg1 forHyperlink:(id)arg2;
- (void)updateSlideSpecificHyperlinkMapForStorage:(id)arg1 oldHyperlink:(id)arg2 newHyperlink:(id)arg3;
- (void)updateSlideSpecificLinkMapForInfo:(id)arg1 newHyperlink:(id)arg2;
- (id)p_slideNodeUUIDStringFromURL:(id)arg1;
- (_Bool)p_urlIsSlideSpecific:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)infosToDisplay;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (_Bool)isNoteSelectionPath:(id)arg1;
- (void)removeDrawable:(id)arg1;
- (_Bool)p_oneOrMoreDrawablesMayHaveImplicitBuildEventsInDrawables:(id)arg1;
- (void)insertDrawables:(id)arg1 atIndex:(unsigned long long)arg2 dolcContext:(id)arg3;
@property(readonly, nonatomic) _Bool slideObjectsLayerWithMaster;
- (id)infoCorrespondingToMasterInfo:(id)arg1;
- (id)defaultSlideNumberPlaceholderWithContext:(id)arg1;
- (id)defaultBodyPlaceholderWithContext:(id)arg1;
- (id)defaultTitlePlaceholderWithContext:(id)arg1;
- (void)setToMaster:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
@property(readonly, nonatomic) _Bool areInfosUsingObjectPlaceholderGeometry;
- (void)setInfosUsingObjectPlaceholderGeometry:(id)arg1;
- (void)removeInfoUsingObjectPlaceholderGeometry:(id)arg1;
- (void)addInfoUsingObjectPlaceholderGeometry:(id)arg1;
@property(retain, nonatomic) KNMasterSlide *master;
- (void)dealloc;
- (id)initWithSlideNode:(id)arg1 master:(id)arg2 andShow:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct SlideArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct SlideArchive *)arg1 unarchiver:(id)arg2;
- (_Bool)isComponentRoot;
- (id)packageLocator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

