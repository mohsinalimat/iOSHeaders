//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSKDocumentObject-Protocol.h>
#import <TSReading/TSPCopying-Protocol.h>

@class NSDate, TSUColor, TSWPChangeSession, TSWPStorage;

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying>
{
    TSWPStorage *_parentStorage;
    int _kind;
    TSWPChangeSession *_session;
    NSDate *_date;
    _Bool _hidden;
}

@property(nonatomic) TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
- (_Bool)isFromChangeSession:(id)arg1;
- (_Bool)canMergeWithKind:(int)arg1 session:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1;
- (void)trackedTextDidChange;
@property(readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property(readonly, nonatomic) TSUColor *textMarkupColor;
@property(readonly, nonatomic) _Bool showsHiddenDeletionMarkup;
@property(readonly, nonatomic) _Bool showsMarkup;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) _Bool isDeletion;
@property(readonly, nonatomic) _Bool isInsertion;
- (void)dealloc;
- (id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3;
@property(retain, nonatomic) NSDate *date;
@property(retain, nonatomic) TSWPChangeSession *session;

@end

