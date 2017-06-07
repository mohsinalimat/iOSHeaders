//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSWPInteractiveCanvasController.h>

@class TSAAnnotationController, TSDDrawableInfo;

@interface TSAInteractiveCanvasController : TSWPInteractiveCanvasController
{
    TSDDrawableInfo *mInfoBeingDragInserted;
    _Bool _supportsAnnotations;
    TSAAnnotationController *_annotationController;
}

@property(readonly, nonatomic) TSAAnnotationController *annotationController; // @synthesize annotationController=_annotationController;
@property(readonly, nonatomic) _Bool supportsAnnotations; // @synthesize supportsAnnotations=_supportsAnnotations;
@property(retain, nonatomic) TSDDrawableInfo *infoBeingDragInserted; // @synthesize infoBeingDragInserted=mInfoBeingDragInserted;
@property(readonly, nonatomic) _Bool wantsCanvasReferenceController;
- (id)p_activeTextRep;
- (_Bool)hasInspectableSelection;
- (_Bool)requiresSimilarInfos;
- (_Bool)hasEmptyWPSelection;
- (id)additionalVisibleInfosForCanvas:(id)arg1;
- (void)didSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(_Bool)arg3;
- (void)willSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(_Bool)arg3;
- (void)selectAll:(id)arg1;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)handleHyperlinkGesture:(id)arg1;
- (_Bool)wantsHyperlinkGestureRecognizer;
- (void)unloadDocument;
- (void)loadDocument;
- (void)teardown;
- (void)dealloc;

@end

