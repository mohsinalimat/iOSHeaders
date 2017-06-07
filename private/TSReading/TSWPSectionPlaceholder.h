//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSKDocumentObject-Protocol.h>
#import <TSReading/TSWPSection-Protocol.h>

@class TPDocumentRoot, TSWPStorage;

@interface TSWPSectionPlaceholder : TSPObject <TSKDocumentObject, TSWPSection>
{
    TPDocumentRoot *_documentRoot;
    TSWPStorage *_parentStorage;
}

- (id)description;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)setParentStorage:(id)arg1;
- (id)parentStorage;
- (id)copyWithContext:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

